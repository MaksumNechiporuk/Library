#pragma once
#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"Client.h"
#include"Author.h"
#include"Source.h"

using namespace std;

struct library
{
	sources_book books;
	sources_magazine magazine;
	sources_newspaper  newspaper;
	client *cl = new client[sizeclient];
	author_book *a = new  author_book[sizeauthor];
	author_magazine *m= new  author_magazine[sizeauthor];
	author_Newspaper *n= new  author_Newspaper[sizeauthor];
};