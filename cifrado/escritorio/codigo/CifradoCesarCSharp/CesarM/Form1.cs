using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CesarM
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        void CifrarCadena()
        {
            int t, letras;
            string cadena = txtCadena.Text;
            int desplaza = int.Parse(txtDesplazamiento.Text);
            letras = cadena.Length;
            char[] ch = new char[letras];
            for (int i = 0; i < letras; i++)
            {
                t = (int)cadena[i];
                ch[i] = (char)(t + desplaza);
                txtlistas.Items.Add(ch[i]);
            }
        }
        void DecifrarCadena()
        {
            int t, letras;
            int desplaza = int.Parse(txtDesplazamiento.Text);
            string cadena = txtlistas.Text;
            letras = cadena.Length;
            char[] ch = new char[letras];
            for (int i = 0; i < letras; i++)
            {
                t = (int)cadena[i];
                ch[i] = (char)(t - desplaza);
                txtlistas.Items.Add(ch[i]);
            }
        }

        void Limpiar()
        {
            txtlistas.Items.Clear();
        }

        void Reverso() {
            string cadena = txtCadena.Text;
            string inverso = "";
            for (int x = cadena.Length - 1; x >= 0; x--)
            {
                inverso += cadena[x];
            }
            txtInverso.Text=inverso;
        }

        

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void txtCadena_TextChanged(object sender, EventArgs e)
        {
            Limpiar();
            CifrarCadena();
            Reverso();
            
        }

        private void txtlistas_SelectedIndexChanged(object sender, EventArgs e)
        {
          
        }

        private void txtDesplazamiento_TextChanged(object sender, EventArgs e)
        {

        }

        private void ejemplo_TextChanged(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }
       
}
}
