#include "Functions.h"

System::String^ CreateErrorMessage(std::string what, std::string code, std::string filename)
{
	std::string error = "Ошибка при открытии файла " + filename + "!\n";
	error.append(what);
	error.append("\nКод ошибки: " + code);
	return Convert_string_to_String(error);
}

void CreateSettingsFile(int countPlayers, int roundtime)
{
	std::ofstream filewrite;
	try {
		filewrite.open("Settings.txt");
	}
	catch (const std::ofstream::failure& ex) {
		System::Windows::Forms::MessageBox::Show(CreateErrorMessage(ex.what(), std::to_string(ex.code().value()), "Setting.txt"), "Ошибка!");
		return System::Void();
	}
	filewrite << countPlayers << std::endl << roundtime;
	filewrite.close();
}

#pragma region Convert



System::String^ Convert_string_to_String(std::string& os, System::String^ s)
{
	s = gcnew System::String(os.c_str());
	return s;
}

std::string& Convert_String_to_string(System::String^ s)
{
	std::string os;
	using namespace System::Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));

	return os;
}

System::String^ Convert_string_to_String(std::string& os)
{
	System::String^ s = gcnew System::String(os.c_str());

	return s;
}

System::String^ Convert_char_to_String(char ch)
{
	char* chr = new char();
	chr[0] = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
		str += wchar_t(ch);
	return str;
}

char* Convert_String_to_char(System::String^ string)
{
	return nullptr;
}

System::String^ Convert_char_to_String(char* ch)
{
	char* chr = new char();
	chr = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
		str += wchar_t(ch[i]);
	return str;
}

std::string& Convert_String_to_string(System::String^ s, std::string& os)
{
	using namespace System::Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));

	return os;
}
#pragma endregion