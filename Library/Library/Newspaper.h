#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include "Date.h"
using namespace std;

struct Newspaper
{
	string name;
	Data d;
	int number;
	string genre;//enum  
	bool status;
	void Fill_newspaper()
	{
		string names[10] = { " HINDUSTAN TIMES","THE SUN","NEW YORK TIMES","TIMES OF INDIA","SPIEGEL","WALL STREET JOURNAL","JAPAN TODAY"," PRESSE"," WASHINGTON POST","USA TODAY" };
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
