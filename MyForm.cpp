#include "MyForm.h"
#include"BankSystem.h"
#include"MyForm1.h"
#include"MyForm2.h"
#include"MyForm3.h"
#include"MyForm4.h"
#include"MyForm5.h"
#include"string"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(true);
	Application::EnableVisualStyles();
	Application::Run(gcnew Bank999::MyForm);
}
