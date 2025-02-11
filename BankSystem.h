#pragma once
#include<string>

using namespace System;


public ref class BankAccount {
public:
	String^ username;
	String^ PIN;
	int accountNumber;
	double balance;
	BankAccount(String^ name, String^ pin, int accNumber, double amount) : username(name), PIN(pin), accountNumber(accNumber), balance(amount) {}

};
public ref class Bank {
private:
	ref struct BankAccountNode {
		BankAccount^ account;
		BankAccountNode^ next;
	};

	BankAccountNode^ head; // Pointer to the first node in the linked list

public:
	Bank() {
		head = nullptr; // Initialize the head pointer to null (empty list)
	}

	bool CreateAccount(String^ username, String^ pin, int accNumber, double initialBalance) {
		// Check if account already exists
		if (FindAccount(accNumber) != nullptr) {
			return false; // Account already exists
		}

		// Create new account
		BankAccount^ newAccount = gcnew BankAccount(username, pin, accNumber, initialBalance);
		BankAccountNode^ newNode = gcnew BankAccountNode();
		newNode->account = newAccount;

		// Insert new node at the beginning of the linked list
		newNode->next = head;
		head = newNode;

		return true;
	}

	bool DeleteAccount(int accNumber) {
		BankAccountNode^ current = head;
		BankAccountNode^ prev = nullptr;

		while (current != nullptr) {
			if (current->account->accountNumber == accNumber) {
				if (prev == nullptr) {
					head = current->next; // Remove first node
				}
				else {
					prev->next = current->next; // Remove intermediate or last node
				}
				return true; // Account deleted successfully
			}
			prev = current;
			current = current->next;
		}
		return false; // Account not found
	}
	bool Deposit(int accNumber, double amount) {
		BankAccountNode^ current = FindAccount(accNumber);
		if (current != nullptr) {
			current->account->balance += amount;
			return true; // Deposit successful
		}
		return false; // Account not found
	}
	bool Withdraw(int accNumber, double amount) {
		BankAccountNode^ current = FindAccount(accNumber);
		if (current != nullptr && current->account->balance >= amount) {
			current->account->balance -= amount;
			return true; // Withdrawal successful
		}
		return false; // Account not found or insufficient funds
	}
	double CheckBalance(int accNumber) {
		BankAccountNode^ current = FindAccount(accNumber);
		if (current != nullptr) {
			return current->account->balance; // Return account balance
		}
		return -1; // Account not found
	}
	BankAccountNode^ FindAccount(int accNumber) {
		BankAccountNode^ current = head;
		while (current != nullptr) {
			if (current->account->accountNumber == accNumber) {
				return current; // Account found
			}
			current = current->next;
		}
		return nullptr; // Account not found
	}
	// Function to display all accounts
	BankAccountNode^ DisplayAccounts() {
		return head;
	}
	

};


namespace Bank999 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BankSystem
	/// </summary>
	public ref class BankSystem : public System::Windows::Forms::Form
	{
	public:
		BankSystem(void)
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
		~BankSystem()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// BankSystem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"BankSystem";
			this->Text = L"BankSystem";
			this->Load += gcnew System::EventHandler(this, &BankSystem::BankSystem_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BankSystem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
