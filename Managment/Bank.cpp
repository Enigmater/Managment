#include "Bank.h"

Bank::Bank()
{
	AvailableURM = 0;
	AvailableUFP = 0;
	PriceURM = 0;
	PriceUFP = 0;
}

Bank::Bank(int URM, int UFP, int priceURM, int priceUFP)
{
	this->AvailableURM = URM;
	this->AvailableUFP = UFP;
	this->PriceURM = priceURM;
	this->PriceUFP = priceUFP;
}

Bank::~Bank()
{
}

int Bank::getAviableURM()
{
	return this->AvailableURM;
}

int Bank::getAviableUFP()
{
	return this->AvailableUFP;
}

int Bank::getPriceURM()
{
	return this->PriceURM;
}

int Bank::getPriceUFP()
{
	return this->PriceUFP;
}

void Bank::setAviableURM(int URM)
{
	this->AvailableURM = URM;
}

void Bank::setAviableUFP(int UFP)
{
	this->AvailableUFP = UFP;
}

void Bank::setPriceURM(int priceURM)
{
	this->PriceURM = priceURM;
}

void Bank::setPriceUFP(int priceUFP)
{
	this->PriceUFP = priceUFP;
}

