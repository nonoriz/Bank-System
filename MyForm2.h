#pragma once
#include"BankSystem.h"
#include<string>
#include"MyForm3.h"

namespace Bank999 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lable1;
	private: System::Windows::Forms::TextBox^ txtAccountNumber;
	protected:

	private: System::Windows::Forms::Button^ btLog;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPIN;




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
			this->lable1 = (gcnew System::Windows::Forms::Label());
			this->txtAccountNumber = (gcnew System::Windows::Forms::TextBox());
			this->btLog = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPIN = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lable1
			// 
			this->lable1->AutoSize = true;
			this->lable1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lable1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lable1->Location = System::Drawing::Point(12, 44);
			this->lable1->Name = L"lable1";
			this->lable1->Size = System::Drawing::Size(141, 22);
			this->lable1->TabIndex = 0;
			this->lable1->Text = L"Account Number";
			// 
			// txtAccountNumber
			// 
			this->txtAccountNumber->Location = System::Drawing::Point(170, 44);
			this->txtAccountNumber->Name = L"txtAccountNumber";
			this->txtAccountNumber->Size = System::Drawing::Size(157, 24);
			this->txtAccountNumber->TabIndex = 1;
			this->txtAccountNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btLog
			// 
			this->btLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btLog->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLog->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btLog->Location = System::Drawing::Point(34, 206);
			this->btLog->Name = L"btLog";
			this->btLog->Size = System::Drawing::Size(110, 36);
			this->btLog->TabIndex = 2;
			this->btLog->Text = L"LogIn";
			this->btLog->UseVisualStyleBackColor = false;
			this->btLog->Click += gcnew System::EventHandler(this, &MyForm2::btLog_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(45, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pin";
			// 
			// txtPIN
			// 
			this->txtPIN->Location = System::Drawing::Point(170, 130);
			this->txtPIN->Name = L"txtPIN";
			this->txtPIN->Size = System::Drawing::Size(157, 24);
			this->txtPIN->TabIndex = 1;
			this->txtPIN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(411, 263);
			this->Controls->Add(this->btLog);
			this->Controls->Add(this->txtPIN);
			this->Controls->Add(this->txtAccountNumber);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lable1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btLog_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the account number and PIN entered by the user from text boxes
		int accNumber =Convert::ToInt16(txtAccountNumber->Text);
		String^ pin = txtPIN->Text;

		// Create an instance of the Bank class
		Bank^ bank = gcnew Bank();

		// Find the account using the account number
		BankAccount^ account;
		 bank->FindAccount(accNumber);

		// Check if the account exists and the PIN matches
		if (bank->FindAccount(accNumber) && account->PIN == pin)
		{
			MessageBox::Show("Login successful!");
			// TODO: Navigate to the next screen or perform other actions after successful login
			MyForm3^ f3 = gcnew MyForm3;
			f3->Show();
			this->Hide();

		}
		else
		{
			MessageBox::Show("Invalid account number or PIN. Please try again.");
		}
	}

};
}
