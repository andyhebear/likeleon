using System;
using System.Windows.Data;

namespace Mogitor
{
    [ValueConversion(typeof(double), typeof(object))]
    public class DoubleToScaleStringConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
        {
            return "x" + String.Format("{0:0.#}", value);
        }

        public object ConvertBack(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
        {
            throw new NotSupportedException();
        }
    }
}
