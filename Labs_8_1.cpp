// Labs_8_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
		cout << "\n" << name << "\n" << price;
	}
};
class Book : private Publication
{
private:
	int pages;
public:
	void getgata()
	{
		Publication::getdata();
		cout << "\nКолличество страниц в книге: "; cin >> pages;
	}
	void putdata()const
	{
		Publication::putdata();
		cout << "\n" << pages;
	}
};
class Type : private Publication
{
private:
	float time;
public:
	void getdata()
	{
		Publication::getdata();
		cout << "\nВведите время воспроизведения: "; cin >> time;
	}
	void putdata()const
	{
		Publication::putdata();
		cout << "\n" << time;
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
	cout << "\n" << " Class Book: ";
	bok.putdata();
	cout << "\n" << " Class Type: ";
	tp.putdata();
	cout << endl;
	system("pause");
};
