#pragma once
#include <iostream>
#include <string>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de Formulario
	/// </summary>
	public ref class Formulario : public System::Windows::Forms::Form
	{
	public:
		Formulario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Formulario()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::TextBox^  mensaje;


	private: System::Windows::Forms::TextBox^  recorrido;



	private: System::Windows::Forms::TextBox^  resultado;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::TextBox^  txtInverso;
	private: System::Windows::Forms::Label^  label6;
	public: 
	private: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::TextBox^  grupos;
	private: 
	public: System::Windows::Forms::TextBox^  InversoGrupo;
	private: 


	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mensaje = (gcnew System::Windows::Forms::TextBox());
			this->recorrido = (gcnew System::Windows::Forms::TextBox());
			this->resultado = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtInverso = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->grupos = (gcnew System::Windows::Forms::TextBox());
			this->InversoGrupo = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// mensaje
			// 
			this->mensaje->Location = System::Drawing::Point(104, 58);
			this->mensaje->Multiline = true;
			this->mensaje->Name = L"mensaje";
			this->mensaje->Size = System::Drawing::Size(216, 53);
			this->mensaje->TabIndex = 3;
			this->mensaje->TextChanged += gcnew System::EventHandler(this, &Formulario::mensaje_TextChanged);
			// 
			// recorrido
			// 
			this->recorrido->Location = System::Drawing::Point(180, 32);
			this->recorrido->Name = L"recorrido";
			this->recorrido->Size = System::Drawing::Size(140, 20);
			this->recorrido->TabIndex = 4;
			this->recorrido->Text = L"27";
			this->recorrido->TextChanged += gcnew System::EventHandler(this, &Formulario::recorrido_TextChanged);
			// 
			// resultado
			// 
			this->resultado->Location = System::Drawing::Point(15, 157);
			this->resultado->Multiline = true;
			this->resultado->Name = L"resultado";
			this->resultado->Size = System::Drawing::Size(305, 105);
			this->resultado->TabIndex = 6;
			this->resultado->TextChanged += gcnew System::EventHandler(this, &Formulario::resultado_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 24);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Desplazamiento:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 24);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Mensaje:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 24);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Mensaje Cifrado:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(418, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 24);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Mensaje Inverso:";
			// 
			// txtInverso
			// 
			this->txtInverso->Location = System::Drawing::Point(376, 36);
			this->txtInverso->Multiline = true;
			this->txtInverso->Name = L"txtInverso";
			this->txtInverso->Size = System::Drawing::Size(326, 75);
			this->txtInverso->TabIndex = 19;
			this->txtInverso->TextChanged += gcnew System::EventHandler(this, &Formulario::txtInverso_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(372, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(263, 24);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Mensaje Inverso por grupo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(372, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 24);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Grupos de:";
			// 
			// grupos
			// 
			this->grupos->Location = System::Drawing::Point(486, 157);
			this->grupos->Multiline = true;
			this->grupos->Name = L"grupos";
			this->grupos->Size = System::Drawing::Size(191, 27);
			this->grupos->TabIndex = 22;
			// 
			// InversoGrupo
			// 
			this->InversoGrupo->Location = System::Drawing::Point(376, 190);
			this->InversoGrupo->Multiline = true;
			this->InversoGrupo->Name = L"InversoGrupo";
			this->InversoGrupo->Size = System::Drawing::Size(326, 84);
			this->InversoGrupo->TabIndex = 23;
			// 
			// Formulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 293);
			this->Controls->Add(this->InversoGrupo);
			this->Controls->Add(this->grupos);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtInverso);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->resultado);
			this->Controls->Add(this->recorrido);
			this->Controls->Add(this->mensaje);
			this->Name = L"Formulario";
			this->Text = L"Cifrado Cesar C++";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mensaje_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			try{
				 proceso();
				 mensajeInverso();
			}catch(int e){}
	}

	private: System::Void recorrido_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try{
				 proceso();
		}catch(int e){
		}
	 }
	
	
	void procesoInversa(){
					System::String^ elmensaje = resultado->Text;
					std::string te="";
					int rotacion = Convert::ToInt16(recorrido->Text);	
					for(int i=0;i< elmensaje->Length;i++){
						te=te+desCifrado(rotacion,elmensaje[i]);
					}
					mensaje ->Text =gcnew String(te.c_str());
	}

	void mensajeInverso(){
					System::String^ elmensaje = mensaje->Text;
					std::string te="";
					for(int x=elmensaje->Length-1; x >= 0; x--){
						te+=elmensaje[x];
					}
					txtInverso ->Text =gcnew String(te.c_str());
	}

	void proceso(){
					System::String^ elmensaje = mensaje->Text;
					std::string te="";
					int rotacion = Convert::ToInt16(recorrido->Text);	
					for(int i=0;i< elmensaje->Length;i++){
						te=te+cifrado(rotacion,elmensaje[i]);
					}
					resultado ->Text =gcnew String(te.c_str());
	}	 

	void Invertir(){
	}

	char cifrado(int recorrido,char caracter){
 				char abecedario[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','w','y','z'};
 				recorrido=recorrido%sizeof(abecedario);
 				for(int i=0; i < sizeof(abecedario) ;i++){
 					if(abecedario[i]==caracter){
 						return abecedario[(i+recorrido)%sizeof(abecedario)];
					}
				}
			return caracter;
		}

	char desCifrado(int recorrido,char caracter){
 	char abecedario[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','w','y','z'};
 	recorrido=recorrido%sizeof(abecedario);
 	for(int i=0; i < sizeof(abecedario) ;i++){
 		if(abecedario[i]==caracter){
 			if((i-recorrido)<0){
 				return abecedario[sizeof(abecedario)-(recorrido-i)];
			 }
			 return abecedario[(i-recorrido)];
		 }
	}
	return caracter;
 }
private: System::Void resultado_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try{
				 procesoInversa();
		}catch(int e){
		}
		 }
private: System::Void txtInverso_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
