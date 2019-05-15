// Labs_6_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	void mul_fr(Fraction f1, int n) //метод деления суммы дробей на количество их самих (умножение знаменателя на это число)
	{
		denominator = f1.denominator * n;
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
		cout << "\nв среднем " << numerator << "/" << denominator << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Fraction fraction[100];
	Fraction frtemp, frsum;
	char ans;
	int n = 0;
	do //ввод дробей в массив
	{
		fraction[n++].get_fr();
		cout << "продолжить ввод? (y/n)" << endl; cin >> ans;
	} while (ans != 'n');
	for (int j = 0; j < n; j++)
	{
		frtemp.add_fr(fraction[j], fraction[j++]);
		j++;
		frsum.add_fr(frtemp, frsum);
	}
	frsum.mul_fr(frsum, n + 1);
	frsum.disp_fr(); //вывод на экран
	system("pause");
	return 0;
}
