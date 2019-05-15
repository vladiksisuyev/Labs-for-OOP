// Labs_8_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include<iostream>
#include <string>
using namespace std;
class Publication
{
private:
	char name[80];
	float price;
public:
	void getdata()
	{
		cout << "Введите название книги: "; cin >> name;
		cout << "\nВведите цену: "; cin >> price;
	}
	void putdata()const
	{
		cout << "\nНазвание книги: " << name << "\n Цена: " << price;
	}
};
class Publication2 : public Publication
{
private:
	int day, month, year;
public:
	Publication2() : month(0), day(0), year(0)
	{}
	Publication2(int d, int m, int y) : month(m), day(d), year(y)
	{}
	void getdata()
	{
		Publication::getdata();
		char ch;
		cout << "\nВведите день, месяц и год (XX/XX/XXXX): " << endl;
		cin >> day >> ch >> month >> ch >> year;
	}
	void putdata()const
	{
		Publication::putdata();
		char ch = '/';
		cout << "\n Дата публикации: " << day << ch << month << ch << year << endl;
	}
};
class Book : private Publication2
{
private:
	int pages;
public:
	void getgata()
	{
		Publication2::getdata();
		cout << "\nКолличество страниц в книге: "; cin >> pages;
	}
	void putdata()const
	{
		Publication2::putdata();
		cout << "\n Колличество страниц в книге: " << pages;
	}
};
class Type : private Publication2
{
private:
	float time;
public:
	void getdata()
	{
		Publication2::getdata();
		cout << "\n Введите время воспроизведения: "; cin >> time;
	}
	void putdata()const
	{
		Publication2::putdata();
		cout << "\n Введите время воспроизведения: " << time;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	Book bok;
	Type tp;
	bok.getgata();
	tp.getdata();
	cout << "\n" << "Class Book: ";
	bok.putdata();
	cout << "\n" << "Class Type: ";
	tp.putdata();
	cout << endl;
	system("pause");
};

