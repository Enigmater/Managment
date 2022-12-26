#include "Settings.h"
#include "Functions.h"

using namespace std;

System::Void Managment::Settings::button_backToMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
    Form^ form = Application::OpenForms[0];
    form->Show();
    this->Close();
    CreateSettingsFile(Convert::ToInt32(numericUpDown_players->Value), Convert::ToInt32(numericUpDown_roundtime->Value));
}

System::Void Managment::Settings::Settings_Load(System::Object^ sender, System::EventArgs^ e)
{
	int countPlayers, roundtime;
	std::ifstream fileread;
	try {
		fileread.open("Settings.txt");
	}
	catch (const std::ifstream::failure& ex) {
		System::Windows::Forms::MessageBox::Show(CreateErrorMessage(ex.what(), std::to_string(ex.code().value()), "Setting.txt"), "Îøèáêà!");
		return System::Void();
	}
	fileread >> countPlayers;
	fileread >> roundtime;
	fileread.close();

	numericUpDown_players->Value = Convert::ToInt32(countPlayers);
	numericUpDown_roundtime->Value = Convert::ToInt32(roundtime);

}
