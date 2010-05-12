using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    partial class MogitorsRoot
    {
        #region Fields
        private int objCounter;
        private readonly NameObjectPairList nameList = new NameObjectPairList();
        private readonly NameObjectPairList[] namesByType;
        private readonly NameObjectPairList[] namesByTypeID;
        private BaseEditor sceneManagerEditor;
        private BaseEditor rootEditor;
        private readonly EditorObjectFactoryMap editorObjectFactories = new EditorObjectFactoryMap();
        private uint editorObjectTypeIDCounter;
        private BaseEditor selectedEditor;
        private ViewportEditor activeViewport;
        #endregion

        #region Properties
        public BaseEditor SceneManagerEditor
        {
            get
            {
                if (this.sceneManagerEditor == null)
                    this.sceneManagerEditor = FindObject(GetFirstSceneManager().Name, (int)EditorType.SceneManager);
                return this.sceneManagerEditor;
            }
        }

        public Mogre.SceneManager SceneManager
        {
            get
            {
                if (this.sceneManager == null)
                    this.sceneManager = GetFirstSceneManager();
                return this.sceneManager;
            }
        }

        public BaseEditor RootEditor
        {
            get { return this.rootEditor; }
        }

        public ViewportEditor ActiveViewport
        {
            get { return this.activeViewport; }
            set
            {
                this.activeViewport = value;
                OnPropertyChanged("ActiveViewport");
            }
        }

        public EditorObjectFactoryMap EditorObjectFactories
        {
            get { return this.editorObjectFactories; }
        }

        public BaseEditor Selected
        {
            get { return this.selectedEditor; }
            set { this.selectedEditor = value; }
        }
        #endregion

        #region Public Methods
        public string CreateUniqueID(string n1, string n2, int seed)
        {
            int temp = seed;

            if (seed < 0)
                seed = ++this.objCounter;

            string tail = "#" + Mogre.StringConverter.ToString(seed);
            if (n2 != "")
            {
                while (FindObject(n1 + tail, 0) != null || FindObject(n2 + tail, 0) != null)
                {
                    tail = "#" + Mogre.StringConverter.ToString(++seed);
                }
            }
            else
            {
                while (FindObject(n1 + tail, 0) != null)
                {
                    tail = "#" + Mogre.StringConverter.ToString(++seed);
                }
            }

            if (temp < 0)
                this.objCounter = seed;

            return tail;
        }

        public void UnRegisterObjectName(string name, BaseEditor obj)
        {
            if (this.nameList.ContainsKey(name))
                this.nameList.Remove(name);

            if (this.namesByType[(int)obj.EditorType].ContainsKey(name))
                this.namesByType[(int)obj.EditorType].Remove(name);

            if (this.namesByTypeID[(int)obj.ObjectTypeID].ContainsKey(name))
                this.namesByTypeID[(int)obj.ObjectTypeID].Remove(name);
        }

        public BaseEditor CreateEditorObject(BaseEditor parent, string objectTypeString, Mogre.NameValuePairList param, bool addToTreeList, bool display)
        {
            if (parent == null)
            {
                Mogre.NameValuePairList.Iterator ni;
                if ((ni = param.Find("ParentNode")) != param.End())
                {
                    parent = FindObject(ni.Value, 0);
                }

                if (parent == null)
                {
                    if (SceneManager == null)
                        parent = this.rootEditor;
                    else
                        parent = SceneManagerEditor;
                }
            }

            BaseEditorFactory factory = GetEditorObjectFactory(objectTypeString);
            if (factory == null)
                return null;

            BaseEditor obj = factory.CreateObject(ref parent, param);

            if (obj == null)
                return null;

            RegisterObjectName(obj.Name, obj);

            parent.AddChild(obj);

            if (addToTreeList)
            {
                object handle = this.system.InsertTreeItem(parent.TreeItemHandle, obj.Name, obj.ObjectTypeID, System.Windows.Media.Colors.Black);
                obj.TreeItemHandle = handle;
            }

            if (display)
            {
                obj.Load();
                obj.UpdateTreeView();
            }

            IsSceneModified = true;
            return obj;
        }

        public BaseEditor FindObject(string name, uint type)
        {
            if (type == 0)
            {
                if (this.nameList.ContainsKey(name))
                    return this.nameList[name] as BaseEditor;
            }
            else
            {
                if (this.namesByType[(int)type].ContainsKey(name))
                    return namesByType[(int)type][name] as BaseEditor;
            }
            return null;
        }

        public void RegisterObjectName(string name, BaseEditor obj)
        {
            this.nameList.Add(name, obj);
            this.namesByType[(int)obj.EditorType].Add(name, obj);
            this.namesByTypeID[(int)obj.ObjectTypeID].Add(name, obj);
        }

        public NameObjectPairList GetObjectsByType(EditorType type)
        {
            if (type < EditorType.LastEditor)
                return this.namesByType[(int)type];
            else
                return this.namesByType[0];
        }

        public void GetObjectList(EditorType type, ObjectVector list)
        {
            list.Clear();
            if (type == EditorType.Multisel)
                return;
            if (type != EditorType.Node)
            {
                foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)type])
                {
                    list.Add(it.Value);
                }
            }
            else
            {
                this.rootEditor.GetNodeList(list);
            }
        }

        public Mogre.Vector3 GetGizmoIntersectCameraPlane(BaseEditor obj, Mogre.Ray pickRay)
        {
            Mogre.Vector3 vPos = obj.DerivedPosition;
            Mogre.Pair<bool, float> result = pickRay.Intersects(new Mogre.Plane(-ActiveViewport.CameraEditor.Camera.DerivedDirection, vPos));

            if (result.first)
            {
                Mogre.Vector3 AxisX = obj.DerivedOrientation.XAxis;
                Mogre.Vector3 AxisY = obj.DerivedOrientation.YAxis;
                Mogre.Vector3 AxisZ = obj.DerivedOrientation.ZAxis;

                Mogre.Vector3 Proj = pickRay.GetPoint(result.second) - vPos;
                Mogre.Vector3 vPos1 = (AxisX.DotProduct(Proj) * AxisX);
                Mogre.Vector3 vPos2 = (AxisY.DotProduct(Proj) * AxisY);
                Mogre.Vector3 vPos3 = (AxisZ.DotProduct(Proj) * AxisZ);
                vPos += vPos1 + vPos2 + vPos3;
            }

            return vPos;
        }

        public void DestroyEditorObject(BaseEditor obj, bool removeFromTreeList)
        {
            // Index0 Viewport can not be deleted
            if (obj.EditorType == EditorType.Viewport)
            {
                ViewportEditor viewport = obj as ViewportEditor;

                if (viewport.ViewportIndex == 1)
                {
                    MogitorsSystem.Instance.DisplayMessageDialog("Can not delete the main viewport!!", System.Windows.MessageBoxButton.OK);
                    return;
                }

                if (ActiveViewport == viewport)
                {
                    foreach (var vt in this.namesByType[(int)EditorType.Viewport])
                    {
                        if (vt.Value == obj)
                            continue;

                        ActiveViewport = vt.Value as ViewportEditor;
                        break;
                    }
                }
            }

            if (this.selectedEditor == obj)
            {
                obj.IsSelected = false;
                obj.IsHighLighted = false;
            }

            if (removeFromTreeList)
            {
                this.system.DeleteTreeItem(obj.TreeItemHandle);
            }

            if (obj.Parent != null)
                obj.Parent.RemoveChild(obj.Name);

            obj.FactoryDynamic.DestroyObject(obj);

            IsSceneModified = true;
        }

        public bool PickEntity(Mogre.RaySceneQuery raySceneQuery, Mogre.Ray ray, out Mogre.Entity result, Mogre.Vector3 hitPoint, string excludedObject, float maxDistance)
        {
            result = null;

            raySceneQuery.Ray = ray;
            raySceneQuery.QueryMask = QueryFlags.Movable;
            raySceneQuery.SetSortByDistance(true);

            if (raySceneQuery.Execute().Count <= 0)
            {
                result = null;
                return false;
            }

            // at this point we have raycast to a series of different objects bounding boxes.
            float closestDistance = maxDistance;
            Mogre.Vector3 closestResult = Mogre.Vector3.ZERO;
            foreach (var thisResult in raySceneQuery.GetLastResults())
            {
                // stop checking if we have found a raycast hit that is closer
                // than all remaining entities
                if ((closestDistance >= 0.0f) && (closestDistance < thisResult.distance))
                    break;

                // only check this result if its a hit against an entity
                if ((thisResult.movable != null) && (thisResult.movable.MovableType == "Entity"))
                {
                    Mogre.Entity entity = thisResult.movable as Mogre.Entity;

                    if (!entity.Visible || entity.Name == excludedObject)
                        continue;

                    // mesh data to retrieve
                    uint vertexCount, indexCount;
                    Mogre.Vector3[] vertices;
                    uint[] indices;

                    // get the mesh information
                    GetMeshInformationEx(entity.GetMesh(), out vertexCount, out vertices, out indexCount, out indices,
                                         entity.ParentNode._getDerivedPosition(),
                                         entity.ParentNode._getDerivedOrientation(),
                                         entity.ParentNode._getDerivedScale());

                    // test for hitting individual triangles on the mesh
                    bool newClosestFound = false;
                    for (uint i = 0; i < indexCount; i += 3)
                    {
                        // check for a hit against this triangle
                        Mogre.Pair<bool, float> hit = Mogre.Math.Intersects(ray, vertices[indices[i]], vertices[indices[i + 1]], vertices[indices[i + 2]], true, false);

                        // if it was a hit check if its the closest
                        if (hit.first)
                        {
                            if ((closestDistance < 0.0f) || (hit.second < closestDistance))
                            {
                                // this is the closes so far, save it off
                                closestDistance = hit.second;
                                newClosestFound = true;
                            }
                        }
                    }

                    // if we found a new closes raycast for this object, update the
                    // closes_result before moving on to the next object.
                    if (newClosestFound)
                    {
                        closestResult = ray.GetPoint(closestDistance);
                        result = entity;
                    }
                }
            }

            // Return the result
            if (closestDistance != maxDistance)
            {
                hitPoint = closestResult;
                return true;
            }
            else
            {
                // Raycast failed
                return false;
            }
        }
        #endregion

        #region Private Methods
        private Mogre.SceneManager GetFirstSceneManager()
        {
            if (this.namesByType[(int)EditorType.SceneManager].Count > 0)
                return this.namesByType[(int)EditorType.SceneManager].First().Value.SceneManager;
            else
                return null;
        }

        private void RegisterAllEditorObjects()
        {
            editorObjectTypeIDCounter = 0;

            RegisterEditorFactory(BaseEditor.Factory);
            RegisterEditorFactory(Mogitor.Data.SceneManagerEditor.Factory);
            RegisterEditorFactory(ViewportEditor.Factory);
            RegisterEditorFactory(EntityEditor.Factory);
            RegisterEditorFactory(CameraEditor.Factory);
            RegisterEditorFactory(NodeEditor.Factory);

            foreach (KeyValuePair<string, BaseEditorFactory> factory in this.editorObjectFactories)
            {
                if (factory.Value != null)
                    factory.Value.Init();
            }
        }

        private void RegisterEditorFactory(BaseEditorFactory factory)
        {
            if (this.editorObjectFactories.ContainsKey(factory.TypeName) == false)
            {
                this.editorObjectFactories.Add(factory.TypeName, factory);
                factory.TypeID = this.editorObjectTypeIDCounter++;
            }
        }

        private BaseEditorFactory GetEditorObjectFactory(string typeName)
        {
            if (this.editorObjectFactories.ContainsKey(typeName) == false)
                return null;
            return this.editorObjectFactories[typeName];
        }

        private void ClearEditors()
        {
            this.activeDragData = null;

            // Make sure to unload all the viewports first, since they are dependent on SceneManager
            // but they share the same parent with scene manager and scene manager may get deleted before they do
            foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)EditorType.Viewport])
                it.Value.UnLoad();

            this.rootEditor.Destroy(false);
            this.rootEditor = null;

            ActiveViewport = null;
            this.sceneManager = null;
            this.sceneManagerEditor = null;
            this.selectedEditor = null;
            this.objCounter = 0;
            IsSceneModified = false;
            IsSceneLoaded = false;
            this.nameList.Clear();
            SceneUpdated = null;
            
            foreach (KeyValuePair<string, BaseEditorFactory> it in this.editorObjectFactories)
            {
                if (it.Value != null)
                    it.Value.InstanceCount = 0;
            }

            foreach (NameObjectPairList it in this.namesByType)
            {
                it.Clear();
            }

            foreach (NameObjectPairList it in this.namesByTypeID)
            {
                it.Clear();
            }

            BaseEditor parent = null;
            Mogre.NameValuePairList parameters = new Mogre.NameValuePairList();
            this.rootEditor = BaseEditor.Factory.CreateObject(ref parent, parameters);
        }

        private unsafe void GetMeshInformationEx(Mogre.MeshPtr mesh, out uint vertexCount, out Mogre.Vector3[] vertices,
                                          out uint indexCount, out uint[] indices,
                                          Mogre.Vector3 position, Mogre.Quaternion orient, Mogre.Vector3 scale)
        {
            bool addedShared = false;

            vertexCount = indexCount = 0;

            // Calculate how many vertices and indicies we're going to need
            foreach (var subMesh in mesh.GetSubMeshIterator())
            {
                // We only need to add the shared vertices once
                if (subMesh.useSharedVertices)
                {
                    if (!addedShared)
                    {
                        vertexCount += mesh.sharedVertexData.vertexCount;
                        addedShared = true;
                    }
                }
                else
                {
                    vertexCount += subMesh.vertexData.vertexCount;
                }

                // Add the indices
                indexCount += subMesh.indexData.indexCount;
            }

            // Allocate space for the vertices and indices
            vertices = new Mogre.Vector3[vertexCount];
            indices = new uint[indexCount];

            addedShared = false;

            uint sharedOffset = 0;
            uint currentOffset = 0;
            uint nextOffset = 0;
            uint indexOffset = 0;

            // Run through the submeshes again, adding the data into the arrays
            foreach (var subMesh in mesh.GetSubMeshIterator())
            {
                Mogre.VertexData vertexData = subMesh.useSharedVertices ? mesh.sharedVertexData : subMesh.vertexData;

                if ((!subMesh.useSharedVertices) || (subMesh.useSharedVertices && !addedShared))
                {
                    if (subMesh.useSharedVertices)
                    {
                        addedShared = true;
                        sharedOffset = currentOffset;
                    }

                    Mogre.VertexElement posElem = vertexData.vertexDeclaration.FindElementBySemantic(Mogre.VertexElementSemantic.VES_POSITION);

                    Mogre.HardwareVertexBufferSharedPtr vbuf = vertexData.vertexBufferBinding.GetBuffer(posElem.Source);

                    byte* vertex = (byte *)vbuf.Lock(Mogre.HardwareBuffer.LockOptions.HBL_READ_ONLY);
                    float* pReal;

                    for (uint j = 0; j < vertexData.vertexCount; ++j, vertex += vbuf.VertexSize)
                    {
                        posElem.BaseVertexPointerToElement(vertex, &pReal);

                        Mogre.Vector3 pt = new Mogre.Vector3(pReal[0], pReal[1], pReal[2]);

                        vertices[currentOffset + j] = (orient * (pt * scale)) + position;
                    }

                    vbuf.Unlock();
                    nextOffset += vertexData.vertexCount;
                }

                Mogre.IndexData indexData = subMesh.indexData;
                uint numTris = indexData.indexCount / 3;
                Mogre.HardwareIndexBufferSharedPtr ibuf = indexData.indexBuffer;

                bool use32bitIndexes = (ibuf.Type == Mogre.HardwareIndexBuffer.IndexType.IT_32BIT);

                uint* pLong = (uint*)(ibuf.Lock(Mogre.HardwareBuffer.LockOptions.HBL_READ_ONLY));
                ushort* pShort = (ushort*)(pLong);

                uint offset = (subMesh.useSharedVertices) ? sharedOffset : currentOffset;

                if (use32bitIndexes)
                {
                    for (uint k = 0; k < numTris * 3; ++k)
                    {
                        indices[indexOffset++] = pLong[k] + (uint)offset;
                    }
                }
                else
                {
                    for (uint k = 0; k < numTris * 3; ++k)
                    {
                        indices[indexOffset++] = (uint)(pShort[k]) + (uint)offset;
                    }
                }

                ibuf.Unlock();
                currentOffset = nextOffset;
            }
        }
        #endregion
    }
}
