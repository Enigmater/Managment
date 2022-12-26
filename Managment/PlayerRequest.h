#pragma once
#include "Bank.h"

class PlayerRequest : public Bank
{
public:
	PlayerRequest();
	PlayerRequest(int URM, int UFP, int priceURM, int priceUFP);
	~PlayerRequest();

	bool URMIsApproved();
	bool UFPIsApproved();
	void ApproveURM(bool var);
	void ApproveUFP(bool var);

	void Clear();

private:
	bool RequestURMApproved;
	bool RequestUFPApproved;
};
