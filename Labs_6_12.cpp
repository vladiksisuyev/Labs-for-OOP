﻿// Labs_6_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include<iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
class bMoney
{
private:
	string strMon;
	long double number;
public:
	bMoney() : number(0)
	{}
	void mstold()
	{
		cout << "Введите сумму в десятичной точке. Конец со знаком доллара" << endl;
		getline(cin, strMon, '$');
		int wlen = strMon.length();
		int n = 0;
		string num;
		for (int j = 0; j < wlen; j++)
			if (strMon[j] != ',' && strMon[j] != '$')
				num.push_back(strMon[j]); ;
		number = stold(num);
	}
	void madd(bMoney mon1, bMoney mon2)
	{
		number = mon1.number + mon2.number;
	}
	void display()const
	{
		cout << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2)
			<< "\n" << number << '$' << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	bMoney money1, money2, moneysum;
	char ans;
	do
	{
		money1.mstold();
		money2.mstold();
		moneysum.madd(money1, money2);
		moneysum.display();
		cout << "\nПовторить?" << endl;
		cin.get();
	} while (cin.get() != 'n');
	system("pause");
	return 0;
}
