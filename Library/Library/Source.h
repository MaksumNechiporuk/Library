#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"Book.h"
#include"magazine.h"
#include "Newspaper.h"


using namespace std;

int sizebook = 10, sizesource = 3, sizeclient = 10, sizeauthor = 10;

struct  sources_book
{
	string sources="Книга";
	book *b = new book[sizebook];

};
struct sources_magazine
{
	string sources = "Журнал";
	magazine *m = new magazine[sizebook];
};
struct sources_newspaper
{
	string sources = "Газета";
	Newspaper *n = new Newspaper[sizebook];
};