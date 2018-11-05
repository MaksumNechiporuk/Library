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
	source *s = new source[sizesource];
	client *cl = new client[sizeclient];
	author_book *a = new  author_book[sizeauthor];

};