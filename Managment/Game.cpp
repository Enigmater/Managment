#include "Game.h"
#include <vector>
#include <algorithm>

Game::Game()
{
	Level = 1;
	Step = 1;
	PlayerID = Step;
	Roundtime = 1;
}

Game::~Game()
{
}

int Game::getLevel()
{
	return Level;
}

int Game::getStep()
{
	return Step;
}

int Game::getPlayerID()
{
	/*PlayerID = (Step % 4 != 0) ? Step % 4 : 4;*/
	return PlayerID;
}

int Game::getRoundtime() {
	return Roundtime;
}

void Game::setLevel(int Level)
{
	this->Level = Level;
}

void Game::setStep(int Step)
{
	this->Step = Step;
}

void Game::setRoundtime(int time)
{
	this->Roundtime = time;
}

void Game::Print() {
	System::Windows::Forms::MessageBox::Show("Level: " + this->Level + "\nStep: " + this->Step + "\nRoundtime: " + Roundtime + "\nPlayerID: " + PlayerID, "Game");
}

void Game::CheckLosers(Player *player)
{
	for (size_t i = 0; i < Player::getStartCount(); i++)
	{
		if (!PlayerIsLoser(i + 1) && player[i].getMoney() < 0) {
			losePlayerID.push_back(player[i].getID() + 1);
			Player::setCount(Player::getCount() - 1);
		}			
	}
}

void Game::AddLoser(int player_id)
{
	losePlayerID.push_back(player_id);
	Player::setCount(Player::getCount() - 1);
}

int Game::FindMaxID(Player* player)
{
	int max = 0;
	for (size_t i = 0; i < Player::getStartCount(); i++)
	{
		int id = player[i].getID() + 1;
		auto it = std::find(losePlayerID.begin(), losePlayerID.end(), id);
		if (it == losePlayerID.end() && player[i].getID() + 1 > max) {
			max = id;
		}
	};
	return max;
}

int Game::WinnerCheck(Player* player)
{
	// Проверка на победителя
	if (Player::getCount() == 1) {
		for (size_t i = 0; i < Player::getStartCount(); i++)
		{
			int id = player[i].getID() + 1;
			// Ищем id среди проигравших
			auto it = std::find(losePlayerID.begin(), losePlayerID.end(), id);
			// Если не нашли id среди проигравших - возращаем его
			if (it == losePlayerID.end()) {
				return id;
			}
		}
	}
	// Если победителя нет - возращаем -1
	return -1;
}

bool Game::PlayerIsLoser(int player_id)
{
	auto ID = std::find(losePlayerID.begin(), losePlayerID.end(), player_id);
	return ID != losePlayerID.end();
}

void Game::NextPlayer(Player* player, Bank bank) {

	// Является ли текущий игрок проигравшим?
	bool playerIsLoser = PlayerIsLoser(this->PlayerID);

	/*=== Ежемесячные операции ===*/
	if (!playerIsLoser) {
		// Ежемесячные списания
		int debts = player[this->getPlayerID() - 1].DebtsSum() / 100; // 1% от суммы кредитов
		int URM = player[this->getPlayerID() - 1].getURM() * 300;     // 300 за ЕСМ
		int UFP = player[this->getPlayerID() - 1].getUFP() * 500;	  // 500 за ЕГП
		int SF = player[this->getPlayerID() - 1].getCountSF() * 1000; // 1000 за обычный завод
		int UF = player[this->getPlayerID() - 1].getCountUF() * 1500; // 1500 за автомат. завод
		int deduction = debts + URM + UFP + SF + UF;
		player[this->getPlayerID() - 1].decreaseMoney(deduction);

		// Кредиты
		std::vector<Credits>::iterator it = player[this->getPlayerID() - 1].Debts.begin();
		for (size_t i = 0; i < player[this->getPlayerID() - 1].Debts.size(); i++)
		{
			it++;
			// -1 месяц к сроку выплаты
			player[this->getPlayerID() - 1].Debts[i].setTerm(player[this->getPlayerID() - 1].Debts[i].getTerm() - 1);
			// Если срок = 0 - снимаем деньги, убираем долг
			if (player[this->getPlayerID() - 1].Debts[i].getTerm() == 0) {
				player[this->getPlayerID() - 1].decreaseMoney(player[this->getPlayerID() - 1].Debts[i].getAmount());
				player[this->getPlayerID() - 1].Debts.erase(it);
			}
		}

		// Переработка материалов
		int countURM = player[this->getPlayerID() - 1].FactoriesReq.getURM_SF() + player[this->getPlayerID() - 1].FactoriesReq.getURM_UF();
		player[this->getPlayerID() - 1].decreaseURM(countURM);
		player[this->getPlayerID() - 1].increaseUFP(countURM);
		player[this->getPlayerID() - 1].decreaseMoney(player[this->getPlayerID() - 1].FactoriesReq.getPriceURM_SF() + player[this->getPlayerID() - 1].FactoriesReq.getPriceURM_UF());
		player[this->getPlayerID() - 1].FactoriesReq.Clear();

		// Проверка строительства заводов
		for (size_t i = 0; i < 6; i++)
		{
			// Если ведется стройка - (-1) к сроку постройки
			if (player[this->getPlayerID() - 1].Constr.GetSF(i) > 0) {
				player[this->getPlayerID() - 1].Constr.PushSF(i, player[this->getPlayerID() - 1].Constr.GetSF(i) - 1);
				// Если срок постройки = 0 - закончить стройку
				if (player[this->getPlayerID() - 1].Constr.GetSF(i) == 0) {
					player[this->getPlayerID() - 1].Constr.PushSF(i, -1);
					player[this->getPlayerID() - 1].setCountSF(player[this->getPlayerID() - 1].getCountSF() + 1);
				}
			}

			// Если ведется стройка - (-1) к сроку постройки
			if (player[this->getPlayerID() - 1].Constr.GetUF(i) > 0) {
				player[this->getPlayerID() - 1].Constr.PushUF(i, player[this->getPlayerID() - 1].Constr.GetUF(i) - 1);
				// Если срок постройки = 0 - закончить стройку
				if (player[this->getPlayerID() - 1].Constr.GetUF(i) == 0) {
					player[this->getPlayerID() - 1].Constr.PushUF(i, -1);
					player[this->getPlayerID() - 1].setCountUF(player[this->getPlayerID() - 1].getCountUF() + 1);
				}
			}
		}
	}

	/*=== Ход переходит к след.игроку, если его нет в проигравших === */
	int maxID = FindMaxID(player);
	if (maxID == 0) {
		return System::Void();
	}
	if (this->PlayerID >= maxID) {
		// Смена ID игрока
		this->PlayerID = 1;
		// Следующий месяц
		this->Step++;
	}
	else {
		this->PlayerID++;
	}

	do {
		if (!PlayerIsLoser(this->PlayerID)) {
			break;
		}

		if (this->PlayerID == maxID) {
			this->PlayerID = 1;
		}
		else {
			this->PlayerID++;
		}

	} while (PlayerIsLoser(this->PlayerID));


	// Проверка, не появился ли победитель
	if (WinnerCheck(player) != -1) {
		return System::Void();
	};
}

