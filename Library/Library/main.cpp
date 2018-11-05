#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"Book.h"
#include"Client.h"
#include"Author.h"
#include"Source.h"
#include"Library.h"

using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ukr");
	library test;
	for (int i = 0; i < 10; i++)
	{
		test.a[i].Fill_author();
		test.a[i].Show_author();
	}
	source s;
	cout << endl;
	s.b = test.a.mybook;
	cout << s.b[0].name << endl;
	cout << test.a[0].mybook[0].name << endl;
	system("pause");
}