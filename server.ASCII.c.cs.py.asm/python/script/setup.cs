using System;
using System.Windows.Forms;
using System.Diagnostics;
namespace YourNamespace
{
    class Program
    {
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);

            MessageBox.Show("dowload latest server", "hub.sql", MessageBoxButtons.YESNO, MessageBoxIcon.Question);
            // Path to the executable you want to run
            string exePath = @"login.cs";
            
            // Start the process
            Process.Start(exePath);
            Application.Run();
        }
    }
}