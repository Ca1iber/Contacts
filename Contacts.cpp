#include"Contacts.h"

void ShowMenu()
{
	std::cout << "**********************" << std::endl;
	std::cout << "**** 1.添加联系人 ****" << std::endl;
	std::cout << "**** 2.显示联系人 ****" << std::endl;
	std::cout << "**** 3.删除联系人 ****" << std::endl;
	std::cout << "**** 4.查找联系人 ****" << std::endl;
	std::cout << "**** 5.修改联系人 ****" << std::endl;
	std::cout << "**** 6.清空联系人 ****" << std::endl;
	std::cout << "**** 0.退出联系人 ****" << std::endl;
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
	std::cout << "请输入你想要查找的姓名:" << std::endl;
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
		std::cout << "对不起，查无此人..." << std::endl;
	}
}

void EditContacts(std::vector<Contacts>& vec)
{
	int is_found = 0;
	std::vector<Contacts>::iterator p;
	std::string Wanting;
	std::cout << "请输入你想要查找的姓名:" << std::endl;
	std::cin >> Wanting;
	for (std::vector<Contacts>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (iter->GetName() == Wanting)
		{
			is_found = 1;
			p = iter;
			//修改内容
			std::cout << "请输入新的年龄" << std::endl;
			std::cin >> p->m_Age;
			std::cout << "请输入新的号码" << std::endl;
			std::cin >> p->m_Tele;
			std::cout << "请输入新的地址" << std::endl;
			std::cin >> p->m_Address;
		}
	}
	if (is_found == 1) {
		;
	}
	else
	{
		std::cout << "对不起，查无此人..." << std::endl;
	}

}

void DeleteContatcs(std::vector<Contacts>& vec)
{
	int is_found = 0;
	int confirm = 0;
	std::vector<Contacts>::iterator p;
	std::string Wanting;
	std::cout << "请输入你想删除的姓名:" << std::endl;
	std::cin >> Wanting;
	for (std::vector<Contacts>::iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		if (iter->GetName() == Wanting)
		{
			is_found = 1;
			p = iter;
			//删除信息
			std::cout << "确认删除吗？（1.确认 2.取消）" << std::endl;
			std::cin >> confirm;
			if (confirm == 1)
			{
				//执行操作
				vec.erase(p);
				std::cout << "删除成功" << std::endl;
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
		std::cout << "对不起，查无此人..." << std::endl;
	}

}
void ClearContacts(std::vector<Contacts>& vec)
{
	std::cout << "确认清空吗？（1.确认 2.取消）" << std::endl;
	int confirm = 0;
	std::cin >> confirm;
	if (confirm == 1)
	{
		vec.clear();
		std::cout << "清空成功" << std::endl;
	}
	else
	{
		system("cls");
		system("pause");
	}
}

void Quit()
{
	std::cout << "欢迎下次使用！" << std::endl;
}
/********************************************************************************/
void Contacts::PrintInfo()
{
	std::cout << this->m_Name << "的年龄: " << this->m_Age << ",电话: " << this->m_Tele << ",家庭住址: " << this->m_Address << std::endl;
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
	std::cout << "请输入联系人的年龄：" << std::endl;
	std::cin >> this->m_Age;
}

void Contacts::SetAdd()
{
	std::cout << "请输入联系人的住址：" << std::endl;
	std::cin >> this->m_Address;
}

void Contacts::SetName()
{
	std::cout << "请输入联系人的姓名：" << std::endl;
	std::cin >> this->m_Name;
}

void Contacts::SetTele()
{
	std::cout << "请输入联系人的电话：" << std::endl;
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
