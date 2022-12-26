#include "ProductionForm.h"

System::Void Managment::ProductionForm::button_accept_Click(System::Object^ sender, System::EventArgs^ e)
{
	player->FactoriesReq.Clear();
	player->FactoriesReq.setURM_SF(Convert::ToInt32(numericUpDown_URM1->Value));
	player->FactoriesReq.setURM_UF(Convert::ToInt32(numericUpDown_URM2->Value));
	player->FactoriesReq.setPriceURM_SF(Convert::ToInt32(numericUpDown_URM1->Value * 2000));
	player->FactoriesReq.setPriceURM_UF(Convert::ToInt32(numericUpDown_URM2->Value * 3000));
	this->Close();
}

System::Void Managment::ProductionForm::ProductionForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	label_URM1->Text = "Доступно для переработки " + player->getCountSF() + " ЕСМ";
	label_URM2->Text = "Доступно для переработки " + player->getCountUF() * 2 + " ЕСМ";
	label_info->Text = "Кол-во ЕСМ: " + player->getURM() + "\nДенег: " + player->getMoney();
	numericUpDown_URM1->Maximum = 6;
	numericUpDown_URM2->Maximum = 6;
	if (player->getCountUF() == 0) {
		numericUpDown_URM2->Enabled = false;
	}
	label_costSF->Text = L"Итого: 0$";
	CreateButtons();
}

System::Void Managment::ProductionForm::numericUpDown_URM1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (player->getCountSF() < (player->getURM() - numericUpDown_URM2->Value)) {
		numericUpDown_URM1->Maximum = player->getCountSF();
	}
	else {
		numericUpDown_URM1->Maximum = (player->getURM() - numericUpDown_URM2->Value < 6) ? player->getURM() - numericUpDown_URM2->Value : 6;
	}

	if (player->getURM() - numericUpDown_URM1->Value < 12) {
		if ((player->getURM() - numericUpDown_URM1->Value) % 2 == 0) {
			numericUpDown_URM2->Maximum = player->getURM() - numericUpDown_URM1->Value;
		}
		else {
			numericUpDown_URM2->Maximum = Convert::ToInt32(player->getURM() - numericUpDown_URM1->Value) - 1;
		}
	}
	else {
		numericUpDown_URM2->Maximum = 12;
	}

	if (numericUpDown_URM1->Value * 2000 > player->getMoney()) {
		numericUpDown_URM1->Maximum = (int) (player->getMoney() / 2000);
	};

	label_costSF->Text = L"Итого: " + numericUpDown_URM1->Value * 2000 + "$";
 }

System::Void Managment::ProductionForm::numericUpDown_URM2_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{

	if (player->getCountUF() < (player->getURM() - numericUpDown_URM1->Value) / 2) {
		numericUpDown_URM2->Maximum = player->getCountUF();	
	}
	else {
		if (player->getURM() - numericUpDown_URM1->Value < 12) {
			if ((player->getURM() - numericUpDown_URM1->Value) % 2 == 0) {
				numericUpDown_URM2->Maximum = player->getURM() - numericUpDown_URM1->Value;
			}
			else {
				numericUpDown_URM2->Maximum = Convert::ToInt32(player->getURM() - numericUpDown_URM1->Value) - 1;
			}
		}
		else {
			numericUpDown_URM2->Maximum = 12;
		}
	}
	numericUpDown_URM1->Maximum = (player->getURM() - numericUpDown_URM2->Value < 6) ? player->getURM() - numericUpDown_URM2->Value : 6;

	if (numericUpDown_URM2->Value * 1500 > player->getMoney())
	{
		if ((player->getMoney() / 3000) % 2 == 0)
		{
			numericUpDown_URM2->Maximum = (int)(player->getMoney() / 3000);
		}
		else
		{
			numericUpDown_URM2->Maximum = (int)(player->getMoney() / 3000) - 1;
		}
	};

	label_costUF->Text = L"Итого: " + numericUpDown_URM2->Value / 2 * 3000 + "$";
}

