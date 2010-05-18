using System;
using System.Collections.Generic;
using System.Windows.Forms;
using AutoWrap.Meta;

namespace AutoWrap
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main(string[] args)
        {
            Globals.NativeNamespace = "Ogre";
            Globals.ManagedNamespace = "Mogre";

            MetaDefinition meta = new MetaDefinition(@"..\..\..\cpp2java\build\meta.xml", "Mogre");
            meta.AddAttributes(@"..\..\Attributes.xml");

            Wrapper wrapper = new Wrapper(meta, @"..\..\..\Mogre\include\auto", @"..\..\..\Mogre\src\auto", "Mogre", "Ogre");

            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1(wrapper));
        }
    }
}