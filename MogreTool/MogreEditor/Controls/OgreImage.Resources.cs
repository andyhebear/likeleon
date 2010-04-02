using System;
using Mogre;

namespace MogreEditor.Controls
{
    partial class OgreImage
    {
        private delegate void MethodInvoker();

        private double resourceItemScalar;
        private double currentProcess;

        private void CallResourceItemLoaded(ResourceLoadEventArgs e)
        {
            Dispatcher.Invoke((MethodInvoker)(() => OnResourceItemLoaded(e)));
        }

        private void OnResourceItemLoaded(ResourceLoadEventArgs e)
        {
            if (ResourceLoadItemProgress != null)
                ResourceLoadItemProgress(this, e);
        }

        private void InitResourceLoad()
        {
            ResourceGroupManager.Singleton.ResourceGroupLoadStarted += Singleton_ResourceGroupLoadStarted;
            ResourceGroupManager.Singleton.ResourceGroupScriptingStarted += Singleton_ResourceGroupScriptingStarted;
            ResourceGroupManager.Singleton.ScriptParseStarted += Singleton_ScriptParseStarted;
            ResourceGroupManager.Singleton.ResourceLoadStarted += Singleton_ResourceLoadStarted;
            ResourceGroupManager.Singleton.WorldGeometryStageStarted += Singleton_WorldGeometryStageStarted;
        }

        private void Singleton_ResourceGroupLoadStarted(string groupName, uint resourceCount)
        {
            this.resourceItemScalar = (resourceCount > 0)? 0.6d / resourceCount : 0;
        }

        private void Singleton_ResourceGroupScriptingStarted(string groupName, uint scriptCount)
        {
            this.resourceItemScalar = (scriptCount > 0)? 0.4d / scriptCount : 0;
        }

        private void Singleton_ScriptParseStarted(string scriptName)
        {
            this.currentProcess += this.resourceItemScalar;
            CallResourceItemLoaded(new ResourceLoadEventArgs(scriptName, this.currentProcess));
        }

        private void Singleton_ResourceLoadStarted(ResourcePtr resource)
        {
            this.currentProcess += this.resourceItemScalar;
            CallResourceItemLoaded(new ResourceLoadEventArgs(resource.Name, this.currentProcess));
        }

        private void Singleton_WorldGeometryStageStarted(string description)
        {
            this.currentProcess += this.resourceItemScalar;
            CallResourceItemLoaded(new ResourceLoadEventArgs(description, this.currentProcess));
        }

        public event EventHandler<ResourceLoadEventArgs> ResourceLoadItemProgress;
    }

    class ResourceLoadEventArgs : EventArgs
    {
        public ResourceLoadEventArgs(string name, double progress)
        {
            this.Name = name;
            this.Progress = progress;
        }

        public string Name { get; private set; }
        public double Progress { get; private set; }
    }
}