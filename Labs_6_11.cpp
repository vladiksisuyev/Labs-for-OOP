// Labs_6_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;
class Money
{
protected:
	long double value; //значение с десятичной точкой
	long long   ipart; //значение без десятичной точки, первая часть выражения до точки
	long double fpart; //значение с десятичной точкой, вторая часть выражения, после точки
	string result; //строка
public:
	Money() //конструктор
	{
		value = 0;
		ipart = 0;
		fpart = 0;
	}
	bool getmoney() //получение значения
	{
		bool bFlag = false;
		cout << "Введите сумму без десятичной запятой:" << endl;
		if (!(cin >> value) || cin.get() != '\n')
			cout << "ошибка ввода" << endl;
		else
			if (bFlag = true)
			{
				ipart = long(value);
				fpart = value - ipart;
			}
		cin.clear(); //очистка буфера
		cin.sync(); //сброс флага ошибки
		return bFlag;
	}
	string ldtoms()
	{
		int i, j;
		string ibuffer; //строка
		string fbuffer; //строка
		stringstream is; //строковая операция ввода
		stringstream fs;
		result = "ошибка";
		if (is << fixed << ipart)
			if (is >> ibuffer)
				if (fs << fixed << fpart)
					if (fs >> fbuffer)
					{
						result = "";
						reverse(ibuffer.begin(), ibuffer.end()); //переворот строки
						for (i = 0; i < ibuffer.size(); i += 3)
						{
							for (j = 0; j < 3 && i + j < ibuffer.size(); j++)
								result += ibuffer[i + j];
							result += " ";
						}
						reverse(result.begin(), result.end());
						result = "$" + result + ".";
						fbuffer.erase(0, 1);
						fbuffer.erase(0, 1);
						result += fbuffer;
					}
		return result;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Money money;
	while (true)
	{
		money.getmoney();
		cout << "ldoms : " << money.ldtoms() << endl;
		system("pause");
	}
	return 0;
}
