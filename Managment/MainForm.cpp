#pragma region IncludeForms
#include "MainForm.h"
#include "Settings.h"
#include "PlayForm.h"
#include "HelpForm.h"
#pragma endregion
#include "Functions.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Managment::MyForm form;
	Application::Run(% form);
}


System::Void Managment::MyForm::label3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

void Managment::MyForm::OpenForm(System::Windows::Forms::Form^ form)
{
	
	/*form->TopLevel = false;
	form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	form->Dock = DockStyle::Fill;
	this->panelMain->Controls->Add(form);
	this->panelMain->Tag = form;
	form->BringToFront();
	form->Show();
	lbTitle->Text = form->Text;*/
}

System::Void Managment::MyForm::button_settings_Click(System::Object^ sender, System::EventArgs^ e)
{
	Settings^ form = gcnew Settings();
	form->Show();
	this->Hide();
}

System::Void Managment::MyForm::button_startGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	PlayForm^ form = gcnew PlayForm();
	form->Show();
	this->Hide();
}

System::Void Managment::MyForm::button_exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Managment::MyForm::button_help_Click(System::Object^ sender, System::EventArgs^ e)
{
	HelpForm^ form = gcnew HelpForm();
	form->Show();
	form->Text = "Справка";
	this->Hide();
	
}

System::Void Managment::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	CreateSettingsFile();
}
