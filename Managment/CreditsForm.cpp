#include "CreditsForm.h"
#include "Functions.h"

System::Void Managment::CreditsForm::CreditsForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    UpdInfo();
}

System::Void Managment::CreditsForm::button_accept_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void Managment::CreditsForm::radioButton_SFdebt_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Managment::CreditsForm::radioButton_UFdebt_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Managment::CreditsForm::button_getDebt_Click(System::Object^ sender, System::EventArgs^ e)
{
    Credits debt;
    if (radioButton_SFdebt->Checked || radioButton_UFdebt->Checked) {
        System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Вы уверены, что хотите взять кредит?", "Внимание!", System::Windows::Forms::MessageBoxButtons::YesNo);
        if (result == System::Windows::Forms::DialogResult::Yes) {
            if (radioButton_SFdebt->Checked == true) {
                debt.setAmount(5000);
                debt.setTerm(12);
                debt.setType("SF");
            }
            if (radioButton_UFdebt->Checked == true) {
                debt.setAmount(10000);
                debt.setTerm(12);
                debt.setType("UF");
            }
            player->Debts.push_back(debt);
            player->increaseMoney(debt.getAmount());

            UpdInfo();
        }
        else {
            return System::Void();
        }
    }
    else {
        MessageBox::Show("Для начала выберите тип кредита!", "Внимание!");
        return System::Void();
    }
}

void Managment::CreditsForm::UpdInfo()
{
    label_moneyAmount->Text = Convert::ToString(player->getMoney()) + "$";
    label_debtsAmount->Text = Convert::ToString(player->DebtsSum()) + "$";

    radioButton_SFdebt->Text = String::Format("Взять кредить под обычную фабрику (Доступно {0})", player->getCountSF() - player->CountSFDebts());
    radioButton_UFdebt->Text = String::Format("Взять кредит под автоматизированную фабрику (Доступно {0})", player->getCountUF() - player->CountUFDebts()); 

    if (player->getCountSF() - player->CountSFDebts() == 0) {
        radioButton_SFdebt->Enabled = false;
        radioButton_SFdebt->Checked = false;
    }

    if (player->getCountUF() - player->CountUFDebts() == 0) {
        radioButton_UFdebt->Enabled = false;
        radioButton_UFdebt->Checked = false;
    }

    dataGridView1->Rows->Clear();

    /*dataGridView1->Columns->Clear();*/

    int size = player->Debts.size();
    for (size_t i = 0; i < size; i++)
    {
        dataGridView1->Rows->Add();
        dataGridView1->Rows[i]->Cells[0]->Value = player->Debts[i].getAmount();
        dataGridView1->Rows[i]->Cells[1]->Value = player->Debts[i].getTerm();
        String^ TypeF;
        if (player->Debts[i].getType() == "SF") {
            TypeF = "Обычная фабрика";
        }
        else {
            TypeF = "Автоматизированная фабрика";
        }
        dataGridView1->Rows[i]->Cells[2]->Value = TypeF;
    }
}
