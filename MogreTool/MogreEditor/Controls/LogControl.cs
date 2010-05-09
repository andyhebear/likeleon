using System.Windows;
using Mogitor.Data;
using System.Windows.Controls;
using System.ComponentModel;

namespace Mogitor.Controls
{
    [TemplatePart(Name = "PART_LogStringsDisplay", Type = typeof(ListView))]
    class LogControl : Control
    {
        #region Dependency Properties
        /// <summary>
        /// Dependency Property backing store for LogBuffer
        /// </summary>
        public static readonly DependencyProperty LogBufferProperty =
            DependencyProperty.Register("LogBuffer", typeof(LogBuffer), typeof(LogControl), new UIPropertyMetadata(null));
        #endregion

        #region Private Fields
        private ListView logStringsDisplay;
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
                if (LogBuffer != null)
                {
                    LogBuffer.CollectionChanged -= new System.Collections.Specialized.NotifyCollectionChangedEventHandler(LogBuffer_CollectionChanged);
                }
                SetValue(LogBufferProperty, value);
                LogBuffer.CollectionChanged += new System.Collections.Specialized.NotifyCollectionChangedEventHandler(LogBuffer_CollectionChanged);
            }
        }

        void LogBuffer_CollectionChanged(object sender, System.Collections.Specialized.NotifyCollectionChangedEventArgs e)
        {
            if (e.Action == System.Collections.Specialized.NotifyCollectionChangedAction.Add)
            {
                this.logStringsDisplay.Dispatcher.BeginInvoke((System.Action)(() =>
                    {
                        this.logStringsDisplay.ScrollIntoView(e.NewItems[0]);
                    }));
            }
        }

        public override void OnApplyTemplate()
        {
            base.OnApplyTemplate();

            this.logStringsDisplay = this.Template.FindName("PART_LogStringsDisplay", this) as ListView;
        }
        #endregion
    }
}
