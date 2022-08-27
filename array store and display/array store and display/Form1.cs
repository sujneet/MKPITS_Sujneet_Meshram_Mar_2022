using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace array_store_and_display
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        string[,] album = new string[2, 2];
        StringBuilder sb=new StringBuilder();
        int i = 0;
        int j = 0;
        private void button1_Click(object sender, EventArgs e)
        {
            if (i < 2)
            {
                album[i, j] = textBox1.Text;
                album[i, j + 1] = textBox2.Text;
                i++;
                textBox1.Clear();
                textBox2.Clear();
                textBox1.Focus();
                if (i == 2)
                {
                    MessageBox.Show("2 values accepted");
                    textBox1.Enabled = false;
                    textBox2.Enabled = false;
                    button1.Enabled = false;
                    button2.Enabled = true;
                }
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    sb.Append(album[i, j] + " \t ");
                }
                sb.Append("\n");
            }
            label3.Text = sb.ToString();

        }
    }
}
