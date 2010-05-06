/*
-----------------------------------------------------------------------------
This source file is part of OGRE
(Object-oriented Graphics Rendering Engine)
For the latest info, see http://www.ogre3d.org

Copyright (c) 2000-2006 Torus Knot Software Ltd
Also see acknowledgements in Readme.html

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place - Suite 330, Boston, MA 02111-1307, USA, or go to
http://www.gnu.org/copyleft/lesser.txt.

You may alternatively use this source under the terms of a specific version of
the OGRE Unrestricted License provided you have obtained such a license from
Torus Knot Software Ltd.
-----------------------------------------------------------------------------
*/
#include "OgreStableHeaders.h"
#include "OgreSimpleRenderable.h"
#include "OgreException.h"
#include "OgreSceneNode.h"

#include "OgreMaterialManager.h"

#include "OgreHardwareVertexBuffer.h"
#include "OgreHardwareBufferManager.h"
#include "OgreTechnique.h"

namespace Ogre {

    uint SimpleRenderable::ms_uGenNameCount = 0;

    SimpleRenderable::SimpleRenderable()
    {
        m_matWorldTransform = Matrix4::IDENTITY;

        m_strMatName = "BaseWhite"; 
        m_pMaterial = MaterialManager::getSingleton().getByName("BaseWhite");

        m_pParentSceneManager = NULL;

        mParentNode = NULL;
        m_pCamera = NULL;

        // Generate name
		StringUtil::StrStreamType name;
		name << "SimpleRenderable" << ms_uGenNameCount++;
		mName = name.str();
    }

    void SimpleRenderable::setMaterial( const String& matName )
    {
        m_strMatName = matName;
        m_pMaterial = MaterialManager::getSingleton().getByName(m_strMatName);
		if (m_pMaterial.isNull())
			OGRE_EXCEPT( Exception::ERR_ITEM_NOT_FOUND, "Could not find material " + m_strMatName,
				"SimpleRenderable::setMaterial" );
    
        // Won't load twice anyway
        m_pMaterial->load();
    }

    const MaterialPtr& SimpleRenderable::getMaterial(void) const
    {
        return m_pMaterial;
    }

    void SimpleRenderable::getRenderOperation(RenderOperation& op)
    {
        op = mRenderOp;
    }

    void SimpleRenderable::setRenderOperation( const RenderOperation& rend )
    {
        mRenderOp = rend;
    }

    void SimpleRenderable::setWorldTransform( const Matrix4& xform )
    {
        m_matWorldTransform = xform;
    }

    void SimpleRenderable::getWorldTransforms( Matrix4* xform ) const
    {
        *xform = m_matWorldTransform * mParentNode->_getFullTransform();
    }
    //-----------------------------------------------------------------------
    const Quaternion& SimpleRenderable::getWorldOrientation(void) const
    {
        return mParentNode->_getDerivedOrientation();
    }
    //-----------------------------------------------------------------------
    const Vector3& SimpleRenderable::getWorldPosition(void) const
    {
        return mParentNode->_getDerivedPosition();
    }

    void SimpleRenderable::_notifyCurrentCamera(Camera* cam)
    {
		MovableObject::_notifyCurrentCamera(cam);

        m_pCamera = cam;
    }

    void SimpleRenderable::setBoundingBox( const AxisAlignedBox& box )
    {
        mBox = box;
    }

    const AxisAlignedBox& SimpleRenderable::getBoundingBox(void) const
    {
        return mBox;
    }

    void SimpleRenderable::_updateRenderQueue(RenderQueue* queue)
    {
        queue->addRenderable( this, mRenderQueueID, OGRE_RENDERABLE_DEFAULT_PRIORITY); 
    }

    SimpleRenderable::~SimpleRenderable()
    {
    }
    //-----------------------------------------------------------------------
    const String& SimpleRenderable::getMovableType(void) const
    {
        static String movType = "SimpleRenderable";
        return movType;
    }
    //-----------------------------------------------------------------------
    const LightList& SimpleRenderable::getLights(void) const
    {
        // Use movable query lights
        return queryLights();
    }

