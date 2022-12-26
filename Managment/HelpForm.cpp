#include "HelpForm.h"

System::Void Managment::HelpForm::button_backToMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
    Form^ form;
    if (this->Text == "�������") {
        form = Application::OpenForms[0];
        form->Show();
    }
    this->Close();   
}

System::Void Managment::HelpForm::linkLabel_1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    String^ msg = "������ ����� ������:\n300 ����. �� ������ ��������� � ���� ���\n500 ����. �� ������ �������� ���\n1000 ����. �� �������� ������ ������� ��������\n1500 ����. � �� �������� ������������������\n1% �� ����� ������������ ��������";
    MessageBox::Show(msg, "���������� ��������");
}

System::Void Managment::HelpForm::linkLabel_2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    String^ msg = "������ ����� ����� �� ������ ������� ������ �� ��� �� ������� �����.\n� ������ ����������� ��������� ����� ��� � ������������ ���� �� ���� ���������� �����������\n(������ ���� ��� ��� ����������� ���� ���� ����������� ������������� ��������� ������ �� ������ � ���� ������).\n��� ������ ��� �������������� ����� �������� � ������� �������� ������������ ����.\n���� ����� �� ������� �� ����, ������ � ������������ ����� ������ ���� �� ���������������.\n��� ������ ������ �������� ����� ��������� ������ �������� ������.\n������ ������ �� ����� ��� ��� ���������. ";
    MessageBox::Show(msg, "����");
}

System::Void Managment::HelpForm::linkLabel_3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    String^ msg = "������ ����� ����� �������, ������� ��� �� ���������� ������������ � ��� � ������� ������ � �� ����� ��������.\n������ ����� ������ ��� �� ������� ������� �� ������������.\n������� ������� ����� �� ����� ������������ ���� ��� ��� �������� � 2000 ����.\n������������������ ������� ����� ������������ 2 ��� ��� �������� � 3000 ����";
    MessageBox::Show(msg, "������������");
}

System::Void Managment::HelpForm::linkLabel_4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    String^ msg = "������� �������������� ���������� � ������ ���������:\n��� ������� ������� ������ ����� 5000 ����.\n��� ������������������ � 10 000 ����.\n���� ���������� ����������� ����� ������� ������.\n���� ��������� ����� �������� ����� 12 ������� � ��������, ������, ������ � 3-� ������, ���������� ���� � 15-�.\n������ �������� ������� ������ �����.";
    MessageBox::Show(msg, "�������");
}

System::Void Managment::HelpForm::linkLabel_5_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    String^ msg = "������ ����� ������� ����� �������.\n������� ������� ����� 5000 ����. � �������� ������ ��������� �� 5-� ����� ����� ������ �������������\n������������������ ������� ����� 10 000 ���� � ���� ��������� �� 7-� ����� ����� ������ �������������";
    MessageBox::Show(msg, "�������������");
}