void Game::BankRequest(Player* player, Bank bank)
{
	/*=== Обработка запросов на URM в банк ===*/
	std::vector<Player> requests;

	// Создаем массив запросов URM
	for (size_t i = 0; i < Player::getCount(); i++)
	{
		// Если игрок еще не проиграл и игрок создал заявку - создаем запрос
		if (!PlayerIsLoser(i + 1) && player[i].BankRequest.URMIsApproved()) {
			requests.push_back(player[i]);
		}
	}

	// Сортировка массива запросов URM по уменьшению цены
	sort(requests.begin(), requests.end(), [](Player& req1, Player& req2) {
		return req1.BankRequest.getPriceURM() > req2.BankRequest.getPriceURM();
		});

	// Выдача URM игрокам
	int countURM = bank.getAviableURM();  // Сколько доступно для выдачи
	int issuedURM = 0, costIssuedURM = 0; // Сколько выдать / по какой цене
	for (size_t i = 0; i < requests.size(); i++)
	{
		// Выдавать, пока не кончится
		if (countURM > 0) {
			if (countURM - requests[i].BankRequest.getAviableURM() > 0) {
				issuedURM = requests[i].BankRequest.getAviableURM();
			}
			else {
				issuedURM = countURM;
			}
			costIssuedURM = issuedURM * requests[i].BankRequest.getPriceURM();
			player[requests[i].getID()].increaseURM(issuedURM);
			player[requests[i].getID()].decreaseMoney(costIssuedURM);
			countURM -= issuedURM;
		}
		else {
			break;
		}
	}

	/*=== Обработка запросов на UFP в банк === */

	// Создаем массив запросов UFP
	requests.clear();
	for (size_t i = 0; i < Player::getCount(); i++)
	{
		// Если игрок еще не проиграл и игрок создал заявку - создаем запрос
		if (!PlayerIsLoser(i + 1) && player[i].BankRequest.UFPIsApproved()) {
			requests.push_back(player[i]);
		}
	}

	// Сортировка массива запросов UFP по возрастанию цены
	sort(requests.begin(), requests.end(), [](Player& req1, Player& req2) {
		return req1.BankRequest.getPriceUFP() < req2.BankRequest.getPriceUFP();
		});

	// Покупка UFP у игроков
	int countUFP = bank.getAviableUFP();
	int purhcasedUFP = 0, costPurchasedUFP = 0;
	for (size_t i = 0; i < requests.size(); i++)
	{
		if (countUFP > 0) {
			if (countUFP - requests[i].BankRequest.getAviableUFP() > 0) {
				purhcasedUFP = requests[i].BankRequest.getAviableUFP();
			}
			else {
				purhcasedUFP = countUFP;
			}
			costPurchasedUFP = purhcasedUFP * requests[i].BankRequest.getPriceUFP();
			player[requests[i].getID()].decreaseUFP(purhcasedUFP);
			player[requests[i].getID()].increaseMoney(costPurchasedUFP);
			countUFP -= purhcasedUFP;
		}
		else {
			break;
		}
	}
}


