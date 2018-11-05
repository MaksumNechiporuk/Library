#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
using namespace std;

struct Data
{
	int day;
	int mouth;
	int year;
	void Fill_data(int min, int max)
	{
		day = 1 + rand() % 30;
		mouth = 1 + rand() % 11;
		year = min + rand() % (max - min);
	}
	void Fill_data_book(int min, int max)
	{
		day = 1 + rand() % 30;
		mouth = 1 + rand() % 11;
		year = min + rand() % (max - min);
	}
	void Show_dob()
	{
		cout << day << ":" << mouth << ":" << year << endl;
	}


};