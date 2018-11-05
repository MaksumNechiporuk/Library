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
struct  source
{
	string sources;
	book *b = new book[sizebook];
	magazine *m = new magazine[sizebook];
	Newspaper *n = new Newspaper[sizebook];
};

