using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSharpWrapCppDemo
{
    public delegate void MyCallback(int a, int b, int c, int d);
    public class AlgManager
    {
        [DllImport("Calculation.dll")]
        public static extern IntPtr Create();

        [DllImport("Calculation.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern void DoSomething(IntPtr mgr);

        [DllImport("Calculation.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern void SetCallback(IntPtr mgr, MyCallback cb);

        [DllImport("Calculation.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern void Destroy(IntPtr mgr);

        IntPtr _handle = IntPtr.Zero;

        public AlgManager()
        {
            _handle = Create();
        }

        ~AlgManager()
        {
            Destroy(_handle);
        }

        public void DoSomething()
        {
            DoSomething(_handle);
        }

        public void SetCallback(MyCallback cb)
        {
            SetCallback(_handle, cb);
        }
    }
}
