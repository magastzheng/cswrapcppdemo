using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CSharpWrapCppDemo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Print(int a, int b, int c, int d)
        {
            char act = (char)a;
            string exp = b.ToString() + act.ToString() + c.ToString() + d.ToString();
            MessageBox.Show(exp);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            MyCallback cb = new MyCallback(Print);
            AlgManager mgr = new AlgManager();
            mgr.SetCallback(cb);
            mgr.DoSomething();
        }
    }
}
