#pragma once
#include <string>

class Credits
{
public:
	Credits();
	~Credits();

	// �������
	int getAmount();
	int getTerm();
	std::string getType();

	// �������
	void setAmount(int amount);
	void setTerm(int term);
	void setType(std::string type);

private:
	int Amount;
	int Term;
	std::string Type;
};
