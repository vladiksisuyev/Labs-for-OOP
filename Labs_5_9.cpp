// Labs_5_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>   
using namespace std;
class Fraction
{
private:
	int numerator, denominator;
public:
	Fraction() :numerator(0), denominator(0)
	{}
	Fraction(int num, int denom) : numerator(num), denominator(denom)
	{}
	char ch;
	void get_fr()
	{
		cout << "Введите дробь:" << endl;
		cin >> numerator >> ch >> denominator;
	}
	void add_fr(Fraction f1, Fraction f2)
	{
		numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
		denominator = f1.denominator * f2.denominator;
	}
	void disp_fr()
	{
		cout << numerator << "/" << denominator << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Fraction fr1, fr2, fr_sum;
	char ch;
	do
	{
		fr1.get_fr();
		fr2.get_fr();
		fr_sum.add_fr(fr1, fr2);
		fr_sum.disp_fr();
		cout << "Заново? (y/n)" << endl; cin >> ch;
	} while (ch != 'n');
	return 0;
}
