#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"book.cpp"
#include"main.cpp"

using namespace std;

struct  source
{
	string sources;
	book *b = new book[sizebook];
};

