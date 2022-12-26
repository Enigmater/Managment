#pragma once
#include "Player.h"
#include <vector>

class Game {
private:
	int Level;
	int Step;
	int Roundtime;
	int PlayerID;
	std::vector<int> losePlayerID;
public:
	Game();
	~Game();
	// �������
	int getLevel();
	int getStep();
	int getPlayerID();
	int getRoundtime();
	// �������
	void setLevel(int Level);
	void setStep(int Step);
	void setRoundtime(int time);

	// �-��
	void NextPlayer(Player *player, Bank bank);
	void BankRequest(Player *player, Bank bank);
	void Print();
	void CheckLosers(Player *player);
	void AddLoser(int player_id);
	int FindMaxID(Player* player);
	int WinnerCheck(Player *player);
	// ��������� true ���� ����� ��������
	bool PlayerIsLoser(int player_id);

	
};