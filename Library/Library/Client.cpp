#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"book.cpp"
#include "Date.cpp"

using namespace std;

struct client
{
	string name;
	string surname;
	Data DoB;
	int numberbook = 0;
	book *b = new book[numberbook];
	void Fill_client()
	{
		string sn[6] = { "Бондаренко", "Мельник", "Шевченко", "Ткаченко", "Коваленко", "Бойко" };
		string n[6] = { "Олексій", "Олександр", "Максим", "Борис", "Юрій", "Владислав" };
		name = n[rand() % 6];
		surname = sn[rand() % 6];
		DoB.Fill_data(1955, 2013);
	}
	void Show_client()
	{
		cout << name << " " << setw(5) << surname << " " << setw(4); DoB.Show_dob();
	}
};