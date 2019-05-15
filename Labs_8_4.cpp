// Labs_8_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	void putdata()const
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
	void getdata()
	{
		cout << "Введите название книги: "; cin >> name;
		cout << "\nВведите цену: "; cin >> price;
	}
	void putdata()const
	{
		cout << "\nНазвание книги: " << name << "\nЦена: " << price;
	}
};
class Book : private Sales, private Publication
{
private:
	int pages;
public:
	void getgata()
	{
		Publication::getdata();
		cout << "\nКолличество страниц в книге: "; cin >> pages;
		Sales::getdata();
	}
	void putdata()const
	{
		Publication::putdata();
		cout << "\nКолличество страниц в книге: " << pages;
		Sales::putdata();
	}
};
class Type : private Sales, private Publication
{
private:
	float time;
public:
	void getdata()
	{
		Publication::getdata();
		cout << "\nВведите время воспроизведения: "; cin >> time;
		Sales::getdata();
	}
	void putdata()const
	{
		Publication::putdata();
		cout << "\nВведите время воспроизведения: " << time;
		Sales::putdata();
	}
};
class Disk : private Sales, private Publication
{
private:
	enum etype { CD, DVD };
public:
	void getdata()
	{
		etype t_disk;
		char type;
		Publication::getdata();
		cout << "\nТип диска (c/d): "; cin >> type;
		if (type = 'c')
			t_disk = CD;
		else t_disk = DVD;

		Sales::getdata();
	}
	void putdata()const
	{
		Publication::putdata();
		etype t_disk;
		char type;
		cout << "\nТип диска: ";
		if (t_disk = CD)
			cout << "CD";
		else
			cout << "DVD";
		Sales::putdata();
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	Book bok;
	Type tp;
	Disk dk;
	bok.getgata();
	tp.getdata();
	dk.getdata();
	cout << "\n" << "Class Book: ";
	bok.putdata();
	cout << "\n" << "Class Type: ";
	tp.putdata();
	cout << "\n" << "Class Disk: ";
	dk.putdata();
	cout << endl;
	system("pause");
};
