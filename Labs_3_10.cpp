// Labs_3_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct sterling
{
	int pounds;
	int shilling;
	int pens;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	sterling newp, oldp;
	char ch = '.';
	int sumpens;
	cout << "Введите десятичные фунты:" << endl;
	cin >> newp.pounds >> ch >> newp.pens;
	sumpens = ((newp.pounds * 100) + newp.pens) * 2.4;
	newp.pounds = sumpens / (20 * 12);
	newp.shilling = sumpens % (20 * 12) / 12;
	newp.pens = sumpens % (20 * 12) % 12;
	cout << "Старые фунты: J" << newp.pounds << ch << newp.shilling << ch << newp.pens << endl;
	system("pause");
	return 0;
}
