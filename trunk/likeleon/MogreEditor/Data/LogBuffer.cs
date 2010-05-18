using System;
using System.Collections.ObjectModel;
using Mogre;

namespace Mogitor.Data
{
    class LogData
    {
        public LogData(DateTime dateTime, Mogre.LogMessageLevel level, string message, string logName)
        {
            DateTime = dateTime;
            Level = level;
            Message = message;
            LogName = logName;
        }

        public DateTime DateTime { get; private set; }
        public LogMessageLevel Level { get; private set; }
        public string Message { get; private set; }
        public string LogName { get; private set; }
    };

    class LogBuffer : ObservableCollection<LogData>
    {
    }
}
