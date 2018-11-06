#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include "Date.h"
using namespace std;

struct magazine
{
	string name;
	Data d;
	int number;
	string genre;//enum  
	bool status;
	void Fill_magasine()
	{
		string names[10] = { "Vogue","Elle","Harper`s Bazaar","Marie Claire","Glamour","Numero","Dazed"," InStyle","L’Officiel","Purple Fashion" };
		name = names[rand() % 10];
		int a = rand() % 10;
		if (a == 0)
		{
			number = 0;
			status = false;
		}
		else
		{
			number = 1 + rand() % 50;
			status = true;
		}
		string genres[6] = { "Інформаційний","Спортивний","Науковий","Розважальний","Дитячий","Галузевий" };
		genre = genres[rand() % 6];
		d.Fill_data(1960, 2018);
	}
};



