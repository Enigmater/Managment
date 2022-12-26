#include "FactoriesRequest.h"

FactoriesRequest::FactoriesRequest(){
	URM_SF = 0;
	URM_UF = 0;
	priceURM_SF = 0;
	priceURM_UF = 0;
}

FactoriesRequest::~FactoriesRequest()
{
}

int FactoriesRequest::getURM_SF()
{
	return URM_SF;
}

int FactoriesRequest::getURM_UF()
{
	return URM_UF;
}

int FactoriesRequest::getPriceURM_SF()
{
	return priceURM_SF;
}

int FactoriesRequest::getPriceURM_UF()
{
	return priceURM_UF;
}

void FactoriesRequest::setURM_SF(int urm)
{
	URM_SF = urm;
}

void FactoriesRequest::setURM_UF(int urm)
{
	URM_UF = urm;
}

void FactoriesRequest::setPriceURM_SF(int price)
{
	priceURM_SF = price;
}

void FactoriesRequest::setPriceURM_UF(int price)
{
	priceURM_UF = price;
}

void FactoriesRequest::Clear()
{
	URM_SF = 0;
	URM_UF = 0;
	priceURM_SF = 0;
	priceURM_UF = 0;
}
