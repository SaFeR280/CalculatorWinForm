#include "CalculatorForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ calc) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CalculatorWinForm::CalculatorForm form;
	Application::Run(% form);
}