	OBBoxRenderable::OBBoxRenderable(String matname, ColourValue colour)
	{
		mRenderOp.vertexData = new VertexData();
		mRenderOp.indexData = 0;
		mRenderOp.vertexData->vertexCount = 48;
		mRenderOp.vertexData->vertexStart = 0;
		mRenderOp.operationType = RenderOperation::OT_LINE_LIST;
		mRenderOp.useIndexes = false;
		VertexDeclaration* decl = mRenderOp.vertexData->vertexDeclaration;
		VertexBufferBinding* bind = mRenderOp.vertexData->vertexBufferBinding;
		decl->addElement(0, 0, VET_FLOAT3, VES_POSITION);
		HardwareVertexBufferSharedPtr vbuf = HardwareBufferManager::getSingleton().createVertexBuffer(
			decl->getVertexSize(0), mRenderOp.vertexData->vertexCount, HardwareBuffer::HBU_STATIC_WRITE_ONLY);
		// Bind buffer
		bind->setBinding(0, vbuf);
		// setup material
		ResourceManager::ResourceCreateOrRetrieveResult result = MaterialManager::getSingleton().createOrRetrieve(matname, "General");
		if(result.second)
		{
			MaterialPtr matptrOBBoxManualMaterial = result.first;
			matptrOBBoxManualMaterial->setReceiveShadows(false);
			matptrOBBoxManualMaterial->getTechnique(0)->setLightingEnabled(true);
			matptrOBBoxManualMaterial->getTechnique(0)->getPass(0)->setDiffuse(colour);
			matptrOBBoxManualMaterial->getTechnique(0)->getPass(0)->setAmbient(colour);
			matptrOBBoxManualMaterial->getTechnique(0)->getPass(0)->setSelfIllumination(colour);
		}
		this->setCastShadows(false);
		this->setQueryFlags(0); // set a query flag to exlude from queries (if necessary).
		this->setMaterial(matname);
	}

	OBBoxRenderable::~OBBoxRenderable()
	{
		delete mRenderOp.vertexData;
	}

