﻿// Labs_6_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include<iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
class Money
{
private:
	string strMon;
	long double summ;
public:
	long double mstold()
	{
		cout << "Введите сумму в десятичной точке. Конец со знаком доллара" << endl;
		getline(cin, strMon, '$');
		int wlen = strMon.length();
		int n = 0;
		string number;
		for (int j = 0; j < wlen; j++)
			if (strMon[j] != ',' && strMon[j] != '$')
				number.push_back(strMon[j]); ;
		summ = stold(number);
		return summ;
	}
	void display()const
	{
		cout << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2)
			<< "\n" << summ << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Money money;
	money.mstold();
	money.display();
	system("pause");
	return 0;
}
