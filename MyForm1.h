#pragma once
#include"BankSystem.h"
#include<string>

namespace Bank999 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
		MyForm1(Form^f1)
		{
			obj = f1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonCreate;
	protected:
	private: System::Windows::Forms::TextBox^ txtBalance;
	private: System::Windows::Forms::TextBox^ txtAccountNumber;
	private: System::Windows::Forms::TextBox^ txtPIN;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btBack;




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
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->txtBalance = (gcnew System::Windows::Forms::TextBox());
			this->txtAccountNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtPIN = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonCreate
			// 
			this->buttonCreate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonCreate->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonCreate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonCreate->Location = System::Drawing::Point(20, 260);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(136, 38);
			this->buttonCreate->TabIndex = 20;
			this->buttonCreate->Text = L"Create";
			this->buttonCreate->UseVisualStyleBackColor = false;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &MyForm1::buttonCreate_Click);
			// 
			// txtBalance
			// 
			this->txtBalance->Location = System::Drawing::Point(141, 206);
			this->txtBalance->Name = L"txtBalance";
			this->txtBalance->Size = System::Drawing::Size(156, 24);
			this->txtBalance->TabIndex = 16;
			// 
			// txtAccountNumber
			// 
			this->txtAccountNumber->Location = System::Drawing::Point(181, 154);
			this->txtAccountNumber->Name = L"txtAccountNumber";
			this->txtAccountNumber->Size = System::Drawing::Size(156, 24);
			this->txtAccountNumber->TabIndex = 17;
			// 
			// txtPIN
			// 
			this->txtPIN->Location = System::Drawing::Point(129, 96);
			this->txtPIN->Name = L"txtPIN";
			this->txtPIN->PasswordChar = '*';
			this->txtPIN->Size = System::Drawing::Size(168, 24);
			this->txtPIN->TabIndex = 18;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(129, 39);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(168, 24);
			this->txtUsername->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(16, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 21);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Balance :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(16, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 21);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Account Number:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(32, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 21);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Pin :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(16, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 21);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Username :";
			// 
			// btBack
			// 
			this->btBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btBack->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btBack->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btBack->Location = System::Drawing::Point(216, 260);
			this->btBack->Name = L"btBack";
			this->btBack->Size = System::Drawing::Size(99, 33);
			this->btBack->TabIndex = 21;
			this->btBack->Text = L"Back";
			this->btBack->UseVisualStyleBackColor = false;
			this->btBack->Click += gcnew System::EventHandler(this, &MyForm1::btBack_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 327);
			this->Controls->Add(this->btBack);
			this->Controls->Add(this->buttonCreate);
			this->Controls->Add(this->txtBalance);
			this->Controls->Add(this->txtAccountNumber);
			this->Controls->Add(this->txtPIN);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = txtUsername->Text;
		String^ pin = txtPIN->Text;
		int accNumber = Convert::ToInt16(txtAccountNumber->Text);
		double balance = Convert::ToDouble(txtBalance->Text);

		// Create an instance of the Bank class
		Bank^ bank = gcnew Bank();

		// Call the CreateAccount function to create the account
		if (bank->CreateAccount(username, pin, accNumber, balance))
		{
			MessageBox::Show("Account created successfully!");
		}
		else
		{
			MessageBox::Show("Account already exists!");
		}
	}

private: System::Void btBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
	
}
};
}