System::Void Managment::ProductionForm::ButtonOnClick(System::Object^ sender, System::EventArgs^ e)
{
	Button^ btn = (Button^)sender;
	for (size_t i = 1; i < 7; i++)
	{
		if (player->Constr.GetSF(i - 1) == 0 && btn->Name == "btn_SF" + i) {
			if (player->getMoney() < 5000) {
				MessageBox::Show("Недостаточно денег!", "Внимание!");
				return System::Void();
			}
			System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены, что хотите построить фабрику?", "Внимание!", MessageBoxButtons::YesNo);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				player->Constr.PushSF(i - 1, 5);
				player->decreaseMoney(this->SFcost);			
			}
		}

		if (player->Constr.GetUF(i - 1) == 0 && btn->Name == "btn_UF" + i) {
			if (player->getMoney() < 10000) {
				MessageBox::Show("Недостаточно денег!", "Внимание!");
				return System::Void();
			}
			System::Windows::Forms::DialogResult result = MessageBox::Show("Вы уверены, что хотите построить фабрику?", "Внимание!", MessageBoxButtons::YesNo);
			if (result == System::Windows::Forms::DialogResult::Yes)
			{
				MessageBox::Show("Вы построите авто фабрику #" + i);
				player->Constr.PushUF(i - 1, 7);
				player->decreaseMoney(this->UFcost);
			}				
		}
	}
	label_info->Text = "Кол-во ЕСМ: " + player->getURM() + "\nДенег: " + player->getMoney();
	if (numericUpDown_URM1->Value * 2000 > player->getMoney()) {
		numericUpDown_URM1->Maximum = (int)(player->getMoney() / 2000);
	};
	if (numericUpDown_URM2->Value * 3000 > player->getMoney()) {
		numericUpDown_URM2->Maximum = (int)(player->getMoney() / 3000);
	};
	CreateButtons();
	return System::Void();
}

void Managment::ProductionForm::CreateButtons()
{
	System::ComponentModel::ComponentResourceManager^ resources = gcnew System::ComponentModel::ComponentResourceManager(Managment::ProductionForm::typeid);
	for (int i = 0; i < 6; i++) {
		Button^ btn = gcnew Button();
		btn->Dock = DockStyle::Right;
		btn->FlatStyle = FlatStyle::Flat;
		btn->Size = System::Drawing::Size(253, 100);
		btn->Name = "btn_SF" + (i + 1);
		btn->UseVisualStyleBackColor = true;
		btn->Click += gcnew System::EventHandler(this, &Managment::ProductionForm::ButtonOnClick);

		int countSF = player->getCountSF();
		if (player->Constr.GetSF(i) == 0) {
			btn->Text = L"Обычный завод" + "\n Построить: 5000$";
			btn->BackColor = System::Drawing::Color::Gray;
			btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plus.png")));
		}
		else if (player->Constr.GetSF(i) == -1) {
			btn->Text = L"Обычный завод №" + (i + 1);
		}
		else {
			btn->Text = L"Обычный завод №" + (i + 1) + "\nПостроится через: " + player->Constr.GetSF(i) + " месяцев";
		}
			/*btn->Text = L"Завод " + (i + 1) + "\n Улучшение: 7000$";*/

		if (i % 2 == 0)
		{
			this->panel_topSF->Controls->Add(btn);
		}
		else {
			this->panel_bottomSF->Controls->Add(btn);
		}

	}

	for (int i = 0; i < 6; i++) {
		Button^ btn = gcnew Button();
		btn->Dock = DockStyle::Right;
		btn->FlatStyle = FlatStyle::Flat;
		btn->Size = System::Drawing::Size(253, 100);
		btn->Name = "btn_UF" + (i + 1);
		btn->UseVisualStyleBackColor = true;
		btn->Click += gcnew System::EventHandler(this, &Managment::ProductionForm::ButtonOnClick);

		int countUF = player->getCountUF();

		if (player->Constr.GetUF(i) == 0) {
			btn->Text = L"Улучшенный завод" + "\n Построить: 10000$";
			btn->BackColor = System::Drawing::Color::Gray;
			btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plus.png")));
		}
		else if (player->Constr.GetUF(i) == -1) {
			btn->Text = L"Улучшенный завод №" + (i + 1);
		}
		else {
			btn->Text = L"Улучшенный завод №" + (i + 1) + "\nПостроится через: " + player->Constr.GetUF(i) + " месяцев";
		}

		if (i % 2 == 0)
		{
			this->panel_topUF->Controls->Add(btn);
		}
		else {
			this->panel_bottomAF->Controls->Add(btn);
		}

	}
}