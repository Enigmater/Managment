#include "Construction.h"
#include <algorithm>

Construction::Construction()
{
	SimpleF.resize(6, 0);
	SimpleF[0] = -1;
	SimpleF[1] = -1;
	UpgrageF.resize(6, 0);
}

Construction::Construction(int countSF, int countUF)
{
	SimpleF.resize(6, 0);
	UpgrageF.resize(6, 0);
	for (size_t i = 0; i < countSF; i++)
	{
		SimpleF[i] = -1;
	}
	for (size_t i = 0; i < countUF; i++)
	{
		UpgrageF[i] = -1;
	}
}

Construction::~Construction()
{
}

void Construction::PushSF(int n, int a)
{
	SimpleF.at(n) = a;
}

void Construction::PushUF(int n, int a)
{
	UpgrageF.at(n) = a;
}

int Construction::GetSF(int n)
{
	return SimpleF.at(n);
}

int Construction::GetUF(int n)
{
	return UpgrageF.at(n);
}

int Construction::GetAmountSF()
{
	return std::count_if(SimpleF.begin(), SimpleF.end(), [](int a) {
		return a > 0;
		});
}

int Construction::GetAmountUF()
{
	return std::count_if(UpgrageF.begin(), UpgrageF.end(), [](int a) {
		return a > 0;
		});;
}
