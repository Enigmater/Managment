#pragma once
#include "Player.h"

namespace Managment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreditsForm
	/// </summary>
	public ref class CreditsForm : public System::Windows::Forms::Form
	{
	public:
		Player* player;
		CreditsForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		CreditsForm(Player* player) {
			InitializeComponent();
			this->player = player;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CreditsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_title;
	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::Panel^ panel_money;
	private: System::Windows::Forms::Panel^ panel_debt;
	private: System::Windows::Forms::Panel^ panel_info;
	private: System::Windows::Forms::Panel^ panel_table;
	private: System::Windows::Forms::Panel^ panel_accept;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_accept;
	private: System::Windows::Forms::Label^ label_moneyAmount;
	private: System::Windows::Forms::Label^ label_money;
	private: System::Windows::Forms::Label^ label_tableTitle;
	private: System::Windows::Forms::Label^ label_debtsAmount;
	private: System::Windows::Forms::Label^ label_debts;
	private: System::Windows::Forms::RadioButton^ radioButton_UFdebt;
	private: System::Windows::Forms::RadioButton^ radioButton_SFdebt;
	private: System::Windows::Forms::Button^ button_getDebt;
	private: System::Windows::Forms::Panel^ panel_btns;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ amount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
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
			this->panel_title = (gcnew System::Windows::Forms::Panel());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->panel_money = (gcnew System::Windows::Forms::Panel());
			this->label_moneyAmount = (gcnew System::Windows::Forms::Label());
			this->label_money = (gcnew System::Windows::Forms::Label());
			this->panel_debt = (gcnew System::Windows::Forms::Panel());
			this->label_debtsAmount = (gcnew System::Windows::Forms::Label());
			this->label_debts = (gcnew System::Windows::Forms::Label());
			this->panel_info = (gcnew System::Windows::Forms::Panel());
			this->panel_table = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label_tableTitle = (gcnew System::Windows::Forms::Label());
			this->panel_accept = (gcnew System::Windows::Forms::Panel());
			this->button_accept = (gcnew System::Windows::Forms::Button());
			this->radioButton_UFdebt = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_SFdebt = (gcnew System::Windows::Forms::RadioButton());
			this->button_getDebt = (gcnew System::Windows::Forms::Button());
			this->panel_btns = (gcnew System::Windows::Forms::Panel());
			this->amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel_title->SuspendLayout();
			this->panel_money->SuspendLayout();
			this->panel_debt->SuspendLayout();
			this->panel_info->SuspendLayout();
			this->panel_table->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_accept->SuspendLayout();
			this->panel_btns->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_title
			// 
			this->panel_title->Controls->Add(this->label_title);
			this->panel_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_title->Location = System::Drawing::Point(0, 0);
			this->panel_title->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_title->Name = L"panel_title";
			this->panel_title->Size = System::Drawing::Size(1144, 85);
			this->panel_title->TabIndex = 0;
			// 
			// label_title
			// 
			this->label_title->BackColor = System::Drawing::Color::Teal;
			this->label_title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_title->Font = (gcnew System::Drawing::Font(L"Impact", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_title->Location = System::Drawing::Point(0, 0);
			this->label_title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(1144, 85);
			this->label_title->TabIndex = 0;
			this->label_title->Text = L"Кредиты";
			this->label_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_money
			// 
			this->panel_money->Controls->Add(this->label_moneyAmount);
			this->panel_money->Controls->Add(this->label_money);
			this->panel_money->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_money->Location = System::Drawing::Point(0, 0);
			this->panel_money->Name = L"panel_money";
			this->panel_money->Size = System::Drawing::Size(572, 209);
			this->panel_money->TabIndex = 1;
			// 
			// label_moneyAmount
			// 
			this->label_moneyAmount->BackColor = System::Drawing::Color::SeaGreen;
			this->label_moneyAmount->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_moneyAmount->Location = System::Drawing::Point(0, 98);
			this->label_moneyAmount->Name = L"label_moneyAmount";
			this->label_moneyAmount->Size = System::Drawing::Size(572, 34);
			this->label_moneyAmount->TabIndex = 1;
			this->label_moneyAmount->Text = L"$$$";
			this->label_moneyAmount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_money
			// 
			this->label_money->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_money->Location = System::Drawing::Point(0, 0);
			this->label_money->Name = L"label_money";
			this->label_money->Size = System::Drawing::Size(572, 98);
			this->label_money->TabIndex = 0;
			this->label_money->Text = L"Имеющийся капитал:";
			this->label_money->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_debt
			// 
			this->panel_debt->Controls->Add(this->label_debtsAmount);
			this->panel_debt->Controls->Add(this->label_debts);
			this->panel_debt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_debt->Location = System::Drawing::Point(572, 0);
			this->panel_debt->Name = L"panel_debt";
			this->panel_debt->Size = System::Drawing::Size(572, 209);
			this->panel_debt->TabIndex = 2;
			// 
			// label_debtsAmount
			// 
			this->label_debtsAmount->BackColor = System::Drawing::Color::Red;
			this->label_debtsAmount->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_debtsAmount->Location = System::Drawing::Point(0, 98);
			this->label_debtsAmount->Name = L"label_debtsAmount";
			this->label_debtsAmount->Size = System::Drawing::Size(572, 34);
			this->label_debtsAmount->TabIndex = 3;
			this->label_debtsAmount->Text = L"$$$";
			this->label_debtsAmount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_debts
			// 
			this->label_debts->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_debts->Location = System::Drawing::Point(0, 0);
			this->label_debts->Name = L"label_debts";
			this->label_debts->Size = System::Drawing::Size(572, 98);
			this->label_debts->TabIndex = 2;
			this->label_debts->Text = L"Сумма долга:";
			this->label_debts->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_info
			// 
			this->panel_info->Controls->Add(this->panel_debt);
			this->panel_info->Controls->Add(this->panel_money);
			this->panel_info->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_info->Location = System::Drawing::Point(0, 85);
			this->panel_info->Name = L"panel_info";
			this->panel_info->Size = System::Drawing::Size(1144, 209);
			this->panel_info->TabIndex = 3;
			// 
			// panel_table
			// 
			this->panel_table->Controls->Add(this->dataGridView1);
			this->panel_table->Controls->Add(this->label_tableTitle);
			this->panel_table->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_table->Location = System::Drawing::Point(0, 294);
			this->panel_table->Name = L"panel_table";
			this->panel_table->Size = System::Drawing::Size(1144, 166);
			this->panel_table->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Cyan;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->amount,
					this->date, this->Type
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->dataGridView1->Location = System::Drawing::Point(0, 52);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Cyan;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1144, 114);
			this->dataGridView1->TabIndex = 0;
			// 
			// label_tableTitle
			// 
			this->label_tableTitle->BackColor = System::Drawing::Color::Teal;
			this->label_tableTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_tableTitle->Location = System::Drawing::Point(0, 0);
			this->label_tableTitle->Name = L"label_tableTitle";
			this->label_tableTitle->Size = System::Drawing::Size(1144, 52);
			this->label_tableTitle->TabIndex = 1;
			this->label_tableTitle->Text = L"Ссуды на выплату:";
			this->label_tableTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel_accept
			// 
			this->panel_accept->BackColor = System::Drawing::Color::Teal;
			this->panel_accept->Controls->Add(this->button_accept);
			this->panel_accept->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_accept->Location = System::Drawing::Point(0, 630);
			this->panel_accept->MaximumSize = System::Drawing::Size(0, 90);
			this->panel_accept->Name = L"panel_accept";
			this->panel_accept->Size = System::Drawing::Size(1144, 90);
			this->panel_accept->TabIndex = 5;
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
			this->button_accept->Location = System::Drawing::Point(432, 16);
			this->button_accept->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_accept->Name = L"button_accept";
			this->button_accept->Size = System::Drawing::Size(275, 60);
			this->button_accept->TabIndex = 3;
			this->button_accept->Text = L"Подтвердить";
			this->button_accept->UseVisualStyleBackColor = false;
			this->button_accept->Click += gcnew System::EventHandler(this, &CreditsForm::button_accept_Click);
			// 
			// radioButton_UFdebt
			// 
			this->radioButton_UFdebt->AutoSize = true;
			this->radioButton_UFdebt->Location = System::Drawing::Point(18, 52);
			this->radioButton_UFdebt->Name = L"radioButton_UFdebt";
			this->radioButton_UFdebt->Size = System::Drawing::Size(530, 32);
			this->radioButton_UFdebt->TabIndex = 9;
			this->radioButton_UFdebt->TabStop = true;
			this->radioButton_UFdebt->Text = L"Взять кредит под автоматизированную фабрику";
			this->radioButton_UFdebt->UseVisualStyleBackColor = true;
			this->radioButton_UFdebt->CheckedChanged += gcnew System::EventHandler(this, &CreditsForm::radioButton_UFdebt_CheckedChanged);
			// 
			// radioButton_SFdebt
			// 
			this->radioButton_SFdebt->AutoSize = true;
			this->radioButton_SFdebt->Location = System::Drawing::Point(18, 14);
			this->radioButton_SFdebt->Name = L"radioButton_SFdebt";
			this->radioButton_SFdebt->Size = System::Drawing::Size(414, 32);
			this->radioButton_SFdebt->TabIndex = 8;
			this->radioButton_SFdebt->TabStop = true;
			this->radioButton_SFdebt->Text = L"Взять кредить под обычную фабрику";
			this->radioButton_SFdebt->UseVisualStyleBackColor = true;
			this->radioButton_SFdebt->CheckedChanged += gcnew System::EventHandler(this, &CreditsForm::radioButton_SFdebt_CheckedChanged);
			// 
			// button_getDebt
			// 
			this->button_getDebt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(133)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(176)));
			this->button_getDebt->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_getDebt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_getDebt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_getDebt->ForeColor = System::Drawing::Color::White;
			this->button_getDebt->Location = System::Drawing::Point(18, 92);
			this->button_getDebt->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->button_getDebt->Name = L"button_getDebt";
			this->button_getDebt->Size = System::Drawing::Size(275, 60);
			this->button_getDebt->TabIndex = 7;
			this->button_getDebt->Text = L"Взять кредит";
			this->button_getDebt->UseVisualStyleBackColor = false;
			this->button_getDebt->Click += gcnew System::EventHandler(this, &CreditsForm::button_getDebt_Click);
			// 
			// panel_btns
			// 
			this->panel_btns->Controls->Add(this->radioButton_SFdebt);
			this->panel_btns->Controls->Add(this->radioButton_UFdebt);
			this->panel_btns->Controls->Add(this->button_getDebt);
			this->panel_btns->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_btns->Location = System::Drawing::Point(0, 460);
			this->panel_btns->Name = L"panel_btns";
			this->panel_btns->Size = System::Drawing::Size(1144, 170);
			this->panel_btns->TabIndex = 10;
			// 
			// amount
			// 
			this->amount->FillWeight = 80.21391F;
			this->amount->HeaderText = L"Сумма";
			this->amount->MinimumWidth = 6;
			this->amount->Name = L"amount";
			this->amount->ReadOnly = true;
			// 
			// date
			// 
			this->date->FillWeight = 85.06044F;
			this->date->HeaderText = L"Выплата через";
			this->date->MinimumWidth = 6;
			this->date->Name = L"date";
			this->date->ReadOnly = true;
			// 
			// Type
			// 
			this->Type->FillWeight = 134.7257F;
			this->Type->HeaderText = L"Тип фабрики";
			this->Type->MinimumWidth = 6;
			this->Type->Name = L"Type";
			this->Type->ReadOnly = true;
			// 
			// CreditsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->ClientSize = System::Drawing::Size(1144, 720);
			this->ControlBox = false;
			this->Controls->Add(this->panel_btns);
			this->Controls->Add(this->panel_table);
			this->Controls->Add(this->panel_accept);
			this->Controls->Add(this->panel_info);
			this->Controls->Add(this->panel_title);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"CreditsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreditsForm";
			this->Load += gcnew System::EventHandler(this, &CreditsForm::CreditsForm_Load);
			this->panel_title->ResumeLayout(false);
			this->panel_money->ResumeLayout(false);
			this->panel_debt->ResumeLayout(false);
			this->panel_info->ResumeLayout(false);
			this->panel_table->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_accept->ResumeLayout(false);
			this->panel_btns->ResumeLayout(false);
			this->panel_btns->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CreditsForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_accept_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton_SFdebt_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton_UFdebt_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_getDebt_Click(System::Object^ sender, System::EventArgs^ e);
	private: void UpdInfo();
};
}