	void OBBoxRenderable::setupVertices(const AxisAlignedBox& aab)
	{
		Vector3 vmax = aab.getMaximum();
		Vector3 vmin = aab.getMinimum();
		Real maxdistground = vmax.y;
		Real mindistground = vmin.y;
		Real maxx = vmax.x;
		Real maxy = vmax.y;
		Real maxz = vmax.z;
		Real minx = vmin.x;
		Real miny = vmin.y;
		Real minz = vmin.z;

		Real xdiff = (vmax.x - vmin.x) / 4.0f;
		Real ydiff = (vmax.y - vmin.y) / 4.0f;
		Real zdiff = (vmax.z - vmin.z) / 4.0f;


		// fill in the Vertex buffer: 12 lines with 2 endpoints each make up a box
		HardwareVertexBufferSharedPtr vbuf = mRenderOp.vertexData->vertexBufferBinding->getBuffer(0);
		float* pPos = static_cast<float*>(vbuf->lock(HardwareBuffer::HBL_DISCARD));
		// line 0
		*pPos++ = minx;
		*pPos++ = miny;
		*pPos++ = minz;

		*pPos++ = minx + xdiff;
		*pPos++ = miny;
		*pPos++ = minz;

		*pPos++ = maxx - xdiff;
		*pPos++ = miny;
		*pPos++ = minz;

		*pPos++ = maxx;
		*pPos++ = miny;
		*pPos++ = minz;
		// line 1
		*pPos++ = minx;
		*pPos++ = miny;
		*pPos++ = minz;

		*pPos++ = minx;
		*pPos++ = miny;
		*pPos++ = minz + zdiff;

		*pPos++ = minx;
		*pPos++ = miny;
		*pPos++ = maxz - zdiff;

		*pPos++ = minx;
		*pPos++ = miny;
		*pPos++ = maxz;
		// line 2
		*pPos++ = minx;
		*pPos++ = miny;
		*pPos++ = minz;

		*pPos++ = minx;
		*pPos++ = miny + ydiff;
		*pPos++ = minz;

		*pPos++ = minx;
		*pPos++ = maxy - ydiff;
		*pPos++ = minz;

		*pPos++ = minx;
		*pPos++ = maxy;
		*pPos++ = minz;
		// line 3
		*pPos++ = minx;
		*pPos++ = maxy;
		*pPos++ = minz;

		*pPos++ = minx;
		*pPos++ = maxy;
		*pPos++ = minz + zdiff;

		*pPos++ = minx;
		*pPos++ = maxy;
		*pPos++ = maxz - zdiff;

		*pPos++ = minx;
		*pPos++ = maxy;
		*pPos++ = maxz;
		// line 4
		*pPos++ = minx;
		*pPos++ = maxy;
		*pPos++ = minz;

		*pPos++ = minx + xdiff;
		*pPos++ = maxy;
		*pPos++ = minz;

		*pPos++ = maxx - zdiff;
		*pPos++ = maxy;
		*pPos++ = minz;

		*pPos++ = maxx;
		*pPos++ = maxy;
		*pPos++ = minz;
		// line 5
		*pPos++ = maxx;
		*pPos++ = miny;
		*pPos++ = minz;

		*pPos++ = maxx;
		*pPos++ = miny;
		*pPos++ = minz + zdiff;

		*pPos++ = maxx;
		*pPos++ = miny;
		*pPos++ = maxz - zdiff;

		*pPos++ = maxx;
		*pPos++ = miny;
		*pPos++ = maxz;
		// line 6
		*pPos++ = maxx;
		*pPos++ = miny;
		*pPos++ = minz;

		*pPos++ = maxx;
		*pPos++ = miny + ydiff;
		*pPos++ = minz;

		*pPos++ = maxx;
		*pPos++ = maxy - ydiff;
		*pPos++ = minz;

		*pPos++ = maxx;
		*pPos++ = maxy;
		*pPos++ = minz;
		// line 7
		*pPos++ = minx;
		*pPos++ = maxy;
		*pPos++ = maxz;

		*pPos++ = minx + xdiff;
		*pPos++ = maxy;
		*pPos++ = maxz;

		*pPos++ = maxx - xdiff;
		*pPos++ = maxy;
		*pPos++ = maxz;

		*pPos++ = maxx;
		*pPos++ = maxy;
		*pPos++ = maxz;
		// line 8
		*pPos++ = minx;
		*pPos++ = miny;
		*pPos++ = maxz;

		*pPos++ = minx;
		*pPos++ = miny + ydiff;
		*pPos++ = maxz;

		*pPos++ = minx;
		*pPos++ = maxy - ydiff;
		*pPos++ = maxz;

		*pPos++ = minx;
		*pPos++ = maxy;
		*pPos++ = maxz;

		// line 9
		*pPos++ = maxx;
		*pPos++ = maxy;
		*pPos++ = minz;

		*pPos++ = maxx;
		*pPos++ = maxy;
		*pPos++ = minz + zdiff;

		*pPos++ = maxx;
		*pPos++ = maxy;
		*pPos++ = maxz - zdiff;

		*pPos++ = maxx;
		*pPos++ = maxy;
		*pPos++ = maxz;
		// line 10
		*pPos++ = maxx;
		*pPos++ = miny;
		*pPos++ = maxz;

		*pPos++ = maxx;
		*pPos++ = miny + ydiff;
		*pPos++ = maxz;

		*pPos++ = maxx;
		*pPos++ = maxy - ydiff;
		*pPos++ = maxz;

		*pPos++ = maxx;
		*pPos++ = maxy;
		*pPos++ = maxz;
		// line 11
		*pPos++ = minx;
		*pPos++ = miny;
		*pPos++ = maxz;

		*pPos++ = minx + xdiff;
		*pPos++ = miny;
		*pPos++ = maxz;

		*pPos++ = maxx - xdiff;
		*pPos++ = miny;
		*pPos++ = maxz;

		*pPos++ = maxx;
		*pPos++ = miny;
		*pPos++ = maxz;
		vbuf->unlock();
		// setup the bounding box of this SimpleRenderable
		setBoundingBox(aab);
	}

	Real OBBoxRenderable::getSquaredViewDepth(const Camera* cam)const
	{
		Vector3 min, max, mid, dist;
		min = mBox.getMinimum();
		max = mBox.getMaximum();
		mid = ((max - min) * 0.5) + min;
		dist = cam->getDerivedPosition() - mid;
		return dist.squaredLength();
	}

	Real OBBoxRenderable::getBoundingRadius()const
	{
		return 0;
	}

	void OBBoxRenderable::getWorldTransforms (Matrix4 *xform)const
	{
		SimpleRenderable::getWorldTransforms (xform);
	}
}
