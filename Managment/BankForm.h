#pragma once
#include "Bank.h"
#include "Game.h"
#include "Player.h"

namespace Managment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BankForm
	/// </summary>
	public ref class BankForm : public System::Windows::Forms::Form
	{
	public:
		Bank* bank;
		Player* player;
		BankForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		BankForm(Player* player, Bank* bank) {
			InitializeComponent();
			this->player = player;
			this->bank = bank;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~BankForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_title;
	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::Label^ label_UFP;
	private: System::Windows::Forms::Label^ label_URM;
	private: System::Windows::Forms::DataGridView^ dataGridView_bank;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AviableURM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AviableUFP;
	private: System::Windows::Forms::Panel^ panel_table;
	private: System::Windows::Forms::Panel^ panel_accept;
	private: System::Windows::Forms::Button^ button_accept;



	private: System::Windows::Forms::Panel^ panel_input;
	private: System::Windows::Forms::Panel^ panel_rightSide;

	private: System::Windows::Forms::Panel^ panel_leftSide;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_amountURM;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_priceUFP;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown_amountUFP;




	private: System::Windows::Forms::NumericUpDown^ numericUpDown_priceURM;
	private: System::Windows::Forms::Label^ label_AmountURM;
	private: System::Windows::Forms::Label^ label_priceUFM;
	private: System::Windows::Forms::Label^ label_amountUFM;
	private: System::Windows::Forms::Label^ label_priceURM;
	private: System::Windows::Forms::CheckBox^ checkBox_bargainUFP;
	private: System::Windows::Forms::CheckBox^ checkBox_bargainURM;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel_title = (gcnew System::Windows::Forms::Panel());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->dataGridView_bank = (gcnew System::Windows::Forms::DataGridView());
			this->AviableURM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AviableUFP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel_table = (gcnew System::Windows::Forms::Panel());
			this->panel_accept = (gcnew System::Windows::Forms::Panel());
			this->button_accept = (gcnew System::Windows::Forms::Button());
			this->panel_input = (gcnew System::Windows::Forms::Panel());
			this->panel_rightSide = (gcnew System::Windows::Forms::Panel());
			this->label_UFP = (gcnew System::Windows::Forms::Label());
			this->checkBox_bargainUFP = (gcnew System::Windows::Forms::CheckBox());
			this->label_priceUFM = (gcnew System::Windows::Forms::Label());
			this->label_amountUFM = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_priceUFP = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_amountUFP = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel_leftSide = (gcnew System::Windows::Forms::Panel());
			this->label_URM = (gcnew System::Windows::Forms::Label());
			this->checkBox_bargainURM = (gcnew System::Windows::Forms::CheckBox());
			this->label_priceURM = (gcnew System::Windows::Forms::Label());
			this->label_AmountURM = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_priceURM = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown_amountURM = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel_title->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_bank))->BeginInit();
			this->panel_table->SuspendLayout();
			this->panel_accept->SuspendLayout();
			this->panel_input->SuspendLayout();
			this->panel_rightSide->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_priceUFP))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_amountUFP))->BeginInit();
			this->panel_leftSide->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_priceURM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_amountURM))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_title
			// 
			this->panel_title->Controls->Add(this->label_title);
			this->panel_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_title->Location = System::Drawing::Point(0, 0);
			this->panel_title->Name = L"panel_title";
			this->panel_title->Size = System::Drawing::Size(1002, 100);
			this->panel_title->TabIndex = 0;
			// 
			// label_title
			// 
			this->label_title->BackColor = System::Drawing::Color::Teal;
			this->label_title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_title->Font = (gcnew System::Drawing::Font(L"Impact", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_title->Location = System::Drawing::Point(0, 0);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(1002, 100);
			this->label_title->TabIndex = 0;
			this->label_title->Text = L"Банк";
			this->label_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView_bank
			// 
			this->dataGridView_bank->AllowUserToAddRows = false;
			this->dataGridView_bank->AllowUserToDeleteRows = false;
			this->dataGridView_bank->AllowUserToResizeColumns = false;
			this->dataGridView_bank->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			this->dataGridView_bank->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_bank->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_bank->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_bank->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->dataGridView_bank->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView_bank->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_bank->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView_bank->ColumnHeadersHeight = 29;
			this->dataGridView_bank->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->AviableURM,
					this->AviableUFP
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView_bank->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_bank->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView_bank->EnableHeadersVisualStyles = false;
			this->dataGridView_bank->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->dataGridView_bank->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dataGridView_bank->Location = System::Drawing::Point(0, 0);
			this->dataGridView_bank->Name = L"dataGridView_bank";
			this->dataGridView_bank->ReadOnly = true;
			this->dataGridView_bank->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->NullValue = L"Значение";
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_bank->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView_bank->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->dataGridView_bank->RowTemplate->Height = 24;
			this->dataGridView_bank->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView_bank->Size = System::Drawing::Size(1002, 96);
			this->dataGridView_bank->TabIndex = 1;
			// 
			// AviableURM
			// 
			this->AviableURM->HeaderText = L"ЕМП";
			this->AviableURM->MinimumWidth = 6;
			this->AviableURM->Name = L"AviableURM";
			this->AviableURM->ReadOnly = true;
			// 
			// AviableUFP
			// 
			this->AviableUFP->HeaderText = L"ЕГП";
			this->AviableUFP->MinimumWidth = 6;
			this->AviableUFP->Name = L"AviableUFP";
			this->AviableUFP->ReadOnly = true;
			// 
			// panel_table
			// 
			this->panel_table->Controls->Add(this->dataGridView_bank);
			this->panel_table->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_table->Location = System::Drawing::Point(0, 100);
			this->panel_table->Name = L"panel_table";
			this->panel_table->Size = System::Drawing::Size(1002, 96);
			this->panel_table->TabIndex = 2;
			// 
			// panel_accept
			// 
			this->panel_accept->Controls->Add(this->button_accept);
			this->panel_accept->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_accept->Location = System::Drawing::Point(0, 393);
			this->panel_accept->Name = L"panel_accept";
			this->panel_accept->Size = System::Drawing::Size(1002, 60);
			this->panel_accept->TabIndex = 3;
			// 
			// button_accept
			// 
			this->button_accept->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button_accept->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_accept->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_accept->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_accept->ForeColor = System::Drawing::Color::White;
			this->button_accept->Location = System::Drawing::Point(376, 0);
			this->button_accept->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_accept->Name = L"button_accept";
			this->button_accept->Size = System::Drawing::Size(250, 60);
			this->button_accept->TabIndex = 7;
			this->button_accept->Text = L"Подтвердить";
			this->button_accept->UseVisualStyleBackColor = false;
			this->button_accept->Click += gcnew System::EventHandler(this, &BankForm::button_back_Click);
			// 
			// panel_input
			// 
			this->panel_input->Controls->Add(this->panel_rightSide);
			this->panel_input->Controls->Add(this->panel_leftSide);
			this->panel_input->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_input->Location = System::Drawing::Point(0, 196);
			this->panel_input->Name = L"panel_input";
			this->panel_input->Size = System::Drawing::Size(1002, 197);
			this->panel_input->TabIndex = 8;
			// 
			// panel_rightSide
			// 
			this->panel_rightSide->Controls->Add(this->label_UFP);
			this->panel_rightSide->Controls->Add(this->checkBox_bargainUFP);
			this->panel_rightSide->Controls->Add(this->label_priceUFM);
			this->panel_rightSide->Controls->Add(this->label_amountUFM);
			this->panel_rightSide->Controls->Add(this->numericUpDown_priceUFP);
			this->panel_rightSide->Controls->Add(this->numericUpDown_amountUFP);
			this->panel_rightSide->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_rightSide->Location = System::Drawing::Point(500, 0);
			this->panel_rightSide->MaximumSize = System::Drawing::Size(500, 0);
			this->panel_rightSide->Name = L"panel_rightSide";
			this->panel_rightSide->Size = System::Drawing::Size(500, 197);
			this->panel_rightSide->TabIndex = 1;
			// 
			// label_UFP
			// 
			this->label_UFP->AutoSize = true;
			this->label_UFP->Location = System::Drawing::Point(172, 8);
			this->label_UFP->Name = L"label_UFP";
			this->label_UFP->Size = System::Drawing::Size(150, 28);
			this->label_UFP->TabIndex = 7;
			this->label_UFP->Text = L"ЕГП доступно: ";
			// 
			// checkBox_bargainUFP
			// 
			this->checkBox_bargainUFP->AutoSize = true;
			this->checkBox_bargainUFP->Location = System::Drawing::Point(11, 8);
			this->checkBox_bargainUFP->Name = L"checkBox_bargainUFP";
			this->checkBox_bargainUFP->Size = System::Drawing::Size(155, 32);
			this->checkBox_bargainUFP->TabIndex = 6;
			this->checkBox_bargainUFP->Text = L"Продать ЕГП";
			this->checkBox_bargainUFP->UseVisualStyleBackColor = true;
			this->checkBox_bargainUFP->CheckedChanged += gcnew System::EventHandler(this, &BankForm::checkBox_bargainUFP_CheckedChanged);
			// 
			// label_priceUFM
			// 
			this->label_priceUFM->AutoSize = true;
			this->label_priceUFM->Location = System::Drawing::Point(6, 115);
			this->label_priceUFM->Name = L"label_priceUFM";
			this->label_priceUFM->Size = System::Drawing::Size(153, 28);
			this->label_priceUFM->TabIndex = 5;
			this->label_priceUFM->Text = L"Цена за штуку";
			// 
			// label_amountUFM
			// 
			this->label_amountUFM->AutoSize = true;
			this->label_amountUFM->Location = System::Drawing::Point(6, 43);
			this->label_amountUFM->Name = L"label_amountUFM";
			this->label_amountUFM->Size = System::Drawing::Size(201, 28);
			this->label_amountUFM->TabIndex = 4;
			this->label_amountUFM->Text = L"Кол-во на продажу";
			// 
			// numericUpDown_priceUFP
			// 
			this->numericUpDown_priceUFP->BackColor = System::Drawing::Color::Teal;
			this->numericUpDown_priceUFP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown_priceUFP->ForeColor = System::Drawing::Color::White;
			this->numericUpDown_priceUFP->Location = System::Drawing::Point(11, 146);
			this->numericUpDown_priceUFP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown_priceUFP->Name = L"numericUpDown_priceUFP";
			this->numericUpDown_priceUFP->Size = System::Drawing::Size(474, 32);
			this->numericUpDown_priceUFP->TabIndex = 3;
			// 
			// numericUpDown_amountUFP
			// 
			this->numericUpDown_amountUFP->BackColor = System::Drawing::Color::Teal;
			this->numericUpDown_amountUFP->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown_amountUFP->ForeColor = System::Drawing::Color::White;
			this->numericUpDown_amountUFP->Location = System::Drawing::Point(11, 71);
			this->numericUpDown_amountUFP->Name = L"numericUpDown_amountUFP";
			this->numericUpDown_amountUFP->Size = System::Drawing::Size(474, 32);
			this->numericUpDown_amountUFP->TabIndex = 2;
			// 
			// panel_leftSide
			// 
			this->panel_leftSide->Controls->Add(this->label_URM);
			this->panel_leftSide->Controls->Add(this->checkBox_bargainURM);
			this->panel_leftSide->Controls->Add(this->label_priceURM);
			this->panel_leftSide->Controls->Add(this->label_AmountURM);
			this->panel_leftSide->Controls->Add(this->numericUpDown_priceURM);
			this->panel_leftSide->Controls->Add(this->numericUpDown_amountURM);
			this->panel_leftSide->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_leftSide->Location = System::Drawing::Point(0, 0);
			this->panel_leftSide->MaximumSize = System::Drawing::Size(500, 0);
			this->panel_leftSide->Name = L"panel_leftSide";
			this->panel_leftSide->Size = System::Drawing::Size(500, 197);
			this->panel_leftSide->TabIndex = 0;
			// 
			// label_URM
			// 
			this->label_URM->AutoSize = true;
			this->label_URM->Location = System::Drawing::Point(188, 8);
			this->label_URM->Name = L"label_URM";
			this->label_URM->Size = System::Drawing::Size(157, 28);
			this->label_URM->TabIndex = 5;
			this->label_URM->Text = L"ЕСМ доступно: ";
			// 
			// checkBox_bargainURM
			// 
			this->checkBox_bargainURM->AutoSize = true;
			this->checkBox_bargainURM->Location = System::Drawing::Point(12, 8);
			this->checkBox_bargainURM->Name = L"checkBox_bargainURM";
			this->checkBox_bargainURM->Size = System::Drawing::Size(170, 32);
			this->checkBox_bargainURM->TabIndex = 4;
			this->checkBox_bargainURM->Text = L"Закупить ЕСМ";
			this->checkBox_bargainURM->UseVisualStyleBackColor = true;
			this->checkBox_bargainURM->CheckedChanged += gcnew System::EventHandler(this, &BankForm::checkBox_bargainURM_CheckedChanged);
			// 
			// label_priceURM
			// 
			this->label_priceURM->AutoSize = true;
			this->label_priceURM->Location = System::Drawing::Point(7, 115);
			this->label_priceURM->Name = L"label_priceURM";
			this->label_priceURM->Size = System::Drawing::Size(153, 28);
			this->label_priceURM->TabIndex = 3;
			this->label_priceURM->Text = L"Цена за штуку";
			// 
			// label_AmountURM
			// 
			this->label_AmountURM->AutoSize = true;
			this->label_AmountURM->Location = System::Drawing::Point(7, 43);
			this->label_AmountURM->Name = L"label_AmountURM";
			this->label_AmountURM->Size = System::Drawing::Size(192, 28);
			this->label_AmountURM->TabIndex = 2;
			this->label_AmountURM->Text = L"Кол-во на закупку";
			// 
			// numericUpDown_priceURM
			// 
			this->numericUpDown_priceURM->BackColor = System::Drawing::Color::Teal;
			this->numericUpDown_priceURM->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown_priceURM->ForeColor = System::Drawing::Color::White;
			this->numericUpDown_priceURM->Location = System::Drawing::Point(12, 146);
			this->numericUpDown_priceURM->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown_priceURM->Name = L"numericUpDown_priceURM";
			this->numericUpDown_priceURM->Size = System::Drawing::Size(474, 32);
			this->numericUpDown_priceURM->TabIndex = 1;
			// 
			// numericUpDown_amountURM
			// 
			this->numericUpDown_amountURM->BackColor = System::Drawing::Color::Teal;
			this->numericUpDown_amountURM->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown_amountURM->ForeColor = System::Drawing::Color::White;
			this->numericUpDown_amountURM->Location = System::Drawing::Point(12, 71);
			this->numericUpDown_amountURM->Name = L"numericUpDown_amountURM";
			this->numericUpDown_amountURM->Size = System::Drawing::Size(474, 32);
			this->numericUpDown_amountURM->TabIndex = 0;
			// 
			// BankForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->ClientSize = System::Drawing::Size(1002, 453);
			this->ControlBox = false;
			this->Controls->Add(this->panel_input);
			this->Controls->Add(this->panel_accept);
			this->Controls->Add(this->panel_table);
			this->Controls->Add(this->panel_title);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(1020, 500);
			this->MinimumSize = System::Drawing::Size(1020, 500);
			this->Name = L"BankForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Банк";
			this->Load += gcnew System::EventHandler(this, &BankForm::BankForm_Load);
			this->panel_title->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_bank))->EndInit();
			this->panel_table->ResumeLayout(false);
			this->panel_accept->ResumeLayout(false);
			this->panel_input->ResumeLayout(false);
			this->panel_rightSide->ResumeLayout(false);
			this->panel_rightSide->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_priceUFP))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_amountUFP))->EndInit();
			this->panel_leftSide->ResumeLayout(false);
			this->panel_leftSide->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_priceURM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_amountURM))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void BankForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox_bargainURM_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void checkBox_bargainUFP_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

};
}
