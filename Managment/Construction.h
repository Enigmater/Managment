#pragma once
#include <vector>

class Construction
{
public:
	Construction();
	Construction(int countSF, int countUF);
	~Construction();
	void PushSF(int n, int a);
	void PushUF(int n, int a);
	int GetSF(int n);
	int GetUF(int n);
	int GetAmountSF();
	int GetAmountUF();
private:
	std::vector<int> SimpleF;
	std::vector<int> UpgrageF;
};