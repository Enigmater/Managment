#pragma once

namespace Managment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_leftSide;
	private: System::Windows::Forms::Panel^ panel_title;
	private: System::Windows::Forms::Label^ label_title;

	private: System::Windows::Forms::Button^ button_backToMenu;
	private: System::Windows::Forms::Label^ label_roundtime;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_roundtime;
	private: System::Windows::Forms::Label^ label_player;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_players;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel_leftSide = (gcnew System::Windows::Forms::Panel());
			this->label_roundtime = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_roundtime = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_player = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_players = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_backToMenu = (gcnew System::Windows::Forms::Button());
			this->panel_title = (gcnew System::Windows::Forms::Panel());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->panel_leftSide->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_roundtime))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_players))->BeginInit();
			this->panel_title->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_leftSide
			// 
			this->panel_leftSide->Controls->Add(this->label_roundtime);
			this->panel_leftSide->Controls->Add(this->numericUpDown_roundtime);
			this->panel_leftSide->Controls->Add(this->label_player);
			this->panel_leftSide->Controls->Add(this->numericUpDown_players);
			this->panel_leftSide->Controls->Add(this->button_backToMenu);
			this->panel_leftSide->Controls->Add(this->panel_title);
			this->panel_leftSide->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_leftSide->Location = System::Drawing::Point(0, 0);
			this->panel_leftSide->MinimumSize = System::Drawing::Size(375, 0);
			this->panel_leftSide->Name = L"panel_leftSide";
			this->panel_leftSide->Size = System::Drawing::Size(375, 453);
			this->panel_leftSide->TabIndex = 0;
			// 
			// label_roundtime
			// 
			this->label_roundtime->AutoSize = true;
			this->label_roundtime->Location = System::Drawing::Point(19, 181);
			this->label_roundtime->Name = L"label_roundtime";
			this->label_roundtime->Size = System::Drawing::Size(144, 28);
			this->label_roundtime->TabIndex = 5;
			this->label_roundtime->Text = L"Время на ход";
			// 
			// numericUpDown_roundtime
			// 
			this->numericUpDown_roundtime->Location = System::Drawing::Point(24, 212);
			this->numericUpDown_roundtime->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown_roundtime->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown_roundtime->Name = L"numericUpDown_roundtime";
			this->numericUpDown_roundtime->Size = System::Drawing::Size(275, 36);
			this->numericUpDown_roundtime->TabIndex = 4;
			this->numericUpDown_roundtime->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label_player
			// 
			this->label_player->AutoSize = true;
			this->label_player->Location = System::Drawing::Point(19, 97);
			this->label_player->Name = L"label_player";
			this->label_player->Size = System::Drawing::Size(216, 28);
			this->label_player->TabIndex = 3;
			this->label_player->Text = L"Количество игроков";
			// 
			// numericUpDown_players
			// 
			this->numericUpDown_players->Location = System::Drawing::Point(24, 128);
			this->numericUpDown_players->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->numericUpDown_players->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown_players->Name = L"numericUpDown_players";
			this->numericUpDown_players->Size = System::Drawing::Size(275, 36);
			this->numericUpDown_players->TabIndex = 2;
			this->numericUpDown_players->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// button_backToMenu
			// 
			this->button_backToMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button_backToMenu->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button_backToMenu->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_backToMenu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_backToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_backToMenu->Location = System::Drawing::Point(0, 393);
			this->button_backToMenu->Name = L"button_backToMenu";
			this->button_backToMenu->Size = System::Drawing::Size(375, 60);
			this->button_backToMenu->TabIndex = 1;
			this->button_backToMenu->Text = L"Вернуться в меню";
			this->button_backToMenu->UseVisualStyleBackColor = false;
			this->button_backToMenu->Click += gcnew System::EventHandler(this, &Settings::button_backToMenu_Click);
			// 
			// panel_title
			// 
			this->panel_title->Controls->Add(this->label_title);
			this->panel_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_title->Location = System::Drawing::Point(0, 0);
			this->panel_title->Name = L"panel_title";
			this->panel_title->Size = System::Drawing::Size(375, 100);
			this->panel_title->TabIndex = 0;
			// 
			// label_title
			// 
			this->label_title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_title->Font = (gcnew System::Drawing::Font(L"Impact", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)));
			this->label_title->Location = System::Drawing::Point(0, 0);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(375, 100);
			this->label_title->TabIndex = 0;
			this->label_title->Text = L"Настрйоки";
			this->label_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Settings
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->ClientSize = System::Drawing::Size(357, 453);
			this->ControlBox = false;
			this->Controls->Add(this->panel_leftSide);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(375, 500);
			this->MinimumSize = System::Drawing::Size(375, 500);
			this->Name = L"Settings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Settings";
			this->Load += gcnew System::EventHandler(this, &Settings::Settings_Load);
			this->panel_leftSide->ResumeLayout(false);
			this->panel_leftSide->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_roundtime))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_players))->EndInit();
			this->panel_title->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_backToMenu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Settings_Load(System::Object^ sender, System::EventArgs^ e);
};
}
