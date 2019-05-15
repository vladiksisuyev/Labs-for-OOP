// Labs_5_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>  
#include <cmath>
using namespace std;
class Fraction
{
private:
	int numerator, denominator;
public:
	Fraction() :numerator(0), denominator(0)
	{}
	void get_fr()
	{
		char ch;
		cout << "Введите дробь:" << endl;
		cin >> numerator >> ch >> denominator;
	}
	void add_fr(Fraction f1, Fraction f2)
	{
		numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
		denominator = f1.denominator * f2.denominator;
	}
	void sub_fr(Fraction f1, Fraction f2)
	{
		numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
		denominator = f1.denominator * f2.denominator;
	}
	void mul_fr(Fraction f1, Fraction f2)
	{
		numerator = f1.numerator * f2.denominator;
		denominator = f1.denominator * f2.denominator;
	}
	void div_fr(Fraction f1, Fraction f2)
	{
		numerator = f1.numerator * f2.denominator;
		denominator = f1.denominator * f2.numerator;
	}
	void lowterms()
	{
		long tnum, tden, temp, gcd;
		tnum = labs(numerator);
		tden = labs(denominator);
		if (tden == 0)
		{
			cout << "Недопустимый знаменатель!"; exit(1);
		}
		else if (tnum == 0)
		{
			numerator = 0; denominator = 1; return;
		}

		while (tnum != 0)
		{
			if (tnum < tden)
			{
				temp = tnum; tnum = tden; tden = temp;
			}
			tnum = tnum - tden;
		}
		gcd = tden;
		numerator = numerator / gcd;
		denominator = denominator / gcd;
	}
	void disp_fr()const
	{
		cout << numerator << "/" << denominator << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	char zn;
	do
	{
		Fraction fr1, fr2, fr_sum;
		fr1.get_fr();
		cout << "Введите знак:" << endl; cin >> zn;
		fr2.get_fr();
		switch (zn)
		{
		case '+': fr_sum.add_fr(fr1, fr2); break;
		case '-': fr_sum.sub_fr(fr1, fr2); break;
		case '*': fr_sum.mul_fr(fr1, fr2); break;
		case '/': fr_sum.div_fr(fr1, fr2); break;
		}
		fr_sum.lowterms();
		fr_sum.disp_fr();
		cout << "Продолжить? (y/n)" << endl; cin >> zn;
	} while (zn != 'n');
	return 0;
}
