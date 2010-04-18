using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.MogreX
{
    class StringConverter
    {
        public static Mogre.Vector2 ParseVector2(string val)
        {
            string[] words = val.Split(delims);
            if (words.Count() != 2)
                return Mogre.Vector2.ZERO;
            else
                return new Mogre.Vector2(Mogre.StringConverter.ParseReal(words[0]),
                                         Mogre.StringConverter.ParseReal(words[1]));
        }

        public static Mogre.Vector4 ParseVector4(string val)
        {
            string[] words = val.Split(delims);
            if (words.Count() != 4)
                return Mogre.Vector4.ZERO;
            else
                return new Mogre.Vector4(Mogre.StringConverter.ParseReal(words[0]),
                                         Mogre.StringConverter.ParseReal(words[1]),
                                         Mogre.StringConverter.ParseReal(words[2]),
                                         Mogre.StringConverter.ParseReal(words[3]));
        }

        private static readonly char[] delims = new char[] {'\t', '\n', ' '};
    }
}
