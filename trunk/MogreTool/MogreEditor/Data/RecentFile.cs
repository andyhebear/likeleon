using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Input;
using UpdateControls.XAML;

namespace Mogitor.Data
{
    public interface IFileHandler
    {
        void Open(string fileName);
    }

    public class RecentFile
    {
        private int index;
        private string fileName;
        private IFileHandler fileHandler;

        public RecentFile(int index, string fileName, IFileHandler fileHandler)
        {
            this.index = index;
            this.fileName = fileName;
            this.fileHandler = fileHandler;
        }

        public string FileName
        {
            get { return string.Format("_{0} - {1}", this.index + 1, this.fileName); }
        }

        public ICommand Open
        {
            get
            {
                return MakeCommand.Do(() => fileHandler.Open(this.fileName));
            }
        }
    }
}
