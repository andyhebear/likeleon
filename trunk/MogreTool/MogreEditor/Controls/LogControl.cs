using System.Windows;
using Mogitor.Data;
using System.Windows.Controls;
using System.ComponentModel;

namespace Mogitor.Controls
{
    class LogControl : Control
    {
        #region Fields
        /// <summary>
        /// Dependency Property backing store for LogBuffer
        /// </summary>
        public static readonly DependencyProperty LogBufferProperty =
            DependencyProperty.Register("LogBuffer", typeof(LogBuffer), typeof(LogControl), new UIPropertyMetadata(null));
        #endregion

        #region Public Properties
        /// <summary>
        /// Gets or sets the logbuffer to display.
        /// </summary>
        public LogBuffer LogBuffer
        {
            get { return (LogBuffer)GetValue(LogBufferProperty); }
            set 
            {
                SetValue(LogBufferProperty, value);
            }
        }
        #endregion
    }
}
