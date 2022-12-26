#pragma once
#include <string>
#include <fstream>


struct Time {
    int hour, min, sec;
};

#pragma region Convert
//конвертируем std::string в System::string^
System::String^ Convert_string_to_String(std::string& os, System::String^ s);
//конвертируем System::string^ в std::string
std::string& Convert_String_to_string(System::String^ s);
//конвертируем std::string в System::string^
System::String^ Convert_string_to_String(std::string& os);
//конвертируем char в System::string^
System::String^ Convert_char_to_String(char ch);
//конвертируем System::string^ в char*
char* Convert_String_to_char(System::String^ string);
//конвертируем char* в System::string^
System::String^ Convert_char_to_String(char* ch);

std::string& Convert_String_to_string(System::String^ s, std::string& os);
#pragma endregion

System::String^ CreateErrorMessage(std::string what, std::string code, std::string filename);
void CreateSettingsFile(int countPlayer = 2, int roundtime = 5);
