#include "Credits.h"

Credits::Credits()
{
	this->Amount = 0;
	this->Term = 12;
	this->Type = "";
}

Credits::~Credits()
{
}

int Credits::getAmount()
{
	return this->Amount;
}

int Credits::getTerm()
{
	return this->Term;
}

std::string Credits::getType()
{
	return this->Type;
}

void Credits::setAmount(int amount)
{
	this->Amount = amount;
}

void Credits::setTerm(int term)
{
	this->Term = term;
}

void Credits::setType(std::string type)
{
	this->Type = type;
}

