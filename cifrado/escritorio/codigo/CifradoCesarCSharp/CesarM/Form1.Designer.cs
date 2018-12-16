namespace CesarM
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.txtlistas = new System.Windows.Forms.ListBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.txtCadena = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.txtDesplazamiento = new System.Windows.Forms.TextBox();
            this.txtInverso = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.InversoGrupo = new System.Windows.Forms.TextBox();
            this.label7 = new System.Windows.Forms.Label();
            this.grupos = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // txtlistas
            // 
            this.txtlistas.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.txtlistas.FormattingEnabled = true;
            this.txtlistas.Location = new System.Drawing.Point(69, 179);
            this.txtlistas.Name = "txtlistas";
            this.txtlistas.Size = new System.Drawing.Size(381, 117);
            this.txtlistas.TabIndex = 12;
            this.txtlistas.SelectedIndexChanged += new System.EventHandler(this.txtlistas_SelectedIndexChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.Transparent;
            this.label2.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(65, 141);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(168, 24);
            this.label2.TabIndex = 11;
            this.label2.Text = "Mensaje Cifrado:";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(203, 5);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(135, 24);
            this.label1.TabIndex = 8;
            this.label1.Text = "Cifrado Cesar";
            // 
            // txtCadena
            // 
            this.txtCadena.Location = new System.Drawing.Point(148, 92);
            this.txtCadena.Multiline = true;
            this.txtCadena.Name = "txtCadena";
            this.txtCadena.Size = new System.Drawing.Size(302, 39);
            this.txtCadena.TabIndex = 7;
            this.txtCadena.TextChanged += new System.EventHandler(this.txtCadena_TextChanged);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.Color.Transparent;
            this.label3.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(50, 92);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(92, 24);
            this.label3.TabIndex = 13;
            this.label3.Text = "Mensaje:";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.BackColor = System.Drawing.Color.Transparent;
            this.label4.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(50, 47);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(163, 24);
            this.label4.TabIndex = 14;
            this.label4.Text = "Desplazamiento:";
            // 
            // txtDesplazamiento
            // 
            this.txtDesplazamiento.Location = new System.Drawing.Point(219, 32);
            this.txtDesplazamiento.Multiline = true;
            this.txtDesplazamiento.Name = "txtDesplazamiento";
            this.txtDesplazamiento.Size = new System.Drawing.Size(231, 39);
            this.txtDesplazamiento.TabIndex = 15;
            this.txtDesplazamiento.TextChanged += new System.EventHandler(this.txtDesplazamiento_TextChanged);
            // 
            // txtInverso
            // 
            this.txtInverso.Location = new System.Drawing.Point(504, 32);
            this.txtInverso.Multiline = true;
            this.txtInverso.Name = "txtInverso";
            this.txtInverso.Size = new System.Drawing.Size(326, 84);
            this.txtInverso.TabIndex = 16;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.BackColor = System.Drawing.Color.Transparent;
            this.label5.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(500, 5);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(167, 24);
            this.label5.TabIndex = 17;
            this.label5.Text = "Mensaje Inverso:";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.BackColor = System.Drawing.Color.Transparent;
            this.label6.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label6.Location = new System.Drawing.Point(500, 141);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(263, 24);
            this.label6.TabIndex = 18;
            this.label6.Text = "Mensaje Inverso por grupo:";
            this.label6.Click += new System.EventHandler(this.label6_Click);
            // 
            // InversoGrupo
            // 
            this.InversoGrupo.Location = new System.Drawing.Point(504, 212);
            this.InversoGrupo.Multiline = true;
            this.InversoGrupo.Name = "InversoGrupo";
            this.InversoGrupo.Size = new System.Drawing.Size(326, 84);
            this.InversoGrupo.TabIndex = 19;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.BackColor = System.Drawing.Color.Transparent;
            this.label7.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(500, 179);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(108, 24);
            this.label7.TabIndex = 20;
            this.label7.Text = "Grupos de:";
            // 
            // grupos
            // 
            this.grupos.Location = new System.Drawing.Point(614, 179);
            this.grupos.Multiline = true;
            this.grupos.Name = "grupos";
            this.grupos.Size = new System.Drawing.Size(191, 27);
            this.grupos.TabIndex = 21;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Silver;
            this.ClientSize = new System.Drawing.Size(864, 313);
            this.Controls.Add(this.grupos);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.InversoGrupo);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.txtInverso);
            this.Controls.Add(this.txtDesplazamiento);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txtlistas);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtCadena);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Cifrado Cesar C#";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        public System.Windows.Forms.ListBox txtlistas;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        public System.Windows.Forms.TextBox txtCadena;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        public System.Windows.Forms.TextBox txtDesplazamiento;
        public System.Windows.Forms.TextBox txtInverso;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        public System.Windows.Forms.TextBox InversoGrupo;
        private System.Windows.Forms.Label label7;
        public System.Windows.Forms.TextBox grupos;
    }
}

