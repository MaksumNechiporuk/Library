#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"book.cpp"
#include "Date.cpp"

using namespace std;

struct author
{
	string name;
	string surname;
	int size_book = 1;
	book *mybook = new book[size_book];
	void Fill_author()
	{
		string names[10] = { "����","������","�����","³����","�����","�������","������","�������","�����","������" };
		string surnames[10] = { "������","���","�����","������","�����","�����","������","�����","�����","����" };
		name = names[rand() % 10];
		surname = surnames[rand() % 10];


	}
	void Show_author()
	{
		cout << name << setw(4) << " " << surname << endl;
	}

};