// Labs_7_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include<iostream>
#include <string>
#include <iomanip>
using namespace std;
class Sterling;
class bMoney;
class Sterling
{
private:
	long pounds;
	int shilling;
	int pens;
public:
	Sterling() : pounds(0), shilling(0), pens(0)
	{}
	Sterling(long po, int s, int pe) : pounds(po), shilling(s), pens(pe)
	{}
	Sterling(const bMoney& Mon);
	void getSterling()
	{
		cout << "Введите фунты: "; cin >> pounds;
		cout << "Введите шиллинги: "; cin >> shilling;
		cout << "Введите пенсы: "; cin >> pens;
	}
	void putSterling() const
	{
		cout << "Результат: J" << pounds << "." << shilling << "." << pens << endl;
	}
	long get_pounds() const
	{
		return pounds;
	}
	int get_shilling() const
	{
		return shilling;
	}
	int get_pens() const
	{
		return pens;
	}
};
class bMoney
{
private:
	string strMon;
	long double number;
public:
	bMoney() : number(0)
	{}
	bMoney(const Sterling ster);
	void mstold()
	{
		cout << "Введите сумму в десятичной точке. Конец со знаком доллара:" << endl;
		getline(cin, strMon, '$');
		int wlen = strMon.length();
		int n = 0;
		string num;
		for (int j = 0; j < wlen; j++)
			if (strMon[j] != ',' && strMon[j] != '$')
				num.push_back(strMon[j]); ;
		number = stold(num);
	}
	void display()const
	{
		cout << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2)
			<< "\n" << number << '$' << endl;
	}
	long double get_number() const
	{
		return number;
	}
};
Sterling::Sterling(const bMoney& Mon)
{
	long double dollar = Mon.get_number();
	int sumpens = (dollar / 50) * 20 * 12;
	pounds = sumpens / (20 * 12);
	shilling = sumpens % (20 * 12) / 12;
	pens = sumpens % (20 * 12) % 12;
}
bMoney::bMoney(const Sterling ster)
{
	long po = ster.get_pounds();
	int s = ster.get_shilling();
	int pe = ster.get_pens();
	number = (po * 50) + ((50 / 20)*s) + ((50 * 20 * 12)*pe);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	Sterling sterling, rsterling;
	bMoney dollars, rdollars;
	sterling.getSterling();
	dollars.mstold();
	rsterling = dollars;
	rdollars = sterling;
	rsterling.putSterling();
	rdollars.display();
	system("pause");
};

