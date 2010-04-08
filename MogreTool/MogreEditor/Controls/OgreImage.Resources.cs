using System;
using Mogre;

namespace Mogitor.Controls
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
            ResourceGroupManager.Singleton.ResourceGroupLoadStarted += (groupName, resourceCount) =>
                {
                    this.resourceItemScalar = (resourceCount > 0) ? 0.6d / resourceCount : 0;
                };
            ResourceGroupManager.Singleton.ResourceGroupLoadEnded += (groupName) =>
                {
                    CallResourceItemLoaded(new ResourceLoadEventArgs(groupName, 1.0));
                };

            ResourceGroupManager.Singleton.ResourceGroupScriptingStarted += (groupName, scriptCount) =>
                {
                    this.resourceItemScalar = (scriptCount > 0) ? 0.4d / scriptCount : 0;
                };
            ResourceGroupManager.Singleton.ResourceGroupScriptingEnded += (groupName) =>
                {
                    CallResourceItemLoaded(new ResourceLoadEventArgs(groupName, 1.0));
                };

            ResourceGroupManager.Singleton.ScriptParseStarted += (scriptName) =>
                {
                    this.currentProcess += this.resourceItemScalar;
                    CallResourceItemLoaded(new ResourceLoadEventArgs(scriptName, this.currentProcess));
                };
            ResourceGroupManager.Singleton.ScriptParseStarted += (scriptName) =>
                {
                    CallResourceItemLoaded(new ResourceLoadEventArgs(scriptName, 1.0));
                };

            ResourceGroupManager.Singleton.ResourceLoadStarted += (resource) =>
                {
                    this.currentProcess += this.resourceItemScalar;
                    CallResourceItemLoaded(new ResourceLoadEventArgs(resource.Name, this.currentProcess));
                };
            ResourceGroupManager.Singleton.WorldGeometryStageStarted += (description) =>
                {
                    this.currentProcess += this.resourceItemScalar;
                    CallResourceItemLoaded(new ResourceLoadEventArgs(description, this.currentProcess));
                };
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