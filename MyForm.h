#pragma once
#include"BankSystem.h"
#include<string>
#include"MyForm1.h"
#include"MyForm2.h"
#include"MyForm4.h"
namespace Bank999 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Bank^ bank;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			bank = gcnew Bank();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btDelete;
	protected:
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::Button^ createAccount;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btDisplay;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->login = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			this->createAccount = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btDisplay = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btDelete
			// 
			this->btDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btDelete->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btDelete->Location = System::Drawing::Point(155, 366);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(176, 51);
			this->btDelete->TabIndex = 5;
			this->btDelete->Text = L"Delete Account";
			this->btDelete->UseVisualStyleBackColor = false;
			this->btDelete->Click += gcnew System::EventHandler(this, &MyForm::btDelete_Click);
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->login->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->login->Location = System::Drawing::Point(155, 226);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(176, 51);
			this->login->TabIndex = 6;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &MyForm::login_Click);
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->search->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->search->Location = System::Drawing::Point(155, 298);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(176, 51);
			this->search->TabIndex = 7;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &MyForm::search_Click);
			// 
			// createAccount
			// 
			this->createAccount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->createAccount->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createAccount->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->createAccount->Location = System::Drawing::Point(155, 159);
			this->createAccount->Name = L"createAccount";
			this->createAccount->Size = System::Drawing::Size(176, 51);
			this->createAccount->TabIndex = 8;
			this->createAccount->Text = L"Create Account";
			this->createAccount->UseVisualStyleBackColor = false;
			this->createAccount->Click += gcnew System::EventHandler(this, &MyForm::createAccount_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Sienna;
			this->label2->Location = System::Drawing::Point(12, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 28);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Our Servies : ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(-76, -84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 84);
			this->label1->TabIndex = 3;
			this->label1->Text = L"banking System";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(2, -4);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(474, 86);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Banking System";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btDisplay
			// 
			this->btDisplay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btDisplay->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDisplay->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btDisplay->Location = System::Drawing::Point(155, 449);
			this->btDisplay->Name = L"btDisplay";
			this->btDisplay->Size = System::Drawing::Size(176, 46);
			this->btDisplay->TabIndex = 10;
			this->btDisplay->Text = L"Display Accounts";
			this->btDisplay->UseVisualStyleBackColor = false;
			this->btDisplay->Click += gcnew System::EventHandler(this, &MyForm::btDisplay_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 516);
			this->Controls->Add(this->btDisplay);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->login);
			this->Controls->Add(this->search);
			this->Controls->Add(this->createAccount);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void createAccount_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm1^ f1 = gcnew MyForm1(this);
	f1->ShowDialog();
	this->Hide();
}
private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ f2 = gcnew MyForm2;
	f2->Show();
	this->Hide();
}
private: System::Void btDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ f4 = gcnew MyForm4;
	f4->Show();
	this->Hide();
}
private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ f4 = gcnew MyForm4;
	f4->Show();
	this->Hide();
}
private: System::Void btDisplay_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
