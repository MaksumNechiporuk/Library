#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include "Date.cpp"
using namespace std;

struct book
{
	string name;
	Date d;
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
		string genres[6] = { "�������������","����������","��������","������������","�������","���������" };
		genre = genres[rand() % 6];
	}
};
