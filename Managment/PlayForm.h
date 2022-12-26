#pragma once
#include "Player.h"
#include "Game.h"
#include "Bank.h"

namespace Managment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PlayForm
	/// </summary>
	public ref class PlayForm : public System::Windows::Forms::Form
	{
	public:
		Player* player;
		Bank* bank;
		Game* game;
		PlayForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			game = new Game();
			bank = new Bank();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PlayForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_menu;
	private: System::Windows::Forms::Panel^ panel_title;
	private: System::Windows::Forms::Panel^ panel_playground;
	private: System::Windows::Forms::Panel^ panel_pgBottom;
	private: System::Windows::Forms::Panel^ panel_fourthPl;
	private: System::Windows::Forms::Panel^ panel_thirdPl;
	private: System::Windows::Forms::Panel^ panel_pgTop;
	private: System::Windows::Forms::Panel^ panel_secondPl;
	private: System::Windows::Forms::Panel^ panel_firstPl;
	private: System::Windows::Forms::Panel^ panel_logo2;
	private: System::Windows::Forms::Panel^ panel_logo1;
	private: System::Windows::Forms::Panel^ panel_logo4;
	private: System::Windows::Forms::Panel^ panel_logo3;

	private: System::Windows::Forms::Label^ label_pl4;
	private: System::Windows::Forms::Label^ label_pl3;
	private: System::Windows::Forms::Label^ label_pl2;
	private: System::Windows::Forms::Label^ label_pl1;
	private: System::Windows::Forms::Label^ label_info4;
	private: System::Windows::Forms::Label^ label_infoTitle4;
	private: System::Windows::Forms::Label^ label_info3;
	private: System::Windows::Forms::Label^ label_infoTitle3;
	private: System::Windows::Forms::Label^ label_gameInfo;
	private: System::Windows::Forms::Label^ label_player;
	private: System::Windows::Forms::Label^ label_step;
	private: System::Windows::Forms::Label^ label_timer;
	private: System::Windows::Forms::Label^ label_info1;
	private: System::Windows::Forms::Label^ label_infoTitle1;
	private: System::Windows::Forms::Label^ label_info2;
	private: System::Windows::Forms::Label^ label_infoTitle2;

	private: System::Windows::Forms::Button^ button_help;
	private: System::Windows::Forms::Button^ button_giveup;
	private: System::Windows::Forms::Button^ button_credits;
	private: System::Windows::Forms::Button^ button_production;
	private: System::Windows::Forms::Button^ button_bank;
	private: System::Windows::Forms::Button^ button_nextPlayer;

	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Timer^ timer_updInfo;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayForm::typeid));
			this->panel_menu = (gcnew System::Windows::Forms::Panel());
			this->button_nextPlayer = (gcnew System::Windows::Forms::Button());
			this->button_help = (gcnew System::Windows::Forms::Button());
			this->button_giveup = (gcnew System::Windows::Forms::Button());
			this->button_credits = (gcnew System::Windows::Forms::Button());
			this->button_production = (gcnew System::Windows::Forms::Button());
			this->button_bank = (gcnew System::Windows::Forms::Button());
			this->panel_title = (gcnew System::Windows::Forms::Panel());
			this->label_player = (gcnew System::Windows::Forms::Label());
			this->label_step = (gcnew System::Windows::Forms::Label());
			this->label_timer = (gcnew System::Windows::Forms::Label());
			this->label_gameInfo = (gcnew System::Windows::Forms::Label());
			this->panel_playground = (gcnew System::Windows::Forms::Panel());
			this->panel_pgBottom = (gcnew System::Windows::Forms::Panel());
			this->panel_fourthPl = (gcnew System::Windows::Forms::Panel());
			this->label_pl4 = (gcnew System::Windows::Forms::Label());
			this->panel_logo4 = (gcnew System::Windows::Forms::Panel());
			this->label_info4 = (gcnew System::Windows::Forms::Label());
			this->label_infoTitle4 = (gcnew System::Windows::Forms::Label());
			this->panel_thirdPl = (gcnew System::Windows::Forms::Panel());
			this->label_pl3 = (gcnew System::Windows::Forms::Label());
			this->panel_logo3 = (gcnew System::Windows::Forms::Panel());
			this->label_info3 = (gcnew System::Windows::Forms::Label());
			this->label_infoTitle3 = (gcnew System::Windows::Forms::Label());
			this->panel_pgTop = (gcnew System::Windows::Forms::Panel());
			this->panel_secondPl = (gcnew System::Windows::Forms::Panel());
			this->label_pl2 = (gcnew System::Windows::Forms::Label());
			this->panel_logo2 = (gcnew System::Windows::Forms::Panel());
			this->label_info2 = (gcnew System::Windows::Forms::Label());
			this->label_infoTitle2 = (gcnew System::Windows::Forms::Label());
			this->panel_firstPl = (gcnew System::Windows::Forms::Panel());
			this->label_pl1 = (gcnew System::Windows::Forms::Label());
			this->panel_logo1 = (gcnew System::Windows::Forms::Panel());
			this->label_info1 = (gcnew System::Windows::Forms::Label());
			this->label_infoTitle1 = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_updInfo = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel_menu->SuspendLayout();
			this->panel_title->SuspendLayout();
			this->panel_playground->SuspendLayout();
			this->panel_pgBottom->SuspendLayout();
			this->panel_fourthPl->SuspendLayout();
			this->panel_thirdPl->SuspendLayout();
			this->panel_pgTop->SuspendLayout();
			this->panel_secondPl->SuspendLayout();
			this->panel_firstPl->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_menu
			// 
			this->panel_menu->Controls->Add(this->button_nextPlayer);
			this->panel_menu->Controls->Add(this->button_help);
			this->panel_menu->Controls->Add(this->button_giveup);
			this->panel_menu->Controls->Add(this->button_credits);
			this->panel_menu->Controls->Add(this->button_production);
			this->panel_menu->Controls->Add(this->button_bank);
			this->panel_menu->Controls->Add(this->panel_title);
			this->panel_menu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_menu->Location = System::Drawing::Point(0, 0);
			this->panel_menu->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_menu->Name = L"panel_menu";
			this->panel_menu->Size = System::Drawing::Size(275, 753);
			this->panel_menu->TabIndex = 0;
			// 
			// button_nextPlayer
			// 
			this->button_nextPlayer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button_nextPlayer->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_nextPlayer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_nextPlayer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_nextPlayer->ForeColor = System::Drawing::Color::White;
			this->button_nextPlayer->Location = System::Drawing::Point(0, 538);
			this->button_nextPlayer->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_nextPlayer->Name = L"button_nextPlayer";
			this->button_nextPlayer->Size = System::Drawing::Size(275, 60);
			this->button_nextPlayer->TabIndex = 8;
			this->button_nextPlayer->Text = L"Закончить ход";
			this->button_nextPlayer->UseVisualStyleBackColor = false;
			this->button_nextPlayer->Click += gcnew System::EventHandler(this, &PlayForm::button_nextPlayer_Click);
			// 
			// button_help
			// 
			this->button_help->BackColor = System::Drawing::Color::Aquamarine;
			this->button_help->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_help->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_help->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_help->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_help->ForeColor = System::Drawing::Color::White;
			this->button_help->Location = System::Drawing::Point(0, 380);
			this->button_help->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(275, 60);
			this->button_help->TabIndex = 7;
			this->button_help->Text = L"Помощь";
			this->button_help->UseVisualStyleBackColor = false;
			this->button_help->Click += gcnew System::EventHandler(this, &PlayForm::button_help_Click);
			// 
			// button_giveup
			// 
			this->button_giveup->BackColor = System::Drawing::Color::Crimson;
			this->button_giveup->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button_giveup->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_giveup->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_giveup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_giveup->ForeColor = System::Drawing::Color::White;
			this->button_giveup->Location = System::Drawing::Point(0, 693);
			this->button_giveup->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_giveup->Name = L"button_giveup";
			this->button_giveup->Size = System::Drawing::Size(275, 60);
			this->button_giveup->TabIndex = 6;
			this->button_giveup->Text = L"Сдаться";
			this->button_giveup->UseVisualStyleBackColor = false;
			this->button_giveup->Click += gcnew System::EventHandler(this, &PlayForm::button_giveup_Click);
			// 
			// button_credits
			// 
			this->button_credits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button_credits->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_credits->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_credits->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_credits->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_credits->ForeColor = System::Drawing::Color::White;
			this->button_credits->Location = System::Drawing::Point(0, 320);
			this->button_credits->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_credits->Name = L"button_credits";
			this->button_credits->Size = System::Drawing::Size(275, 60);
			this->button_credits->TabIndex = 4;
			this->button_credits->Text = L"Кредиты";
			this->button_credits->UseVisualStyleBackColor = false;
			this->button_credits->Click += gcnew System::EventHandler(this, &PlayForm::button_credits_Click);
			// 
			// button_production
			// 
			this->button_production->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button_production->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_production->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_production->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_production->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_production->ForeColor = System::Drawing::Color::White;
			this->button_production->Location = System::Drawing::Point(0, 260);
			this->button_production->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_production->Name = L"button_production";
			this->button_production->Size = System::Drawing::Size(275, 60);
			this->button_production->TabIndex = 3;
			this->button_production->Text = L"Производство";
			this->button_production->UseVisualStyleBackColor = false;
			this->button_production->Click += gcnew System::EventHandler(this, &PlayForm::button_production_Click);
			// 
			// button_bank
			// 
			this->button_bank->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button_bank->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_bank->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_bank->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_bank->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_bank->ForeColor = System::Drawing::Color::White;
			this->button_bank->Location = System::Drawing::Point(0, 200);
			this->button_bank->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_bank->Name = L"button_bank";
			this->button_bank->Size = System::Drawing::Size(275, 60);
			this->button_bank->TabIndex = 2;
			this->button_bank->Text = L"Банк";
			this->button_bank->UseVisualStyleBackColor = false;
			this->button_bank->Click += gcnew System::EventHandler(this, &PlayForm::button_bank_Click);
			// 
			// panel_title
			// 
			this->panel_title->BackColor = System::Drawing::Color::Teal;
			this->panel_title->Controls->Add(this->label_player);
			this->panel_title->Controls->Add(this->label_step);
			this->panel_title->Controls->Add(this->label_timer);
			this->panel_title->Controls->Add(this->label_gameInfo);
			this->panel_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_title->Location = System::Drawing::Point(0, 0);
			this->panel_title->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_title->Name = L"panel_title";
			this->panel_title->Size = System::Drawing::Size(275, 200);
			this->panel_title->TabIndex = 0;
			// 
			// label_player
			// 
			this->label_player->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_player->ForeColor = System::Drawing::Color::White;
			this->label_player->Location = System::Drawing::Point(0, 88);
			this->label_player->Name = L"label_player";
			this->label_player->Size = System::Drawing::Size(275, 52);
			this->label_player->TabIndex = 3;
			this->label_player->Text = L"Ходит игрок:";
			// 
			// label_step
			// 
			this->label_step->AutoSize = true;
			this->label_step->Cursor = System::Windows::Forms::Cursors::Default;
			this->label_step->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_step->ForeColor = System::Drawing::Color::White;
			this->label_step->Location = System::Drawing::Point(0, 60);
			this->label_step->Name = L"label_step";
			this->label_step->Size = System::Drawing::Size(72, 28);
			this->label_step->TabIndex = 1;
			this->label_step->Text = L"Ход №";
			// 
			// label_timer
			// 
			this->label_timer->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label_timer->ForeColor = System::Drawing::Color::White;
			this->label_timer->Location = System::Drawing::Point(0, 140);
			this->label_timer->Name = L"label_timer";
			this->label_timer->Size = System::Drawing::Size(275, 60);
			this->label_timer->TabIndex = 2;
			this->label_timer->Text = L"Прошло времени:";
			// 
			// label_gameInfo
			// 
			this->label_gameInfo->AutoEllipsis = true;
			this->label_gameInfo->BackColor = System::Drawing::Color::Teal;
			this->label_gameInfo->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_gameInfo->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_gameInfo->ForeColor = System::Drawing::Color::White;
			this->label_gameInfo->Location = System::Drawing::Point(0, 0);
			this->label_gameInfo->Name = L"label_gameInfo";
			this->label_gameInfo->Size = System::Drawing::Size(275, 60);
			this->label_gameInfo->TabIndex = 0;
			this->label_gameInfo->Text = L"Информация о игре";
			this->label_gameInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_playground
			// 
			this->panel_playground->Controls->Add(this->panel_pgBottom);
			this->panel_playground->Controls->Add(this->panel_pgTop);
			this->panel_playground->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_playground->Location = System::Drawing::Point(275, 0);
			this->panel_playground->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_playground->Name = L"panel_playground";
			this->panel_playground->Size = System::Drawing::Size(1107, 753);
			this->panel_playground->TabIndex = 1;
			// 
			// panel_pgBottom
			// 
			this->panel_pgBottom->Controls->Add(this->panel_fourthPl);
			this->panel_pgBottom->Controls->Add(this->panel_thirdPl);
			this->panel_pgBottom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_pgBottom->Location = System::Drawing::Point(0, 376);
			this->panel_pgBottom->Name = L"panel_pgBottom";
			this->panel_pgBottom->Size = System::Drawing::Size(1107, 377);
			this->panel_pgBottom->TabIndex = 1;
			// 
			// panel_fourthPl
			// 
			this->panel_fourthPl->Controls->Add(this->label_pl4);
			this->panel_fourthPl->Controls->Add(this->panel_logo4);
			this->panel_fourthPl->Controls->Add(this->label_info4);
			this->panel_fourthPl->Controls->Add(this->label_infoTitle4);
			this->panel_fourthPl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_fourthPl->Location = System::Drawing::Point(553, 0);
			this->panel_fourthPl->Name = L"panel_fourthPl";
			this->panel_fourthPl->Size = System::Drawing::Size(554, 377);
			this->panel_fourthPl->TabIndex = 1;
			this->panel_fourthPl->Visible = false;
			// 
			// label_pl4
			// 
			this->label_pl4->AutoSize = true;
			this->label_pl4->ForeColor = System::Drawing::Color::White;
			this->label_pl4->Location = System::Drawing::Point(6, 0);
			this->label_pl4->Name = L"label_pl4";
			this->label_pl4->Size = System::Drawing::Size(103, 28);
			this->label_pl4->TabIndex = 6;
			this->label_pl4->Text = L"Игрок №4";
			// 
			// panel_logo4
			// 
			this->panel_logo4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_logo4.BackgroundImage")));
			this->panel_logo4->Location = System::Drawing::Point(6, 31);
			this->panel_logo4->Name = L"panel_logo4";
			this->panel_logo4->Size = System::Drawing::Size(99, 98);
			this->panel_logo4->TabIndex = 5;
			// 
			// label_info4
			// 
			this->label_info4->AutoSize = true;
			this->label_info4->ForeColor = System::Drawing::Color::White;
			this->label_info4->Location = System::Drawing::Point(208, 36);
			this->label_info4->Name = L"label_info4";
			this->label_info4->Size = System::Drawing::Size(144, 28);
			this->label_info4->TabIndex = 4;
			this->label_info4->Text = L"Инофрмация";
			// 
			// label_infoTitle4
			// 
			this->label_infoTitle4->AutoSize = true;
			this->label_infoTitle4->ForeColor = System::Drawing::Color::White;
			this->label_infoTitle4->Location = System::Drawing::Point(337, 8);
			this->label_infoTitle4->Name = L"label_infoTitle4";
			this->label_infoTitle4->Size = System::Drawing::Size(144, 28);
			this->label_infoTitle4->TabIndex = 3;
			this->label_infoTitle4->Text = L"Инофрмация";
			// 
			// panel_thirdPl
			// 
			this->panel_thirdPl->Controls->Add(this->label_pl3);
			this->panel_thirdPl->Controls->Add(this->panel_logo3);
			this->panel_thirdPl->Controls->Add(this->label_info3);
			this->panel_thirdPl->Controls->Add(this->label_infoTitle3);
			this->panel_thirdPl->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_thirdPl->Location = System::Drawing::Point(0, 0);
			this->panel_thirdPl->Name = L"panel_thirdPl";
			this->panel_thirdPl->Size = System::Drawing::Size(553, 377);
			this->panel_thirdPl->TabIndex = 0;
			this->panel_thirdPl->Visible = false;
			// 
			// label_pl3
			// 
			this->label_pl3->AutoSize = true;
			this->label_pl3->ForeColor = System::Drawing::Color::White;
			this->label_pl3->Location = System::Drawing::Point(17, 0);
			this->label_pl3->Name = L"label_pl3";
			this->label_pl3->Size = System::Drawing::Size(104, 28);
			this->label_pl3->TabIndex = 6;
			this->label_pl3->Text = L"Игрок №3";
			// 
			// panel_logo3
			// 
			this->panel_logo3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_logo3.BackgroundImage")));
			this->panel_logo3->Location = System::Drawing::Point(17, 31);
			this->panel_logo3->Name = L"panel_logo3";
			this->panel_logo3->Size = System::Drawing::Size(99, 98);
			this->panel_logo3->TabIndex = 5;
			// 
			// label_info3
			// 
			this->label_info3->AutoSize = true;
			this->label_info3->ForeColor = System::Drawing::Color::White;
			this->label_info3->Location = System::Drawing::Point(223, 36);
			this->label_info3->Name = L"label_info3";
			this->label_info3->Size = System::Drawing::Size(144, 28);
			this->label_info3->TabIndex = 4;
			this->label_info3->Text = L"Инофрмация";
			// 
			// label_infoTitle3
			// 
			this->label_infoTitle3->AutoSize = true;
			this->label_infoTitle3->ForeColor = System::Drawing::Color::White;
			this->label_infoTitle3->Location = System::Drawing::Point(352, 8);
			this->label_infoTitle3->Name = L"label_infoTitle3";
			this->label_infoTitle3->Size = System::Drawing::Size(144, 28);
			this->label_infoTitle3->TabIndex = 3;
			this->label_infoTitle3->Text = L"Инофрмация";
			// 
			// panel_pgTop
			// 
			this->panel_pgTop->Controls->Add(this->panel_secondPl);
			this->panel_pgTop->Controls->Add(this->panel_firstPl);
			this->panel_pgTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_pgTop->Location = System::Drawing::Point(0, 0);
			this->panel_pgTop->Name = L"panel_pgTop";
			this->panel_pgTop->Size = System::Drawing::Size(1107, 376);
			this->panel_pgTop->TabIndex = 0;
			// 
			// panel_secondPl
			// 
			this->panel_secondPl->Controls->Add(this->label_pl2);
			this->panel_secondPl->Controls->Add(this->panel_logo2);
			this->panel_secondPl->Controls->Add(this->label_info2);
			this->panel_secondPl->Controls->Add(this->label_infoTitle2);
			this->panel_secondPl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_secondPl->Location = System::Drawing::Point(553, 0);
			this->panel_secondPl->Name = L"panel_secondPl";
			this->panel_secondPl->Size = System::Drawing::Size(554, 376);
			this->panel_secondPl->TabIndex = 1;
			// 
			// label_pl2
			// 
			this->label_pl2->AutoSize = true;
			this->label_pl2->ForeColor = System::Drawing::Color::White;
			this->label_pl2->Location = System::Drawing::Point(6, 4);
			this->label_pl2->Name = L"label_pl2";
			this->label_pl2->Size = System::Drawing::Size(104, 28);
			this->label_pl2->TabIndex = 5;
			this->label_pl2->Text = L"Игрок №2";
			// 
			// panel_logo2
			// 
			this->panel_logo2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_logo2.BackgroundImage")));
			this->panel_logo2->Location = System::Drawing::Point(6, 37);
			this->panel_logo2->Name = L"panel_logo2";
			this->panel_logo2->Size = System::Drawing::Size(99, 98);
			this->panel_logo2->TabIndex = 4;
			// 
			// label_info2
			// 
			this->label_info2->AutoSize = true;
			this->label_info2->ForeColor = System::Drawing::Color::White;
			this->label_info2->Location = System::Drawing::Point(208, 37);
			this->label_info2->Name = L"label_info2";
			this->label_info2->Size = System::Drawing::Size(144, 28);
			this->label_info2->TabIndex = 3;
			this->label_info2->Text = L"Инофрмация";
			// 
			// label_infoTitle2
			// 
			this->label_infoTitle2->AutoSize = true;
			this->label_infoTitle2->ForeColor = System::Drawing::Color::White;
			this->label_infoTitle2->Location = System::Drawing::Point(337, 9);
			this->label_infoTitle2->Name = L"label_infoTitle2";
			this->label_infoTitle2->Size = System::Drawing::Size(144, 28);
			this->label_infoTitle2->TabIndex = 2;
			this->label_infoTitle2->Text = L"Инофрмация";
			// 
			// panel_firstPl
			// 
			this->panel_firstPl->Controls->Add(this->label_pl1);
			this->panel_firstPl->Controls->Add(this->panel_logo1);
			this->panel_firstPl->Controls->Add(this->label_info1);
			this->panel_firstPl->Controls->Add(this->label_infoTitle1);
			this->panel_firstPl->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_firstPl->Location = System::Drawing::Point(0, 0);
			this->panel_firstPl->Name = L"panel_firstPl";
			this->panel_firstPl->Size = System::Drawing::Size(553, 376);
			this->panel_firstPl->TabIndex = 0;
			// 
			// label_pl1
			// 
			this->label_pl1->AutoSize = true;
			this->label_pl1->ForeColor = System::Drawing::Color::White;
			this->label_pl1->Location = System::Drawing::Point(17, 4);
			this->label_pl1->Name = L"label_pl1";
			this->label_pl1->Size = System::Drawing::Size(101, 28);
			this->label_pl1->TabIndex = 3;
			this->label_pl1->Text = L"Игрок №1";
			// 
			// panel_logo1
			// 
			this->panel_logo1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_logo1.BackgroundImage")));
			this->panel_logo1->Location = System::Drawing::Point(17, 37);
			this->panel_logo1->Name = L"panel_logo1";
			this->panel_logo1->Size = System::Drawing::Size(99, 98);
			this->panel_logo1->TabIndex = 2;
			// 
			// label_info1
			// 
			this->label_info1->AutoSize = true;
			this->label_info1->ForeColor = System::Drawing::Color::White;
			this->label_info1->Location = System::Drawing::Point(223, 37);
			this->label_info1->Name = L"label_info1";
			this->label_info1->Size = System::Drawing::Size(144, 28);
			this->label_info1->TabIndex = 1;
			this->label_info1->Text = L"Инофрмация";
			// 
			// label_infoTitle1
			// 
			this->label_infoTitle1->AutoSize = true;
			this->label_infoTitle1->ForeColor = System::Drawing::Color::White;
			this->label_infoTitle1->Location = System::Drawing::Point(352, 9);
			this->label_infoTitle1->Name = L"label_infoTitle1";
			this->label_infoTitle1->Size = System::Drawing::Size(144, 28);
			this->label_infoTitle1->TabIndex = 0;
			this->label_infoTitle1->Text = L"Инофрмация";
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &PlayForm::timer_Tick);
			// 
			// timer_updInfo
			// 
			this->timer_updInfo->Interval = 1000;
			this->timer_updInfo->Tick += gcnew System::EventHandler(this, &PlayForm::timer_updInfo_Tick);
			// 
			// PlayForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->ClientSize = System::Drawing::Size(1382, 753);
			this->ControlBox = false;
			this->Controls->Add(this->panel_playground);
			this->Controls->Add(this->panel_menu);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MinimumSize = System::Drawing::Size(700, 400);
			this->Name = L"PlayForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Игра";
			this->Load += gcnew System::EventHandler(this, &PlayForm::PlayForm_Load);
			this->panel_menu->ResumeLayout(false);
			this->panel_title->ResumeLayout(false);
			this->panel_title->PerformLayout();
			this->panel_playground->ResumeLayout(false);
			this->panel_pgBottom->ResumeLayout(false);
			this->panel_fourthPl->ResumeLayout(false);
			this->panel_fourthPl->PerformLayout();
			this->panel_thirdPl->ResumeLayout(false);
			this->panel_thirdPl->PerformLayout();
			this->panel_pgTop->ResumeLayout(false);
			this->panel_secondPl->ResumeLayout(false);
			this->panel_secondPl->PerformLayout();
			this->panel_firstPl->ResumeLayout(false);
			this->panel_firstPl->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: void GeneratePlayers();
		private: void UpdFactoryInfo();
		private: void UpdGameInfo();
		private: void GenerateGame();
		private: void GenerateBank();
		private: void EndGame(int player_id);
		private: void NextStep();
		private: void ChangeLevel();
		private: System::Void button_giveup_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button_bank_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button_production_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button_credits_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void PlayForm_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e);
		private: System::Void timer_updInfo_Tick(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button_nextPlayer_Click(System::Object^ sender, System::EventArgs^ e);
};
}
