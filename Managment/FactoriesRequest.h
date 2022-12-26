#pragma once

class FactoriesRequest
{
public:
	FactoriesRequest();
	~FactoriesRequest();

	int getURM_SF();
	int getURM_UF();
	int getPriceURM_SF();
	int getPriceURM_UF();
	
	void setURM_SF(int urm);
	void setURM_UF(int urm);
	void setPriceURM_SF(int price);
	void setPriceURM_UF(int price);

	void Clear();
private:
	int URM_SF, URM_UF, priceURM_SF, priceURM_UF;
};
