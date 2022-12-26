#pragma region IncludeForms
#include "PlayForm.h"
#include "HelpForm.h"
#include "BankForm.h"
#include "ProductionForm.h"
#include "CreditsForm.h"
#pragma endregion

#include "Functions.h"

Time timeStruct;
int Player::count = 0;
int Player::StartCount = 0;

System::Void Managment::PlayForm::button_giveup_Click(System::Object^ sender, System::EventArgs^ e)
{
    game->AddLoser(game->getPlayerID());
    int winner_id = game->WinnerCheck(player);
    if (winner_id != -1) {
        EndGame(winner_id);
    }
    else {
        NextStep();
    }
}

System::Void Managment::PlayForm::button_help_Click(System::Object^ sender, System::EventArgs^ e)
{
    HelpForm^ form = gcnew HelpForm();
    form->ShowDialog();
    form->Text = "Помощь";
}

System::Void Managment::PlayForm::button_bank_Click(System::Object^ sender, System::EventArgs^ e)
{
    BankForm^ form = gcnew BankForm(&player[game->getPlayerID() - 1], bank);
    form->ShowDialog();
}

System::Void Managment::PlayForm::button_production_Click(System::Object^ sender, System::EventArgs^ e)
{
    UpdFactoryInfo();
    ProductionForm^ form = gcnew ProductionForm(&player[game->getPlayerID() - 1]);
    form->ShowDialog();
}

System::Void Managment::PlayForm::button_credits_Click(System::Object^ sender, System::EventArgs^ e)
{
    CreditsForm^ form = gcnew CreditsForm(&player[game->getPlayerID() - 1]);
    form->ShowDialog();
}

System::Void Managment::PlayForm::PlayForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    GenerateGame();
    srand(time(0));
}

System::Void Managment::PlayForm::timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
    if (timeStruct.hour < 59) {
        if (timeStruct.min < 59) {
            if (timeStruct.sec < 59) {
                timeStruct.sec++;
            }
            else {
                timeStruct.min++;
                timeStruct.sec = 0;
            }
        }
        else {
            timeStruct.hour++;
            timeStruct.min = 0;
        }
    }
    if (timeStruct.min > 0 && timeStruct.min == game->getRoundtime()) { 
        NextStep();
    }

}

System::Void Managment::PlayForm::timer_updInfo_Tick(System::Object^ sender, System::EventArgs^ e)
{
    UpdGameInfo();
}

System::Void Managment::PlayForm::button_nextPlayer_Click(System::Object^ sender, System::EventArgs^ e)
{
    NextStep();
}

void Managment::PlayForm::GeneratePlayers()
{
    std::ifstream fileread;
    try {
        fileread.open("Settings.txt");
    }
    catch (const std::ifstream::failure& ex) {fileread.open("Settings.txt");
        MessageBox::Show(CreateErrorMessage(ex.what(), std::to_string(ex.code().value()), "Settings.txt"), "Ошибка!");
        return System::Void();
    }
    int countPlayers, roundtime;
    fileread >> countPlayers;
    fileread >> roundtime;
    Player::setCount(0);
    player = new Player[countPlayers];
    game->setRoundtime(roundtime);
    fileread.close();
}

void Managment::PlayForm::UpdFactoryInfo()
{
    player[game->getPlayerID() - 1].setCountSF(0);
    player[game->getPlayerID() - 1].setCountUF(0);
    for (size_t i = 0; i < 6; i++)
    {
        if (player[game->getPlayerID() - 1].Constr.GetSF(i) == -1) {
            player[game->getPlayerID() - 1].setCountSF(player[game->getPlayerID() - 1].getCountSF() + 1);
        }
        if (player[game->getPlayerID() - 1].Constr.GetUF(i) == -1) {
            player[game->getPlayerID() - 1].setCountUF(player[game->getPlayerID() - 1].getCountUF() + 1);
        }
    }
}

