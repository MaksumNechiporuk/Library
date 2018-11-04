#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"book.cpp"
#include"Client.cpp"
#include"Author.cpp"
#include"Source.cpp"
#include"Library.cpp"
using namespace std;

int sizebook = 10, sizesource = 3, sizeclient = 10, sizeauthor = 10;








int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ukr");
	library test;
	for (int i = 0; i < sizeauthor; i++)
	{
		test.a[i].Fill_author();
		test.a[i].Show_author();
	}

	system("pause");
}