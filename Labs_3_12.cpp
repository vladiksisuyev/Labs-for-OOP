// Labs_3_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
struct fraction
{
	int numerator;
	int denominator;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	fraction f1, f2, sumf;
	char ch = '/', zn;
	do
	{
		cout << "Введите 1-ю дробь:" << endl;
		cin >> f1.numerator >> ch >> f1.denominator;
		cout << "Введите символ" << endl;
		cin >> zn;
		cout << "Введите 2-ю дробь:" << endl;
		cin >> f2.numerator >> ch >> f2.denominator;
		switch (zn)
		{
		case '+': sumf.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
			sumf.denominator = f1.denominator * f2.denominator; break;
		case '-':  sumf.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
			sumf.denominator = f1.denominator * f2.denominator; break;
		case '*': sumf.numerator = f1.numerator * f2.denominator;
			sumf.denominator = f1.denominator * f2.denominator; break;
		case '/': sumf.numerator = f1.numerator * f2.denominator;
			sumf.denominator = f1.denominator * f2.numerator; break;
		}
		cout << sumf.numerator << ch << sumf.denominator << endl;
		cout << "Продолжить? (y,n)" << endl;
		cin >> ch;
	} while (ch != 'n');
	return 0;
}
