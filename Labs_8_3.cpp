// Labs_8_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include<iostream>
#include <string>
using namespace std;
const int SAL = 3;
class Sales
{
private:
	float sales[SAL];

public:
	void getdata()
	{
		for (int j = 1; j <= SAL; j++)
		{
			cout << "\nОбщая стоимость книг, проданных в " << j << " месяц: ";
			cin >> sales[j];
		}
	}
	void putdata() const
	{
		for (int j = 1; j <= SAL; j++)
		{
			cout << "\nОбщая стоимость книг, проданных в " << j << " месяц: ";
			cout << sales[j];
		}
	}
};
class Publication
{
private:
	string name;
	float price;
public:
	Publication() :price(0)
	{
	}
	void getdata()
	{
		cout << "Введите название книги: ";
		cin >> name;
		cout << "\nВведите цену: ";
		cin >> price;
	}
	void putdata() const
	{
		cout << "\nНазвание книги: " << name << "\nЦена: " << price;
	}
};
class Book :private Sales, private Publication
{
private:
	int pages;
public:
	Book() :pages(0)
	{
	}
	void getgata()
	{
		Publication::getdata();
		cout << "\nКолличество страниц в книге: ";
		cin >> pages;

		Sales::getdata();
	}
	void putdata() const
	{
		Publication::putdata();
		cout << "\nКолличество страниц в книге: " << pages;
		Sales::putdata();
	}
};
class Type :private Sales, private Publication
{
private:
	float time;
public:
	Type() :time(0)
	{
	}
	void getdata()
	{
		Publication::getdata();
		cout << "\nВведите время воспроизведения: ";
		cin >> time;
		Sales::getdata();
	}
	void putdata() const
	{

		Publication::putdata();
		cout << "\nВведите время воспроизведения: " << time;
		Sales::putdata();
	}
};
int
main()
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
