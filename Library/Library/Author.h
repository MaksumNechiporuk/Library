#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"book.h"
#include "Date.h"
#include"magazine.h"
#include "Newspaper.h"

using namespace std;

struct author_book
{
	string name;
	string surname;
	int size_book = 1;
	book *mybook = new book[size_book];
	void Fill_author()
	{
		string names[10] = { "Ерих","Джеймс","Франц","Вільям","Оскар","Ґабріель","Микола","Ярослав","Хорхе","Джордж" };
		string surnames[10] = { "Орвелл","Луїс","Гашек","Гоголь","Ґарсія","Вайлд","Шекспір","Кафка","Джойс","Марія" };
		name = names[rand() % 10];
		surname = surnames[rand() % 10];
		for (int i = 0; i < size_book; i++)
		{
			mybook[i].Fill_book();
		}

	}
	void Show_author()
	{
		cout << name << setw(4) << " " << surname << endl;
	}

};
struct author_magazine
{
	string name;
	string surname;
	int size_magazine = 1;
	magazine *my_magazine = new magazine[size_magazine];
	void Fill_author_magazine()
	{
		string names[10] = { "Ерих","Джеймс","Франц","Вільям","Оскар","Ґабріель","Микола","Ярослав","Хорхе","Джордж" };
		string surnames[10] = { "Орвелл","Луїс","Гашек","Гоголь","Ґарсія","Вайлд","Шекспір","Кафка","Джойс","Марія" };
		name = names[rand() % 10];
		surname = surnames[rand() % 10];
		for (int i = 0; i < size_magazine; i++)
		{
			my_magazine[i].Fill_magasine();
		}

	}
	void Show_author()
	{
		cout << name << setw(4) << " " << surname << endl;
	}

};

struct author_Newspaper
{
	string name;
	string surname;
	int size_newspaper = 1;
	Newspaper *my_newspaper = new Newspaper[size_newspaper];
	void Fill_author_magazine()
	{
		string names[10] = { "Ерих","Джеймс","Франц","Вільям","Оскар","Ґабріель","Микола","Ярослав","Хорхе","Джордж" };
		string surnames[10] = { "Орвелл","Луїс","Гашек","Гоголь","Ґарсія","Вайлд","Шекспір","Кафка","Джойс","Марія" };
		name = names[rand() % 10];
		surname = surnames[rand() % 10];
		for (int i = 0; i < size_newspaper; i++)
		{
			my_newspaper[i].Fill_newspaper();
		}

	}
	void Show_author()
	{
		cout << name << setw(4) << " " << surname << endl;
	}

};
