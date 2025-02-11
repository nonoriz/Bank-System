#pragma once
#include"BankSystem.h"
#include"MyForm5.h"

namespace Bank999 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btDeposite;
	private: System::Windows::Forms::Button^ btWithdraw;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btCheckBalance;



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
			this->btDeposite = (gcnew System::Windows::Forms::Button());
			this->btWithdraw = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btCheckBalance = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btDeposite
			// 
			this->btDeposite->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btDeposite->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDeposite->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btDeposite->Location = System::Drawing::Point(121, 102);
			this->btDeposite->Name = L"btDeposite";
			this->btDeposite->Size = System::Drawing::Size(129, 46);
			this->btDeposite->TabIndex = 4;
			this->btDeposite->Text = L"Deposite Money";
			this->btDeposite->UseVisualStyleBackColor = false;
			this->btDeposite->Click += gcnew System::EventHandler(this, &MyForm3::btDeposite_Click);
			// 
			// btWithdraw
			// 
			this->btWithdraw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btWithdraw->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btWithdraw->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btWithdraw->Location = System::Drawing::Point(121, 196);
			this->btWithdraw->Name = L"btWithdraw";
			this->btWithdraw->Size = System::Drawing::Size(134, 46);
			this->btWithdraw->TabIndex = 3;
			this->btWithdraw->Text = L"Withdraw Money";
			this->btWithdraw->UseVisualStyleBackColor = false;
			this->btWithdraw->Click += gcnew System::EventHandler(this, &MyForm3::btWithdraw_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 51);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select a transaction";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btCheckBalance
			// 
			this->btCheckBalance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btCheckBalance->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCheckBalance->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btCheckBalance->Location = System::Drawing::Point(121, 290);
			this->btCheckBalance->Name = L"btCheckBalance";
			this->btCheckBalance->Size = System::Drawing::Size(129, 46);
			this->btCheckBalance->TabIndex = 5;
			this->btCheckBalance->Text = L"Check Balance";
			this->btCheckBalance->UseVisualStyleBackColor = false;
			this->btCheckBalance->Click += gcnew System::EventHandler(this, &MyForm3::btCheckBalance_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(386, 438);
			this->Controls->Add(this->btCheckBalance);
			this->Controls->Add(this->btDeposite);
			this->Controls->Add(this->btWithdraw);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btDeposite_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm5^ f1 = gcnew MyForm5;
		f1->Show();
		this->Hide();
	}
private: System::Void btWithdraw_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm5^ f5 = gcnew MyForm5;
	f5->Show();
	this->Hide();
}
private: System::Void btCheckBalance_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm5^ f3 = gcnew MyForm5;
	f3->Show();
	this->Hide();
}

};
}
