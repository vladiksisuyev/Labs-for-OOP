// Labs_3_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	fraction f1, f2;
	char charvar = '/';
	cout << "Введите 1-ю дробь:" << endl;
	cin >> f1.numerator >> charvar >> f1.denominator;
	cout << "Введите 2-ю дробь:" << endl;
	cin >> f2.numerator >> charvar >> f2.denominator;
	cout << (f1.numerator * f2.denominator) + (f1.denominator * f2.numerator) << charvar << f1.denominator * f2.denominator << endl;
	system("pause");
	return 0;
}
