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
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtAccountNumber;
	protected:
	private: System::Windows::Forms::Label^ lable1;
	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::Button^ search;


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
			this->txtAccountNumber = (gcnew System::Windows::Forms::TextBox());
			this->lable1 = (gcnew System::Windows::Forms::Label());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtAccountNumber
			// 
			this->txtAccountNumber->Location = System::Drawing::Point(207, 65);
			this->txtAccountNumber->Name = L"txtAccountNumber";
			this->txtAccountNumber->Size = System::Drawing::Size(157, 24);
			this->txtAccountNumber->TabIndex = 3;
			this->txtAccountNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lable1
			// 
			this->lable1->AutoSize = true;
			this->lable1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lable1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lable1->Location = System::Drawing::Point(51, 65);
			this->lable1->Name = L"lable1";
			this->lable1->Size = System::Drawing::Size(141, 22);
			this->lable1->TabIndex = 2;
			this->lable1->Text = L"Account Number";
			// 
			// btDelete
			// 
			this->btDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btDelete->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btDelete->Location = System::Drawing::Point(16, 139);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(164, 51);
			this->btDelete->TabIndex = 6;
			this->btDelete->Text = L"Delete Account";
			this->btDelete->UseVisualStyleBackColor = false;
			this->btDelete->Click += gcnew System::EventHandler(this, &MyForm4::btDelete_Click);
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->search->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->search->Location = System::Drawing::Point(284, 139);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(162, 51);
			this->search->TabIndex = 8;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = false;
			this->search->Click += gcnew System::EventHandler(this, &MyForm4::search_Click);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 261);
			this->Controls->Add(this->search);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->txtAccountNumber);
			this->Controls->Add(this->lable1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the account number entered by the user from a text box
		int accNumber =Convert::ToInt16( txtAccountNumber->Text);

		// Create an instance of the Bank class
		Bank^ bank = gcnew Bank();

		// Call the DeleteAccount function to delete the account
		if (bank->DeleteAccount(accNumber))
		{
			MessageBox::Show("Account deleted successfully!");
		}
		else
		{
			MessageBox::Show("Failed to delete account. Account not found!");
		}
	}
	private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the account number entered by the user from a text box
		int accNumber = Convert::ToInt16(txtAccountNumber->Text);

		// Create an instance of the Bank class
		Bank^ bank = gcnew Bank();

		// Search for the account
		BankAccount^ account;
		 bank->FindAccount(accNumber);

		// Check if account exists
		if (bank->FindAccount(accNumber))
		{
			String^ message = "Account found!\n\n";
			message += "Username: " + account->username + "\n";
			message += "Account Number: " + account->accountNumber + "\n";
			message += "Balance: " + account->balance.ToString("C") + "\n";

		}
		else
		{
			MessageBox::Show("Account not found!");
		}
	}

};
}
