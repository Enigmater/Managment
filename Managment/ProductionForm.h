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
	/// Сводка для ProductionForm
	/// </summary>
	public ref class ProductionForm : public System::Windows::Forms::Form
	{
	public:
		Player* player;
		int SFcost;
		int UFcost;
		ProductionForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->SFcost = 5000;
			this->UFcost = 10000;
		}

		ProductionForm(Player* player) {
			InitializeComponent();
			this->player = player;
			this->SFcost = 5000;
			this->UFcost = 10000;
		};

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ProductionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_title;
	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::Panel^ panel_SF;
	private: System::Windows::Forms::Panel^ panel_rightSF;
	private: System::Windows::Forms::Panel^ panel_leftSF;
	private: System::Windows::Forms::Panel^ panel_UF;
	private: System::Windows::Forms::Panel^ panel_rightAF;
	private: System::Windows::Forms::Panel^ panel_leftAF;
	private: System::Windows::Forms::Panel^ panel_accept;
	private: System::Windows::Forms::Button^ button_accept;
	private: System::Windows::Forms::Panel^ panel_bottomSF;
	private: System::Windows::Forms::Panel^ panel_topSF;
	private: System::Windows::Forms::Label^ label_URM1;
	private: System::Windows::Forms::Label^ label_SF;
	private: System::Windows::Forms::Panel^ panel_bottomAF;
	private: System::Windows::Forms::Panel^ panel_topUF;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_URM1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_URM2;
	private: System::Windows::Forms::Label^ label_URM2;
	private: System::Windows::Forms::Label^ label_UF;
	private: System::Windows::Forms::Panel^ panel_btw;
	private: System::Windows::Forms::Panel^ panel_factories;
	private: System::Windows::Forms::Label^ label_costSF;
	private: System::Windows::Forms::Label^ label_costUF;
	private: System::Windows::Forms::Label^ label_info;
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
			this->panel_title = (gcnew System::Windows::Forms::Panel());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->panel_SF = (gcnew System::Windows::Forms::Panel());
			this->panel_rightSF = (gcnew System::Windows::Forms::Panel());
			this->panel_bottomSF = (gcnew System::Windows::Forms::Panel());
			this->panel_topSF = (gcnew System::Windows::Forms::Panel());
			this->panel_leftSF = (gcnew System::Windows::Forms::Panel());
			this->label_costSF = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_URM1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_URM1 = (gcnew System::Windows::Forms::Label());
			this->label_SF = (gcnew System::Windows::Forms::Label());
			this->panel_UF = (gcnew System::Windows::Forms::Panel());
			this->panel_rightAF = (gcnew System::Windows::Forms::Panel());
			this->panel_bottomAF = (gcnew System::Windows::Forms::Panel());
			this->panel_topUF = (gcnew System::Windows::Forms::Panel());
			this->panel_leftAF = (gcnew System::Windows::Forms::Panel());
			this->label_costUF = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_URM2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_URM2 = (gcnew System::Windows::Forms::Label());
			this->label_UF = (gcnew System::Windows::Forms::Label());
			this->panel_accept = (gcnew System::Windows::Forms::Panel());
			this->button_accept = (gcnew System::Windows::Forms::Button());
			this->panel_btw = (gcnew System::Windows::Forms::Panel());
			this->label_info = (gcnew System::Windows::Forms::Label());
			this->panel_factories = (gcnew System::Windows::Forms::Panel());
			this->panel_title->SuspendLayout();
			this->panel_SF->SuspendLayout();
			this->panel_rightSF->SuspendLayout();
			this->panel_leftSF->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_URM1))->BeginInit();
			this->panel_UF->SuspendLayout();
			this->panel_rightAF->SuspendLayout();
			this->panel_leftAF->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_URM2))->BeginInit();
			this->panel_accept->SuspendLayout();
			this->panel_btw->SuspendLayout();
			this->panel_factories->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_title
			// 
			this->panel_title->Controls->Add(this->label_title);
			this->panel_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_title->Location = System::Drawing::Point(0, 0);
			this->panel_title->Name = L"panel_title";
			this->panel_title->Size = System::Drawing::Size(1003, 86);
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
			this->label_title->Size = System::Drawing::Size(1003, 86);
			this->label_title->TabIndex = 0;
			this->label_title->Text = L"Заводы";
			this->label_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_SF
			// 
			this->panel_SF->Controls->Add(this->panel_rightSF);
			this->panel_SF->Controls->Add(this->panel_leftSF);
			this->panel_SF->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_SF->Location = System::Drawing::Point(0, 0);
			this->panel_SF->MaximumSize = System::Drawing::Size(0, 200);
			this->panel_SF->MinimumSize = System::Drawing::Size(0, 200);
			this->panel_SF->Name = L"panel_SF";
			this->panel_SF->Size = System::Drawing::Size(1003, 200);
			this->panel_SF->TabIndex = 1;
			// 
			// panel_rightSF
			// 
			this->panel_rightSF->Controls->Add(this->panel_bottomSF);
			this->panel_rightSF->Controls->Add(this->panel_topSF);
			this->panel_rightSF->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_rightSF->Location = System::Drawing::Point(244, 0);
			this->panel_rightSF->Name = L"panel_rightSF";
			this->panel_rightSF->Size = System::Drawing::Size(759, 200);
			this->panel_rightSF->TabIndex = 1;
			// 
			// panel_bottomSF
			// 
			this->panel_bottomSF->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_bottomSF->Location = System::Drawing::Point(0, 100);
			this->panel_bottomSF->Name = L"panel_bottomSF";
			this->panel_bottomSF->Size = System::Drawing::Size(759, 100);
			this->panel_bottomSF->TabIndex = 1;
			// 
			// panel_topSF
			// 
			this->panel_topSF->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_topSF->Location = System::Drawing::Point(0, 0);
			this->panel_topSF->Name = L"panel_topSF";
			this->panel_topSF->Size = System::Drawing::Size(759, 100);
			this->panel_topSF->TabIndex = 0;
			// 
			// panel_leftSF
			// 
			this->panel_leftSF->Controls->Add(this->label_costSF);
			this->panel_leftSF->Controls->Add(this->numericUpDown_URM1);
			this->panel_leftSF->Controls->Add(this->label_URM1);
			this->panel_leftSF->Controls->Add(this->label_SF);
			this->panel_leftSF->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_leftSF->Location = System::Drawing::Point(0, 0);
			this->panel_leftSF->Name = L"panel_leftSF";
			this->panel_leftSF->Size = System::Drawing::Size(244, 200);
			this->panel_leftSF->TabIndex = 0;
			// 
			// label_costSF
			// 
			this->label_costSF->AutoSize = true;
			this->label_costSF->Location = System::Drawing::Point(3, 172);
			this->label_costSF->Name = L"label_costSF";
			this->label_costSF->Size = System::Drawing::Size(100, 28);
			this->label_costSF->TabIndex = 3;
			this->label_costSF->Text = L"Итого: 0$";
			// 
			// numericUpDown_URM1
			// 
			this->numericUpDown_URM1->BackColor = System::Drawing::Color::Teal;
			this->numericUpDown_URM1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown_URM1->ForeColor = System::Drawing::Color::White;
			this->numericUpDown_URM1->Location = System::Drawing::Point(5, 133);
			this->numericUpDown_URM1->Name = L"numericUpDown_URM1";
			this->numericUpDown_URM1->ReadOnly = true;
			this->numericUpDown_URM1->Size = System::Drawing::Size(226, 32);
			this->numericUpDown_URM1->TabIndex = 2;
			this->numericUpDown_URM1->ValueChanged += gcnew System::EventHandler(this, &ProductionForm::numericUpDown_URM1_ValueChanged);
			// 
			// label_URM1
			// 
			this->label_URM1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_URM1->Location = System::Drawing::Point(0, 60);
			this->label_URM1->Name = L"label_URM1";
			this->label_URM1->Size = System::Drawing::Size(244, 70);
			this->label_URM1->TabIndex = 1;
			this->label_URM1->Text = L"Доступно ЕСМ для переработки:\r\n";
			// 
			// label_SF
			// 
			this->label_SF->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_SF->Location = System::Drawing::Point(0, 0);
			this->label_SF->Name = L"label_SF";
			this->label_SF->Size = System::Drawing::Size(244, 60);
			this->label_SF->TabIndex = 0;
			this->label_SF->Text = L"Обычные\r\nфабрики";
			this->label_SF->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_UF
			// 
			this->panel_UF->Controls->Add(this->panel_rightAF);
			this->panel_UF->Controls->Add(this->panel_leftAF);
			this->panel_UF->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_UF->Location = System::Drawing::Point(0, 269);
			this->panel_UF->MaximumSize = System::Drawing::Size(0, 200);
			this->panel_UF->MinimumSize = System::Drawing::Size(0, 200);
			this->panel_UF->Name = L"panel_UF";
			this->panel_UF->Size = System::Drawing::Size(1003, 200);
			this->panel_UF->TabIndex = 2;
			// 
			// panel_rightAF
			// 
			this->panel_rightAF->Controls->Add(this->panel_bottomAF);
			this->panel_rightAF->Controls->Add(this->panel_topUF);
			this->panel_rightAF->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_rightAF->Location = System::Drawing::Point(244, 0);
			this->panel_rightAF->Name = L"panel_rightAF";
			this->panel_rightAF->Size = System::Drawing::Size(759, 200);
			this->panel_rightAF->TabIndex = 1;
			// 
			// panel_bottomAF
			// 
			this->panel_bottomAF->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_bottomAF->Location = System::Drawing::Point(0, 100);
			this->panel_bottomAF->Name = L"panel_bottomAF";
			this->panel_bottomAF->Size = System::Drawing::Size(759, 100);
			this->panel_bottomAF->TabIndex = 1;
			// 
			// panel_topUF
			// 
			this->panel_topUF->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_topUF->Location = System::Drawing::Point(0, 0);
			this->panel_topUF->Name = L"panel_topUF";
			this->panel_topUF->Size = System::Drawing::Size(759, 100);
			this->panel_topUF->TabIndex = 0;
			// 
			// panel_leftAF
			// 
			this->panel_leftAF->Controls->Add(this->label_costUF);
			this->panel_leftAF->Controls->Add(this->numericUpDown_URM2);
			this->panel_leftAF->Controls->Add(this->label_URM2);
			this->panel_leftAF->Controls->Add(this->label_UF);
			this->panel_leftAF->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_leftAF->Location = System::Drawing::Point(0, 0);
			this->panel_leftAF->Name = L"panel_leftAF";
			this->panel_leftAF->Size = System::Drawing::Size(244, 200);
			this->panel_leftAF->TabIndex = 0;
			// 
			// label_costUF
			// 
			this->label_costUF->AutoSize = true;
			this->label_costUF->Location = System::Drawing::Point(3, 176);
			this->label_costUF->Name = L"label_costUF";
			this->label_costUF->Size = System::Drawing::Size(100, 28);
			this->label_costUF->TabIndex = 6;
			this->label_costUF->Text = L"Итого: 0$";
			// 
			// numericUpDown_URM2
			// 
			this->numericUpDown_URM2->BackColor = System::Drawing::Color::Teal;
			this->numericUpDown_URM2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown_URM2->ForeColor = System::Drawing::Color::White;
			this->numericUpDown_URM2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown_URM2->Location = System::Drawing::Point(5, 141);
			this->numericUpDown_URM2->Name = L"numericUpDown_URM2";
			this->numericUpDown_URM2->ReadOnly = true;
			this->numericUpDown_URM2->Size = System::Drawing::Size(226, 32);
			this->numericUpDown_URM2->TabIndex = 5;
			this->numericUpDown_URM2->ValueChanged += gcnew System::EventHandler(this, &ProductionForm::numericUpDown_URM2_ValueChanged);
			// 
			// label_URM2
			// 
			this->label_URM2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_URM2->Location = System::Drawing::Point(0, 60);
			this->label_URM2->Name = L"label_URM2";
			this->label_URM2->Size = System::Drawing::Size(244, 70);
			this->label_URM2->TabIndex = 4;
			this->label_URM2->Text = L"Доступно ЕСМ для переработки:\r\n";
			// 
			// label_UF
			// 
			this->label_UF->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_UF->Location = System::Drawing::Point(0, 0);
			this->label_UF->Name = L"label_UF";
			this->label_UF->Size = System::Drawing::Size(244, 60);
			this->label_UF->TabIndex = 3;
			this->label_UF->Text = L"Автоматизированные фабрики";
			this->label_UF->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_accept
			// 
			this->panel_accept->BackColor = System::Drawing::Color::Teal;
			this->panel_accept->Controls->Add(this->button_accept);
			this->panel_accept->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_accept->Location = System::Drawing::Point(0, 555);
			this->panel_accept->Name = L"panel_accept";
			this->panel_accept->Size = System::Drawing::Size(1003, 90);
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
			this->button_accept->Location = System::Drawing::Point(375, 15);
			this->button_accept->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_accept->Name = L"button_accept";
			this->button_accept->Size = System::Drawing::Size(250, 60);
			this->button_accept->TabIndex = 8;
			this->button_accept->Text = L"Подтвердить";
			this->button_accept->UseVisualStyleBackColor = false;
			this->button_accept->Click += gcnew System::EventHandler(this, &ProductionForm::button_accept_Click);
			// 
			// panel_btw
			// 
			this->panel_btw->BackColor = System::Drawing::Color::Teal;
			this->panel_btw->Controls->Add(this->label_info);
			this->panel_btw->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_btw->Location = System::Drawing::Point(0, 200);
			this->panel_btw->Name = L"panel_btw";
			this->panel_btw->Size = System::Drawing::Size(1003, 69);
			this->panel_btw->TabIndex = 4;
			// 
			// label_info
			// 
			this->label_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_info->Location = System::Drawing::Point(0, 0);
			this->label_info->Name = L"label_info";
			this->label_info->Size = System::Drawing::Size(1003, 69);
			this->label_info->TabIndex = 4;
			this->label_info->Text = L"Кол-во ЕСМ: ";
			this->label_info->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_factories
			// 
			this->panel_factories->Controls->Add(this->panel_UF);
			this->panel_factories->Controls->Add(this->panel_btw);
			this->panel_factories->Controls->Add(this->panel_SF);
			this->panel_factories->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_factories->Location = System::Drawing::Point(0, 86);
			this->panel_factories->MinimumSize = System::Drawing::Size(0, 560);
			this->panel_factories->Name = L"panel_factories";
			this->panel_factories->Size = System::Drawing::Size(1003, 560);
			this->panel_factories->TabIndex = 5;
			// 
			// ProductionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->ClientSize = System::Drawing::Size(1003, 645);
			this->ControlBox = false;
			this->Controls->Add(this->panel_accept);
			this->Controls->Add(this->panel_factories);
			this->Controls->Add(this->panel_title);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(1021, 692);
			this->MinimumSize = System::Drawing::Size(1021, 692);
			this->Name = L"ProductionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Производство";
			this->Load += gcnew System::EventHandler(this, &ProductionForm::ProductionForm_Load);
			this->panel_title->ResumeLayout(false);
			this->panel_SF->ResumeLayout(false);
			this->panel_rightSF->ResumeLayout(false);
			this->panel_leftSF->ResumeLayout(false);
			this->panel_leftSF->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_URM1))->EndInit();
			this->panel_UF->ResumeLayout(false);
			this->panel_rightAF->ResumeLayout(false);
			this->panel_leftAF->ResumeLayout(false);
			this->panel_leftAF->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_URM2))->EndInit();
			this->panel_accept->ResumeLayout(false);
			this->panel_btw->ResumeLayout(false);
			this->panel_factories->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_accept_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ProductionForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown_URM1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown_URM2_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ButtonOnClick(System::Object^ sender, System::EventArgs^ e);
	private: void CreateButtons();
};
}
