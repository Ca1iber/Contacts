#pragma once
#include<string>
#include<iostream>
#include<vector>

class Contacts
{
	friend void EditContacts(std::vector<Contacts>& vec);
public:
	Contacts();
	~Contacts();
	void PrintInfo();

	void SetAge();
	void SetAdd();
	void SetName();
	void SetTele();
	void SetInfo();

	int GetAge();
	std::string GetAddr();
	std::string GetName();
	std::string GetTele();
private:
	int m_Age;
	std::string m_Address;
	std::string m_Name;
	std::string m_Tele;
};



void ShowMenu();
void ShowContacts(std::vector<Contacts>& vec);
void DeleteContacts(std::vector<Contacts>& vec);
void SearchContacts(std::vector<Contacts>& vec);
void EditContacts(std::vector<Contacts>& vec);
void ClearContacts(std::vector<Contacts>& vec);
void Quit();
void AddContacts();