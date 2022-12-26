#pragma once
class Bank {
private:
	int AvailableURM;
	int PriceURM;
	int AvailableUFP;
	int PriceUFP;
public:
	Bank();
	Bank(int URM, int UFP, int priceURM, int priceUFP);
	~Bank();
	int getAviableURM();
	int getAviableUFP();
	int getPriceURM();
	int getPriceUFP();
	void setAviableURM(int URM);
	void setAviableUFP(int UFP);
	void setPriceURM(int priceURM);
	void setPriceUFP(int priceUFP);
};