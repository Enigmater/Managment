#include "Player.h"

Player::Player()
{
	CountSimpleFactory = 2;
	CountUpgradeFactory = 2;
	AmountURM = 4;
	AmountUFP = 2;
	Money = 10000;
	PlayerID = count++;
	StartCount = count;
	Constr = Construction(CountSimpleFactory, CountUpgradeFactory);
	BankRequest = PlayerRequest();
	FactoriesReq = FactoriesRequest();
}

Player::~Player()
{

}

int Player::getCount()
{
	return count;
}

void Player::setCount(int a)
{
	count = a;
}

int Player::getCountSF()
{
	return CountSimpleFactory;
}

int Player::getCountUF()
{
	return CountUpgradeFactory;
}

int Player::getURM()
{
	return AmountURM;
}

int Player::getUFP()
{
	return AmountUFP;
}

int Player::getMoney()
{
	return Money;
}

int Player::getID()
{
	return PlayerID;
}

int Player::getStartCount()
{
	return StartCount;
}

PlayerRequest Player::getPlayerRequest()
{
	return BankRequest;
}

void Player::increaseMoney(int money)
{
	this->Money += money;
}

void Player::decreaseMoney(int money)
{
	this->Money -= money;
}

void Player::increaseURM(int URM)
{
	this->AmountURM += URM;
}

void Player::decreaseURM(int URM)
{
	this->AmountURM -= URM;
}

void Player::increaseUFP(int UFP)
{
	this->AmountUFP += UFP;
}

void Player::decreaseUFP(int UFP)
{
	this->AmountUFP -= UFP;
}

void Player::setCountSF(int countSF)
{
	this->CountSimpleFactory = countSF;
}

void Player::setCountUF(int countUF)
{
	this->CountUpgradeFactory = countUF;
}

void Player::Print()
{
	System::Windows::Forms::MessageBox::Show("URM:" + BankRequest.getAviableURM() + "\nUFP" + BankRequest.getAviableUFP());
}

void Player::createRequest(int URM, int UFP, int priceURM, int priceUFM)
{
	BankRequest = PlayerRequest(URM, UFP, priceURM, priceUFM);
}

void Player::createRequest(PlayerRequest request)
{
	BankRequest = request;
}

int Player::DebtsSum()
{
	int sum = 0;
	for (size_t i = 0; i < Debts.size(); i++)
	{
		sum += Debts[i].getAmount();
	}
	return sum;
}

int Player::CountSFDebts()
{
	int count = 0;
	for (size_t i = 0; i < Debts.size(); i++)
	{
		if (Debts[i].getType() == "SF") {
			count++;
		}
	}
	return count;
}

int Player::CountUFDebts()
{
	int count = 0;
	for (size_t i = 0; i < Debts.size(); i++)
	{
		if (Debts[i].getType() == "UF") {
			count++;
		}
	}
	return count;
}

