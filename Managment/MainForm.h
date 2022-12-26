#pragma once

namespace Managment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel_leftSIde;
	private: System::Windows::Forms::Panel^ panel_menu;
	private: System::Windows::Forms::Panel^ panel_rightSide;
	private: System::Windows::Forms::Panel^ panel_logo;

	private: System::Windows::Forms::Button^ button_startGame;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_settings;
	private: System::Windows::Forms::Button^ button_help;

	private: System::Windows::Forms::Label^ label_logo;

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
			this->panel_leftSIde = (gcnew System::Windows::Forms::Panel());
			this->panel_menu = (gcnew System::Windows::Forms::Panel());
			this->button_help = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_settings = (gcnew System::Windows::Forms::Button());
			this->button_startGame = (gcnew System::Windows::Forms::Button());
			this->panel_logo = (gcnew System::Windows::Forms::Panel());
			this->label_logo = (gcnew System::Windows::Forms::Label());
			this->panel_rightSide = (gcnew System::Windows::Forms::Panel());
			this->panel_menu->SuspendLayout();
			this->panel_logo->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_leftSIde
			// 
			this->panel_leftSIde->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_leftSIde->Location = System::Drawing::Point(0, 0);
			this->panel_leftSIde->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel_leftSIde->MinimumSize = System::Drawing::Size(250, 0);
			this->panel_leftSIde->Name = L"panel_leftSIde";
			this->panel_leftSIde->Size = System::Drawing::Size(250, 453);
			this->panel_leftSIde->TabIndex = 0;
			// 
			// panel_menu
			// 
			this->panel_menu->Controls->Add(this->button_help);
			this->panel_menu->Controls->Add(this->button_exit);
			this->panel_menu->Controls->Add(this->button_settings);
			this->panel_menu->Controls->Add(this->button_startGame);
			this->panel_menu->Controls->Add(this->panel_logo);
			this->panel_menu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_menu->Location = System::Drawing::Point(250, 0);
			this->panel_menu->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel_menu->MaximumSize = System::Drawing::Size(196, 0);
			this->panel_menu->MinimumSize = System::Drawing::Size(250, 0);
			this->panel_menu->Name = L"panel_menu";
			this->panel_menu->Size = System::Drawing::Size(250, 453);
			this->panel_menu->TabIndex = 1;
			// 
			// button_help
			// 
			this->button_help->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->button_help->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button_help->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_help->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button_help->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_help->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_help->ForeColor = System::Drawing::Color::White;
			this->button_help->Location = System::Drawing::Point(0, 333);
			this->button_help->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(250, 60);
			this->button_help->TabIndex = 4;
			this->button_help->Text = L"Справка";
			this->button_help->UseVisualStyleBackColor = false;
			this->button_help->Click += gcnew System::EventHandler(this, &MyForm::button_help_Click);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Red;
			this->button_exit->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button_exit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button_exit->FlatAppearance->BorderSize = 0;
			this->button_exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button_exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)), static_cast<System::Int32>(static_cast<System::Byte>(84)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(0, 393);
			this->button_exit->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(250, 60);
			this->button_exit->TabIndex = 3;
			this->button_exit->Text = L"Выйти из игры";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// button_settings
			// 
			this->button_settings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->button_settings->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_settings->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_settings->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button_settings->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_settings->ForeColor = System::Drawing::Color::White;
			this->button_settings->Location = System::Drawing::Point(0, 120);
			this->button_settings->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_settings->Name = L"button_settings";
			this->button_settings->Size = System::Drawing::Size(250, 50);
			this->button_settings->TabIndex = 2;
			this->button_settings->Text = L"Настройки";
			this->button_settings->UseVisualStyleBackColor = false;
			this->button_settings->Click += gcnew System::EventHandler(this, &MyForm::button_settings_Click);
			// 
			// button_startGame
			// 
			this->button_startGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->button_startGame->Dock = System::Windows::Forms::DockStyle::Top;
			this->button_startGame->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_startGame->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button_startGame->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_startGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_startGame->ForeColor = System::Drawing::Color::White;
			this->button_startGame->Location = System::Drawing::Point(0, 70);
			this->button_startGame->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button_startGame->Name = L"button_startGame";
			this->button_startGame->Size = System::Drawing::Size(250, 50);
			this->button_startGame->TabIndex = 1;
			this->button_startGame->Text = L"Начать игру";
			this->button_startGame->UseVisualStyleBackColor = false;
			this->button_startGame->Click += gcnew System::EventHandler(this, &MyForm::button_startGame_Click);
			// 
			// panel_logo
			// 
			this->panel_logo->Controls->Add(this->label_logo);
			this->panel_logo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_logo->Location = System::Drawing::Point(0, 0);
			this->panel_logo->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel_logo->Name = L"panel_logo";
			this->panel_logo->Size = System::Drawing::Size(250, 70);
			this->panel_logo->TabIndex = 0;
			// 
			// label_logo
			// 
			this->label_logo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_logo->Font = (gcnew System::Drawing::Font(L"Impact", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_logo->ForeColor = System::Drawing::Color::White;
			this->label_logo->Location = System::Drawing::Point(0, 0);
			this->label_logo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_logo->Name = L"label_logo";
			this->label_logo->Size = System::Drawing::Size(250, 70);
			this->label_logo->TabIndex = 0;
			this->label_logo->Text = L"Мэнэджмент";
			this->label_logo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_rightSide
			// 
			this->panel_rightSide->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel_rightSide->Location = System::Drawing::Point(501, 0);
			this->panel_rightSide->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel_rightSide->MinimumSize = System::Drawing::Size(250, 0);
			this->panel_rightSide->Name = L"panel_rightSide";
			this->panel_rightSide->Size = System::Drawing::Size(250, 453);
			this->panel_rightSide->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(197)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->ClientSize = System::Drawing::Size(751, 453);
			this->ControlBox = false;
			this->Controls->Add(this->panel_rightSide);
			this->Controls->Add(this->panel_menu);
			this->Controls->Add(this->panel_leftSIde);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->MaximumSize = System::Drawing::Size(769, 500);
			this->MinimumSize = System::Drawing::Size(769, 500);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Менеджмент";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel_menu->ResumeLayout(false);
			this->panel_logo->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: void OpenForm(System::Windows::Forms::Form^ form);
	private: System::Void button_settings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_startGame_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}
