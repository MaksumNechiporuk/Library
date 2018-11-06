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
	library l;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < sizebook; j++)
		{
			l.a[j].Fill_author();
			l.m[j].Fill_author_magazine();
			l.n[j].Fill_author_magazine();
			l.books.b[j]=l.a[j].mybook[i];
			l.magazine.m[j] = l.m[j].my_magazine[i];
			l.newspaper.n[j] = l.n[j].my_newspaper[i];
		}
	}
		for (int j = 0; j < sizebook; j++)
		{
			cout << l.books.b[j].name << endl;
			cout << l.magazine.m[j].name<<endl;
				cout<<l.newspaper.n[j].name<<endl;
		}
		cout << endl;
		for (int i = 0; i < 1; i++)
		for (int j = 0; j < sizebook; j++)
		{
			cout << l.a[j].mybook[i].name << endl;
			cout << l.m[j].my_magazine[i].name << endl;
			cout << l.n[j].my_newspaper[i].name << endl;
		}

	system("pause");
}