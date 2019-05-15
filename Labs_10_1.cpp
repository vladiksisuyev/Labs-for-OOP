// Labs_10_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class publication
{
private:
	string title;
	float price;
public:
	virtual void getdata()
	{
		cout << "\nВведите название книги: "; cin >> title;
		cout << "Введите цену: "; cin >> price;
	}
	virtual void putdata()
	{
		cout << "\n\nНазвание: " << title;
		cout << "\nЦена: " << price;
	}
};
class book : public publication
{
private:
	int pages;
public:
	void getdata()
	{
		publication::getdata();
		cout << "Введите количество страниц: "; cin >> pages;
	}
	void putdata()
	{
		publication::putdata();
		cout << "\nСтраниц: " << pages;
	}
};
class tape : public publication
{
private:
	float time;
public:
	void getdata()
	{
		publication::getdata();
		cout << "Введите время воспроизведения: "; cin >> time;
	}
	void putdata()
	{
		publication::putdata();
		cout << "\nВремя воспроизведения: " << time;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	publication* pubarr[100];
	int n = 0;
	char choice;
	do {
		cout << "\nВведите данные для книги или ленты (b/t)? ";
		cin >> choice;
		if (choice == 'b')
			pubarr[n] = new book;
		else
			pubarr[n] = new tape;
		pubarr[n++]->getdata();
		cout << " Ввести другое (y/n)? ";
		cin >> choice;
	} while (choice == 'y'); //cycle until not 'y'
	for (int j = 0; j < n; j++) //cycle thru all pubs
		pubarr[j]->putdata(); //print data for pub
	cout << endl;
	return 0;
}
