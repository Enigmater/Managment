#pragma once
#include <string>

class Credits
{
public:
	Credits();
	~Credits();

	// геттеры
	int getAmount();
	int getTerm();
	std::string getType();

	// сеттеры
	void setAmount(int amount);
	void setTerm(int term);
	void setType(std::string type);

private:
	int Amount;
	int Term;
	std::string Type;
};
