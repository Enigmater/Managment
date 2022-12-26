#include "BankForm.h"
#include "Player.h"
#include "Functions.h"

System::Void Managment::BankForm::button_back_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	int URM, UFP, priceURM, priceUFP;
	URM = Convert::ToInt32(numericUpDown_amountURM->Value); 
	UFP = Convert::ToInt32(numericUpDown_amountUFP->Value);
	priceURM = Convert::ToInt32(numericUpDown_priceURM->Value);
	priceUFP = Convert::ToInt32(numericUpDown_priceUFP->Value);
	player->BankRequest = PlayerRequest(URM, UFP, priceURM, priceUFP);
	if (checkBox_bargainURM->Checked) {
		player->BankRequest.ApproveURM(true);
	}
	else {
		player->BankRequest.ApproveURM(false);
	}
	if (checkBox_bargainUFP->Checked) {
		player->BankRequest.ApproveUFP(true);
	}
	else {
		player->BankRequest.ApproveUFP(false);
	}
}


System::Void Managment::BankForm::BankForm_Load(System::Object^ sender, System::EventArgs^ e)
{	
	numericUpDown_amountURM->Enabled = player->BankRequest.URMIsApproved();
	numericUpDown_priceURM->Enabled = player->BankRequest.URMIsApproved();
	numericUpDown_amountUFP->Enabled = player->BankRequest.UFPIsApproved();
	numericUpDown_priceUFP->Enabled = player->BankRequest.UFPIsApproved();

	checkBox_bargainURM->Checked = player->BankRequest.URMIsApproved();
	checkBox_bargainUFP->Checked = player->BankRequest.UFPIsApproved();

	numericUpDown_amountURM->Value = player->BankRequest.getAviableURM();
	numericUpDown_priceURM->Value = player->BankRequest.getPriceURM();
	numericUpDown_amountUFP->Value = player->BankRequest.getAviableUFP();
	numericUpDown_priceUFP->Value = player->BankRequest.getPriceUFP();

	label_URM->Text = String::Format("ЕСМ доступно: {0}", player->getURM());
	label_UFP->Text = String::Format("ЕГП доступно: {0}", player->getUFP());

	dataGridView_bank->Rows->Add(2);
	dataGridView_bank->Rows[0]->HeaderCell->Value = "Количество";
	dataGridView_bank->Rows[1]->HeaderCell->Value = "Цена за штуку";
	dataGridView_bank->Rows[0]->Cells[0]->Value = bank->getAviableURM();
	dataGridView_bank->Rows[0]->Cells[1]->Value = bank->getAviableUFP();
	dataGridView_bank->Rows[1]->Cells[0]->Value = bank->getPriceURM();
	dataGridView_bank->Rows[1]->Cells[1]->Value = bank->getPriceUFP();

	numericUpDown_amountURM->Maximum = bank->getAviableURM();
	numericUpDown_amountUFP->Maximum = (bank->getAviableUFP() < player->getUFP()) ? bank->getAviableUFP() : player->getUFP();
	numericUpDown_priceURM->Minimum = bank->getPriceURM();
	numericUpDown_priceUFP->Maximum = bank->getPriceUFP();
}

System::Void Managment::BankForm::checkBox_bargainURM_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (!checkBox_bargainURM->Checked) {
		numericUpDown_amountURM->Enabled = false;
		numericUpDown_priceURM->Enabled = false;
	}
	else {
		numericUpDown_amountURM->Enabled = true;
		numericUpDown_priceURM->Enabled = true;
	}
}

System::Void Managment::BankForm::checkBox_bargainUFP_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (!checkBox_bargainUFP->Checked) {
		numericUpDown_amountUFP->Enabled = false;
		numericUpDown_priceUFP->Enabled = false;
	}
	else {
		numericUpDown_amountUFP->Enabled = true;
		numericUpDown_priceUFP->Enabled = true;
	}
}

