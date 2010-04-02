/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreMaterialSerializer.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class MaterialScriptSection
	{
		MSS_NONE = Ogre::MSS_NONE,
		MSS_MATERIAL = Ogre::MSS_MATERIAL,
		MSS_TECHNIQUE = Ogre::MSS_TECHNIQUE,
		MSS_PASS = Ogre::MSS_PASS,
		MSS_TEXTUREUNIT = Ogre::MSS_TEXTUREUNIT,
		MSS_PROGRAM_REF = Ogre::MSS_PROGRAM_REF,
		MSS_PROGRAM = Ogre::MSS_PROGRAM,
		MSS_DEFAULT_PARAMETERS = Ogre::MSS_DEFAULT_PARAMETERS,
		MSS_TEXTURESOURCE = Ogre::MSS_TEXTURESOURCE
	};
	
	typedef Ogre::ATTRIBUTE_PARSER ATTRIBUTE_PARSER;
	
	//################################################################
	//MaterialSerializer
	//################################################################
	
	public ref class MaterialSerializer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MaterialSerializer( Ogre::MaterialSerializer* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~MaterialSerializer()
		{
			this->!MaterialSerializer();
		}
		!MaterialSerializer()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::MaterialSerializer* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		MaterialSerializer( );
	
	
		property String^ QueuedAsString
		{
		public:
			String^ get();
		}
	
		void QueueForExport( Mogre::MaterialPtr^ pMat, bool clearQueued, bool exportDefaults );
		void QueueForExport( Mogre::MaterialPtr^ pMat, bool clearQueued );
		void QueueForExport( Mogre::MaterialPtr^ pMat );
	
		void ExportQueued( String^ filename, bool includeProgDef, String^ programFilename );
		void ExportQueued( String^ filename, bool includeProgDef );
		void ExportQueued( String^ filename );
	
		void ExportMaterial( Mogre::MaterialPtr^ pMat, String^ filename, bool exportDefaults, bool includeProgDef, String^ programFilename );
		void ExportMaterial( Mogre::MaterialPtr^ pMat, String^ filename, bool exportDefaults, bool includeProgDef );
		void ExportMaterial( Mogre::MaterialPtr^ pMat, String^ filename, bool exportDefaults );
		void ExportMaterial( Mogre::MaterialPtr^ pMat, String^ filename );
	
		void ClearQueue( );
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( MaterialSerializer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
