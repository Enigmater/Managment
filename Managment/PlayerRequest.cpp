#include "PlayerRequest.h"

PlayerRequest::PlayerRequest() : Bank()
{
	RequestURMApproved = false;
	RequestUFPApproved = false;
}

PlayerRequest::PlayerRequest(int URM, int UFM, int priceURM, int priceUFM) : Bank(URM, UFM, priceURM, priceUFM)
{
	RequestURMApproved = false;
	RequestUFPApproved = false;
}

PlayerRequest::~PlayerRequest()
{
}

bool PlayerRequest::URMIsApproved()
{
	return RequestURMApproved;
}

bool PlayerRequest::UFPIsApproved()
{
	return RequestUFPApproved;
}

void PlayerRequest::ApproveURM(bool var)
{
	RequestURMApproved = var;
}

void PlayerRequest::ApproveUFP(bool var)
{
	RequestUFPApproved = var;
}

void PlayerRequest::Clear()
{
	RequestURMApproved = false;
	RequestUFPApproved = false;
	setAviableURM(0);
	setPriceURM(0);
	setAviableUFP(0);
	setPriceUFP(0);
}
