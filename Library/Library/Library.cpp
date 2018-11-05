#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>
#include"Client.cpp"
#include"Author.cpp"
#include"Source.cpp"

using namespace std;

struct library
{
	source *s = new source[sizesource];
	client *cl = new client[sizeclient];
	author_book *a = new  author_book[sizeauthor];

};