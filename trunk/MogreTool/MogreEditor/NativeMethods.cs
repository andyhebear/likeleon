using System;
using System.Runtime.InteropServices;

namespace Mogitor
{
    /// <summary>
    /// Native methods class - All PInvoke methods and constants should be defined here.
    /// </summary>
    internal static class NativeMethods
    {
        [StructLayout(LayoutKind.Sequential)]
        public class POINT
        {
            public int x = 0;
            public int y = 0;
        }

        [DllImport("User32", EntryPoint = "ClientToScreen", SetLastError = true, ExactSpelling = true, CharSet = CharSet.Auto)]
        public static extern int ClientToScreen(IntPtr hWnd, [In, Out] POINT pt);

        [DllImport("user32.dll")]
        public static extern bool SetCursorPos(int X, int Y);
    }
}
