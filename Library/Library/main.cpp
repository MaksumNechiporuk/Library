#include<iostream>
#include<ctime>
#include<iomanip>
#include<string>

using namespace std;

int sizebook = 10, sizesource = 3, sizeclient = 10, sizeauthor = 10;

struct Date
{
	int day;
	int mouth;
	int year;
	void Fill_data(int min, int max)
	{
		day = 1 + rand() % 30;
		mouth = 1 + rand() % 11;
		year = min + rand() % (max - min);
	}
	void Fill_data_book(int min, int max)
	{
		day = 1 + rand() % 30;
		mouth = 1 + rand() % 11;
		year = min + rand() % (max - min);
	}
	void Show_dob()
	{
		cout << day << ":" << mouth << ":" << year << endl;
	}


};
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

			number = 1 + rand() % 100;
			status = true;
		}
		string genres[6] = { "�����������","��������","����������","�������������","�������-������������","�����" };
		genre = genres[rand() % 6];
	}
	void Fill_book()
	{
		string names[10] = { " �� ��������� ����� ��� ���","����","���������, ������, �����, ���������","������","������� ������ ����","������� �� ��� ������","�������� �����"," ������� ������� ����� ������","������� �����","1984" };
		name = names[rand() % 10];
		int a = rand() % 10;
		if (a == 0)
		{
			number = 0;
			status = false;
		}
		else
		{

			number = 1 + rand() % 100;
			status = true;
		}
		string genres[6] = { "�����������","��������","����������","�������������","�������-������������","�����" };
		genre = genres[rand() % 6];
	}
};
struct author
{
	string name;
	string surname;
	int size_book = 1;
	book *mybook = new book[size_book];
	void Fill_author()
	{
		string names[10] = { "����","������","�����","³����","�����","�������","������","�������","�����","������" };
		string surnames[10] = { "������","���","�����","������","�����","�����","������","�����","�����","����" };
		name = names[rand() % 10];
		surname = surnames[rand() % 10];
		

	}
	void Show_author()
	{
		cout << name << setw(4) << " " << surname << endl;
	}

};
struct client
{
	string name;
	string surname;
	Date DoB;
	int numberbook = 0;
	book *b = new book[numberbook];
	string sn[6] = { "����������", "�������", "��������", "��������", "���������", "�����" };
	string n[6] = { "������", "���������", "������", "�����", "���", "���������" };
};
struct  source
{
	string sources;
	book *b = new book[sizebook];

};
struct library
{
	source *s = new source[sizesource];
	client *cl = new client[sizeclient];
	author *a = new  author[sizeauthor];

};

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