void Managment::PlayForm::UpdGameInfo()
{
    label_step->Text = String::Format("Прошло месяцев: {0}", game->getStep());
    label_player->Text = String::Format("Ходит игрок №{0}", game->getPlayerID());
    label_timer->Text = String::Format("Прошло времени: {0:D2}:{1:D2}:{2:D2}", timeStruct.hour, timeStruct.min, timeStruct.sec);

    label_info1->Text = String::Format("Деньги: {0}$\nМатериалы/продукты: {1}/{2}\nКредиты: {3}\nОбычные фабрики: {4}/{5}\nАвтоматизированные фабрики: {6}/{7}",
        player[0].getMoney(),
        player[0].getURM(),
        player[0].getUFP(),
        player[0].DebtsSum(),
        player[0].getCountSF(),
        player[0].Constr.GetAmountSF(),
        player[0].getCountUF(),
        player[0].Constr.GetAmountUF()
    );

    label_info2->Text = String::Format("Деньги: {0}$\nМатериалы/продукты: {1}/{2}\nКредиты: {3}\nОбычные фабрики: {4}/{5}\nАвтоматизированные фабрики: {6}/{7}",
        player[1].getMoney(),
        player[1].getURM(),
        player[1].getUFP(),
        player[1].DebtsSum(),
        player[1].getCountSF(),
        player[1].Constr.GetAmountSF(),
        player[1].getCountUF(),
        player[1].Constr.GetAmountUF()
    );

    if (Player::getStartCount() > 2) {
        panel_thirdPl->Visible = true;
        label_info3->Text = String::Format("Деньги: {0}$\nМатериалы/продукты: {1}/{2}\nКредиты: {3}\nОбычные фабрики: {4}/{5}\nАвтоматизированные фабрики: {6}/{7}",
            player[2].getMoney(),
            player[2].getURM(),
            player[2].getUFP(),
            player[2].DebtsSum(),
            player[2].getCountSF(),
            player[2].Constr.GetAmountSF(),
            player[2].getCountUF(),
            player[2].Constr.GetAmountUF()
        );
    }
    if (Player::getStartCount() > 3) {
        panel_fourthPl->Visible = true;
        label_info4->Text = String::Format("Деньги: {0}$\nМатериалы/продукты: {1}/{2}\nКредиты: {3}\nОбычные фабрики: {4}/{5}\nАвтоматизированные фабрики: {6}/{7}",
            player[3].getMoney(),
            player[3].getURM(),
            player[3].getUFP(),
            player[3].DebtsSum(),
            player[3].getCountSF(),
            player[3].Constr.GetAmountSF(),
            player[3].getCountUF(),
            player[3].Constr.GetAmountUF()
        );
    }
}

void Managment::PlayForm::GenerateGame()
{
    timer->Start();
    timer_updInfo->Start();
    GeneratePlayers();
    GenerateBank();
    UpdGameInfo();
    timeStruct.hour = 0;
    timeStruct.min = 0;
    timeStruct.sec = 0;
}

void Managment::PlayForm::GenerateBank()
{
    int URM, UFP, priceURM, priceUFP;
    int countPlayer = Player::getCount();
    switch (game->getLevel()) {
    case 1:
        URM = countPlayer;
        priceURM = 800;
        UFP = countPlayer * 3;
        priceUFP = 6500;
        break;
    case 2:
        URM = countPlayer * 1.5;
        priceURM = 650;
        UFP = countPlayer * 2.5;
        priceUFP = 6000;
        break;
    case 3:
        URM = countPlayer * 2;
        priceURM = 500;
        UFP = countPlayer * 2;
        priceUFP = 5500;
        break;
    case 4:
        URM = countPlayer * 2.5;
        priceURM = 400;
        UFP = countPlayer * 1.5;
        priceUFP = 5000;
        break;
    case 5:
        URM = countPlayer * 3;
        priceURM = 300;
        UFP = countPlayer;
        priceUFP = 4500;
        break;
    }
    bank = new Bank(URM, UFP, priceURM, priceUFP);
}

void Managment::PlayForm::EndGame(int player_id)
{
    System::Windows::Forms::MessageBox::Show(System::String::Format("Победитель: Игрок №{0}", player_id), "Внимание!");
    Form^ form = Application::OpenForms[0];
    form->Show();
    this->Close();
}

void Managment::PlayForm::NextStep()
{
    // Запомнить месяц
    int step_old = game->getStep();
    int id_old = game->getPlayerID();
    // Переход к следующему игроку
    game->NextPlayer(player, *bank); 
    if (game->getPlayerID() == id_old) {
        System::Windows::Forms::MessageBox::Show(System::String::Format("Ничья! Победителей нет!"), "Внимание!");
        Form^ form = Application::OpenForms[0];
        form->Show();
        this->Close();
    }
    // Проверка на победителя
    int winner_id = game->WinnerCheck(player);
    if (winner_id != -1) {
        EndGame(winner_id);
    }
    else {
        // Если перешли на след.месяц
        if (game->getStep() != step_old) {
            ChangeLevel();
            // Обработка запросов в банк
            game->BankRequest(player, *bank);
            // Проверка на банкротство 
            game->CheckLosers(player);
            int winner_id = game->WinnerCheck(player);
            if (winner_id != -1) {
                EndGame(winner_id);
            }
            // Генерируем курс банка
            GenerateBank();
        }
        // Очищаем запрос в банк у нового игрока
        player[game->getPlayerID() - 1].BankRequest.Clear();
        // Обнуляем время таймера
        timeStruct.min = 0;
        timeStruct.sec = 0;
    }
    UpdFactoryInfo();
}

void Managment::PlayForm::ChangeLevel()
{
    int chance = rand() % 100 + 1;

    switch (game->getLevel())
    {
    case 1:
        if (chance < 30) {
            game->setLevel(2);
        }
        break;
    case 2:
        if (chance < 30) {
            game->setLevel(1);
        }
        else if (chance > 60) {
            game->setLevel(3);
        }
        break;
    case 3:
        if (chance < 20) {
            game->setLevel(2);
        }
        else if (chance > 65) {
            game->setLevel(4);
        }
        break;
    case 4:
        if (chance < 15) {
            game->setLevel(3);
        }
        else if (chance > 75) {
            game->setLevel(5);
        }
        break;
    case 5:
        if (chance < 10) {
            game->setLevel(4);
        }
        break;
    }
}

