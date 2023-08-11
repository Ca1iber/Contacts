#include"Contacts.h"


int main()
{
	Contacts Someone;
	int choice = 1;
	std::vector<Contacts> contact;
	while (choice!=0)
	{
		ShowMenu();
		std::cin >> choice;
		switch (choice)
		{
		case 1://添加联系人
			Someone.SetInfo();
			contact.push_back(Someone);
			system("pause");
			break;
		case 2://显示联系人
			ShowContacts(contact);
			system("pause");
			break;
		case 3://删除联系人
			//DeleteContacts(contact);
			system("pause");
			break;
		case 4://查找联系人
			SearchContacts(contact);
			break;
		case 5://修改联系人
			EditContacts(contact);
			break;
		case 6://清空联系人
			ClearContacts(contact);
			break;
		case 0://退出
			Quit();
			break;
		default:
			system("cls");
			system("pause");
			break;
		}
	}
	system("pause");
}