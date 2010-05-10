﻿using System;
using System.Windows.Data;
using Mogitor.Data;
using System.Windows;

namespace Mogitor
{
    [ValueConversion(typeof(EditorTools), typeof(bool))]
    public class EditorToolToBooleanConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
        {
            if (targetType != typeof(bool))
                throw new InvalidOperationException("The target must be a boolean");

            string paramString = parameter as string;
            if (paramString == null)
                return DependencyProperty.UnsetValue;

            if (!Enum.IsDefined(value.GetType(), value))
                return DependencyProperty.UnsetValue;

            object paramValue = Enum.Parse(value.GetType(), paramString);
            return paramValue.Equals(value);
        }

        public object ConvertBack(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
        {
            if (targetType != typeof(EditorTools))
                throw new InvalidOperationException("The target must be a EditorTools");

            return Enum.Parse(targetType, parameter as string);
        }
    }
}