#include"Contacts.h"

void ShowMenu()
{
	std::cout << "**********************" << std::endl;
	std::cout << "**** 1.�����ϵ�� ****" << std::endl;
	std::cout << "**** 2.��ʾ��ϵ�� ****" << std::endl;
	std::cout << "**** 3.ɾ����ϵ�� ****" << std::endl;
	std::cout << "**** 4.������ϵ�� ****" << std::endl;
	std::cout << "**** 5.�޸���ϵ�� ****" << std::endl;
	std::cout << "**** 6.�����ϵ�� ****" << std::endl;
	std::cout << "**** 0.�˳���ϵ�� ****" << std::endl;
	std::cout << "**********************" << std::endl;
}

void ShowContacts(std::vector<Contacts>& vec)
{
	for (std::vector<Contacts>::iterator iter =vec.begin(); iter != vec.end(); iter++)
	{
		(*iter).PrintInfo();
	}
}

void SearchContacts(std::vector<Contacts>& vec)
{
	int is_found = 0;
	std::vector<Contacts>::iterator p;
	std::string Wanting;
	std::cout << "����������Ҫ���ҵ�����:" << std::endl;
	std::cin >> Wanting;
	for (std::vector<Contacts>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (iter->GetName() == Wanting)
		{
			is_found = 1;
			p = iter;
			p->PrintInfo();
		}
	}
	if (is_found == 1) {
		;
	}
	else
	{
		std::cout << "�Բ��𣬲��޴���..." << std::endl;
	}
}

void EditContacts(std::vector<Contacts>& vec)
{
	int is_found = 0;
	std::vector<Contacts>::iterator p;
	std::string Wanting;
	std::cout << "����������Ҫ���ҵ�����:" << std::endl;
	std::cin >> Wanting;
	for (std::vector<Contacts>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (iter->GetName() == Wanting)
		{
			is_found = 1;
			p = iter;
			//�޸�����
			std::cout << "�������µ�����" << std::endl;
			std::cin >> p->m_Age;
			std::cout << "�������µĺ���" << std::endl;
			std::cin >> p->m_Tele;
			std::cout << "�������µĵ�ַ" << std::endl;
			std::cin >> p->m_Address;
		}
	}
	if (is_found == 1) {
		;
	}
	else
	{
		std::cout << "�Բ��𣬲��޴���..." << std::endl;
	}

}

void DeleteContatcs(std::vector<Contacts>& vec)
{
	int is_found = 0;
	int confirm = 0;
	std::vector<Contacts>::iterator p;
	std::string Wanting;
	std::cout << "����������ɾ��������:" << std::endl;
	std::cin >> Wanting;
	for (std::vector<Contacts>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (iter->GetName() == Wanting)
		{
			is_found = 1;
			p = iter;
			//ɾ����Ϣ
			std::cout << "ȷ��ɾ���𣿣�1.ȷ�� 2.ȡ����" << std::endl;
			std::cin >> confirm;
			if (confirm == 1)
			{
				//ִ�в���
				vec.erase(p);
				std::cout << "ɾ���ɹ�" << std::endl;
			}
			else
			{
				system("cls");
				system("pause");
			}
		}
	}
	if (is_found == 1) {
		;
	}
	else
	{
		std::cout << "�Բ��𣬲��޴���..." << std::endl;
	}

}
void ClearContacts(std::vector<Contacts>& vec)
{
	std::cout << "ȷ������𣿣�1.ȷ�� 2.ȡ����" << std::endl;
	int confirm = 0;
	std::cin >> confirm;
	if (confirm == 1)
	{
		vec.clear();
		std::cout << "��ճɹ�" << std::endl;
	}
	else
	{
		system("cls");
		system("pause");
	}
}

void Quit()
{
	std::cout << "��ӭ�´�ʹ�ã�" << std::endl;
}
/********************************************************************************/
void Contacts::PrintInfo()
{
	std::cout << this->m_Name << "������: " << this->m_Age << ",�绰: " << this->m_Tele << ",��ͥסַ: " << this->m_Address << std::endl;
}

void Contacts::SetInfo()
{
	this->SetName();
	this->SetAge();
	this->SetTele();
	this->SetAdd();
}

void Contacts::SetAge()
{
	std::cout << "��������ϵ�˵����䣺" << std::endl;
	std::cin >> this->m_Age;
}

void Contacts::SetAdd()
{
	std::cout << "��������ϵ�˵�סַ��" << std::endl;
	std::cin >> this->m_Address;
}

void Contacts::SetName()
{
	std::cout << "��������ϵ�˵�������" << std::endl;
	std::cin >> this->m_Name;
}

void Contacts::SetTele()
{
	std::cout << "��������ϵ�˵ĵ绰��" << std::endl;
	std::cin >> this->m_Tele;
}

int Contacts::GetAge()
{
	return this->m_Age;
}

std::string Contacts::GetAddr()
{
	return this->m_Address;
}

std::string Contacts::GetName()
{
	return this->m_Name;
}

std::string Contacts::GetTele()
{
	return this->m_Tele;
}
Contacts::Contacts()
{
}

Contacts::~Contacts()
{
	;
}
