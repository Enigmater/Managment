#pragma once
#include <string>
#include "PlayerRequest.h"
#include "Construction.h"
#include "Credits.h"
#include "FactoriesRequest.h"

class Player {
public:
	Construction Constr;
	FactoriesRequest FactoriesReq;
	PlayerRequest BankRequest;
	std::vector<Credits> Debts;
private:
	static int count;
	static int StartCount;
	int PlayerID;
	int CountSimpleFactory;
	int CountUpgradeFactory;
	int AmountURM;
	int AmountUFP;
	int Money;
public:
	Player();
	~Player();
	static int getCount();
	static void setCount(int a);
	static int getStartCount();
	// геттеры
	int getCountSF();
	int getCountUF();
	int getURM();
	int getUFP();
	int getMoney();
	int getID();	
	PlayerRequest getPlayerRequest();
	// 
	void increaseMoney(int money);
	void decreaseMoney(int money);
	//
	void increaseURM(int URM);
	void decreaseURM(int URM);
	void increaseUFP(int UFP);
	void decreaseUFP(int UFP);
	// сеттеры
	void setCountSF(int countSF);
	void setCountUF(int countUF);
	// ф-ии
	void Print();
	void createRequest(int URM, int UFP, int priceURM, int priceUFP);
	void createRequest(PlayerRequest request);
	int DebtsSum();
	int CountSFDebts();
	int CountUFDebts();
};
