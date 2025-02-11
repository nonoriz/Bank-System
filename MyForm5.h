#pragma once
#include"BankSystem.h"
namespace Bank999 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btWithdraw;
	protected:

	private: System::Windows::Forms::Button^ btDeposite;
	protected:

	private: System::Windows::Forms::TextBox^ txtAccountNumber;
	private: System::Windows::Forms::Label^ lable1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAmount;
	private: System::Windows::Forms::Button^ btCheck;


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
			this->btWithdraw = (gcnew System::Windows::Forms::Button());
			this->btDeposite = (gcnew System::Windows::Forms::Button());
			this->txtAccountNumber = (gcnew System::Windows::Forms::TextBox());
			this->lable1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->btCheck = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btWithdraw
			// 
			this->btWithdraw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btWithdraw->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btWithdraw->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btWithdraw->Location = System::Drawing::Point(267, 224);
			this->btWithdraw->Name = L"btWithdraw";
			this->btWithdraw->Size = System::Drawing::Size(162, 51);
			this->btWithdraw->TabIndex = 12;
			this->btWithdraw->Text = L"Withdraw";
			this->btWithdraw->UseVisualStyleBackColor = false;
			this->btWithdraw->Click += gcnew System::EventHandler(this, &MyForm5::btWithdraw_Click);
			// 
			// btDeposite
			// 
			this->btDeposite->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btDeposite->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDeposite->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btDeposite->Location = System::Drawing::Point(12, 224);
			this->btDeposite->Name = L"btDeposite";
			this->btDeposite->Size = System::Drawing::Size(164, 51);
			this->btDeposite->TabIndex = 11;
			this->btDeposite->Text = L"Deposite";
			this->btDeposite->UseVisualStyleBackColor = false;
			this->btDeposite->Click += gcnew System::EventHandler(this, &MyForm5::btDeposite_Click);
			// 
			// txtAccountNumber
			// 
			this->txtAccountNumber->Location = System::Drawing::Point(200, 49);
			this->txtAccountNumber->Name = L"txtAccountNumber";
			this->txtAccountNumber->Size = System::Drawing::Size(157, 24);
			this->txtAccountNumber->TabIndex = 10;
			this->txtAccountNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lable1
			// 
			this->lable1->AutoSize = true;
			this->lable1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lable1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lable1->Location = System::Drawing::Point(44, 49);
			this->lable1->Name = L"lable1";
			this->lable1->Size = System::Drawing::Size(141, 22);
			this->lable1->TabIndex = 9;
			this->lable1->Text = L"Account Number";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(44, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 22);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Amount";
			// 
			// txtAmount
			// 
			this->txtAmount->Location = System::Drawing::Point(200, 123);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(157, 24);
			this->txtAmount->TabIndex = 10;
			this->txtAmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btCheck
			// 
			this->btCheck->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btCheck->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCheck->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btCheck->Location = System::Drawing::Point(12, 302);
			this->btCheck->Name = L"btCheck";
			this->btCheck->Size = System::Drawing::Size(170, 51);
			this->btCheck->TabIndex = 12;
			this->btCheck->Text = L"Check Balance";
			this->btCheck->UseVisualStyleBackColor = false;
			this->btCheck->Click += gcnew System::EventHandler(this, &MyForm5::btCheck_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 365);
			this->Controls->Add(this->btCheck);
			this->Controls->Add(this->btWithdraw);
			this->Controls->Add(this->btDeposite);
			this->Controls->Add(this->txtAmount);
			this->Controls->Add(this->txtAccountNumber);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lable1);
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btDeposite_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the account number and deposit amount entered by the user from text boxes
		int accNumber = Convert::ToInt16(txtAccountNumber->Text);
		double amount = Convert::ToDouble(txtAmount->Text);

		// Create an instance of the Bank class
		Bank^ bank = gcnew Bank();

		// Deposit amount into the account
		if (bank->Deposit(accNumber, amount))
		{
			MessageBox::Show("Deposit successful!");
		}
		else
		{
			MessageBox::Show(" Account not found!");
		}

	}
private: System::Void btWithdraw_Click(System::Object^ sender, System::EventArgs^ e) {

	int accNumber = Convert::ToInt16(txtAccountNumber->Text);
	double amount = Convert::ToDouble(txtAmount->Text);

	// Create an instance of the Bank class
	Bank^ bank = gcnew Bank();

	// Withdraw amount from the account
	if (bank->Withdraw(accNumber, amount))
	{
		MessageBox::Show("Withdrawal successful!");
	}
	else
	{
		MessageBox::Show("Account not found or insufficient funds!");
	}
}
private: System::Void btCheck_Click(System::Object^ sender, System::EventArgs^ e) {

	// Get the account number entered by the user from a text box
	int accNumber = Convert::ToInt16(txtAccountNumber->Text);

	// Create an instance of the Bank class
	Bank^ bank = gcnew Bank();

	// Get the balance of the account
	double balance = bank->CheckBalance(accNumber);
	if (balance >= 0)
	{
		MessageBox::Show("Account balance: " + balance.ToString("C"));
	}
	else
	{
		MessageBox::Show("Account not found!");
	}
}

};
}
