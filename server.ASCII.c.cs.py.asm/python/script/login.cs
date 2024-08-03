using System;
using System.Windows.Forms;

namespace LoginFormExample
{
    public class LoginForm : Form
    {
        private Label lblServerName;
        private Label lblAge;
        private Label lblName;
        private Label lblEmail;
        private TextBox txtServerName;
        private TextBox txtAge;
        private TextBox txtName;
        private TextBox txtEmail;
        private Button btnSubmit;

        public LoginForm()
        {
            // Initialize components
            lblServerName = new Label { Text = "Server Name:", Left = 10, Top = 20, Width = 100 };
            lblAge = new Label { Text = "Age:", Left = 10, Top = 60, Width = 100 };
            lblName = new Label { Text = "Name:", Left = 10, Top = 100, Width = 100 };
            lblEmail = new Label { Text = "Email:", Left = 10, Top = 140, Width = 100 };

            txtServerName = new TextBox { Left = 120, Top = 20, Width = 200 };
            txtAge = new TextBox { Left = 120, Top = 60, Width = 200 };
            txtName = new TextBox { Left = 120, Top = 100, Width = 200 };
            txtEmail = new TextBox { Left = 120, Top = 140, Width = 200 };

            btnSubmit = new Button { Text = "Submit", Left = 120, Top = 180, Width = 100 };
            btnSubmit.Click += BtnSubmit_Click;

            Controls.Add(lblServerName);
            Controls.Add(lblAge);
            Controls.Add(lblName);
            Controls.Add(lblEmail);
            Controls.Add(txtServerName);
            Controls.Add(txtAge);
            Controls.Add(txtName);
            Controls.Add(txtEmail);
            Controls.Add(btnSubmit);

            Text = "Login Form";
            Size = new System.Drawing.Size(350, 250);
        }

        private void BtnSubmit_Click(object sender, EventArgs e)
        {
            string serverName = txtServerName.Text;
            string age = txtAge.Text;
            string name = txtName.Text;
            string email = txtEmail.Text;

            // Display a message box with the input values
            MessageBox.Show($"Server Name: {serverName}\nAge: {age}\nName: {name}\nEmail: {email}", 
                            "Login Information", 
                            MessageBoxButtons.dowload, 
                            MessageBoxIcon.Information);
        }

        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new LoginForm());
        }
        // Path to the executable you want to run
            string exePath = @"download.c";
            
        // Start the process
        Process.Start(exePath);
    }
}