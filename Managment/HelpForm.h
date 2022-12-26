#pragma once

namespace Managment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_backToMenu;
	private: System::Windows::Forms::LinkLabel^ linkLabel_1;
	private: System::Windows::Forms::Panel^ panel_title;


	private: System::Windows::Forms::Label^ label_title;
	private: System::Windows::Forms::LinkLabel^ linkLabel_2;
	private: System::Windows::Forms::LinkLabel^ linkLabel_3;
	private: System::Windows::Forms::LinkLabel^ linkLabel_4;
	private: System::Windows::Forms::LinkLabel^ linkLabel_5;

	protected:

	protected:

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
			this->button_backToMenu = (gcnew System::Windows::Forms::Button());
			this->linkLabel_1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel_title = (gcnew System::Windows::Forms::Panel());
			this->label_title = (gcnew System::Windows::Forms::Label());
			this->linkLabel_2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel_3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel_4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel_5 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel_title->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_backToMenu
			// 
			this->button_backToMenu->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button_backToMenu->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->button_backToMenu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button_backToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_backToMenu->ForeColor = System::Drawing::Color::White;
			this->button_backToMenu->Location = System::Drawing::Point(0, 413);
			this->button_backToMenu->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_backToMenu->Name = L"button_backToMenu";
			this->button_backToMenu->Size = System::Drawing::Size(751, 40);
			this->button_backToMenu->TabIndex = 0;
			this->button_backToMenu->Text = L"Вернуться";
			this->button_backToMenu->UseVisualStyleBackColor = true;
			this->button_backToMenu->Click += gcnew System::EventHandler(this, &HelpForm::button_backToMenu_Click);
			// 
			// linkLabel_1
			// 
			this->linkLabel_1->ActiveLinkColor = System::Drawing::Color::Teal;
			this->linkLabel_1->AutoSize = true;
			this->linkLabel_1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel_1->LinkColor = System::Drawing::Color::White;
			this->linkLabel_1->Location = System::Drawing::Point(12, 77);
			this->linkLabel_1->Name = L"linkLabel_1";
			this->linkLabel_1->Size = System::Drawing::Size(262, 28);
			this->linkLabel_1->TabIndex = 1;
			this->linkLabel_1->TabStop = true;
			this->linkLabel_1->Text = L"1. Постоянные издержки";
			this->linkLabel_1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HelpForm::linkLabel_1_LinkClicked);
			// 
			// panel_title
			// 
			this->panel_title->Controls->Add(this->label_title);
			this->panel_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_title->Location = System::Drawing::Point(0, 0);
			this->panel_title->Name = L"panel_title";
			this->panel_title->Size = System::Drawing::Size(751, 59);
			this->panel_title->TabIndex = 2;
			// 
			// label_title
			// 
			this->label_title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_title->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_title->ForeColor = System::Drawing::Color::White;
			this->label_title->Location = System::Drawing::Point(0, 0);
			this->label_title->Name = L"label_title";
			this->label_title->Size = System::Drawing::Size(751, 59);
			this->label_title->TabIndex = 0;
			this->label_title->Text = L"Справка";
			this->label_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabel_2
			// 
			this->linkLabel_2->ActiveLinkColor = System::Drawing::Color::Teal;
			this->linkLabel_2->AutoSize = true;
			this->linkLabel_2->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel_2->LinkColor = System::Drawing::Color::White;
			this->linkLabel_2->Location = System::Drawing::Point(12, 105);
			this->linkLabel_2->Name = L"linkLabel_2";
			this->linkLabel_2->Size = System::Drawing::Size(81, 28);
			this->linkLabel_2->TabIndex = 3;
			this->linkLabel_2->TabStop = true;
			this->linkLabel_2->Text = L"2. Банк";
			this->linkLabel_2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HelpForm::linkLabel_2_LinkClicked);
			// 
			// linkLabel_3
			// 
			this->linkLabel_3->ActiveLinkColor = System::Drawing::Color::Teal;
			this->linkLabel_3->AutoSize = true;
			this->linkLabel_3->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel_3->LinkColor = System::Drawing::Color::White;
			this->linkLabel_3->Location = System::Drawing::Point(12, 133);
			this->linkLabel_3->Name = L"linkLabel_3";
			this->linkLabel_3->Size = System::Drawing::Size(177, 28);
			this->linkLabel_3->TabIndex = 4;
			this->linkLabel_3->TabStop = true;
			this->linkLabel_3->Text = L"3. Производство";
			this->linkLabel_3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HelpForm::linkLabel_3_LinkClicked);
			// 
			// linkLabel_4
			// 
			this->linkLabel_4->ActiveLinkColor = System::Drawing::Color::Teal;
			this->linkLabel_4->AutoSize = true;
			this->linkLabel_4->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel_4->LinkColor = System::Drawing::Color::White;
			this->linkLabel_4->Location = System::Drawing::Point(12, 161);
			this->linkLabel_4->Name = L"linkLabel_4";
			this->linkLabel_4->Size = System::Drawing::Size(122, 28);
			this->linkLabel_4->TabIndex = 5;
			this->linkLabel_4->TabStop = true;
			this->linkLabel_4->Text = L"4. Кредиты";
			this->linkLabel_4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HelpForm::linkLabel_4_LinkClicked);
			// 
			// linkLabel_5
			// 
			this->linkLabel_5->ActiveLinkColor = System::Drawing::Color::Teal;
			this->linkLabel_5->AutoSize = true;
			this->linkLabel_5->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel_5->LinkColor = System::Drawing::Color::White;
			this->linkLabel_5->Location = System::Drawing::Point(12, 189);
			this->linkLabel_5->Name = L"linkLabel_5";
			this->linkLabel_5->Size = System::Drawing::Size(184, 28);
			this->linkLabel_5->TabIndex = 6;
			this->linkLabel_5->TabStop = true;
			this->linkLabel_5->Text = L"5. Строительство";
			this->linkLabel_5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HelpForm::linkLabel_5_LinkClicked);
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)));
			this->ClientSize = System::Drawing::Size(751, 453);
			this->ControlBox = false;
			this->Controls->Add(this->linkLabel_5);
			this->Controls->Add(this->linkLabel_4);
			this->Controls->Add(this->linkLabel_3);
			this->Controls->Add(this->linkLabel_2);
			this->Controls->Add(this->linkLabel_1);
			this->Controls->Add(this->button_backToMenu);
			this->Controls->Add(this->panel_title);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(769, 500);
			this->MinimumSize = System::Drawing::Size(769, 500);
			this->Name = L"HelpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справка";
			this->panel_title->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_backToMenu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void linkLabel_1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void linkLabel_2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void linkLabel_3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void linkLabel_4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void linkLabel_5_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
};
}
