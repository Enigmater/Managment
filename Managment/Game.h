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
	// геттеры
	int getLevel();
	int getStep();
	int getPlayerID();
	int getRoundtime();
	// сеттеры
	void setLevel(int Level);
	void setStep(int Step);
	void setRoundtime(int time);

	// ф-ии
	void NextPlayer(Player *player, Bank bank);
	void BankRequest(Player *player, Bank bank);
	void Print();
	void CheckLosers(Player *player);
	void AddLoser(int player_id);
	int FindMaxID(Player* player);
	int WinnerCheck(Player *player);
	// Возращает true если игрок проиграл
	bool PlayerIsLoser(int player_id);

	
};