// Labs_2_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, e, f;
	char ch, zn;
	do
	{
		cout << "Введите 1-ю дробь:" << endl;
		cin >> a >> ch >> b;
		cout << "Введите знак:" << endl;
		cin >> zn;
		cout << "Введите 2-ю дробь" << endl;
		cin >> c >> ch >> d;
		switch (zn)
		{
		case '+': e = a * d + b * c;
			f = b * d; break;
		case '-':  e = a * d - b * c;
			f = b * d; break;
		case '*': e = a * c;
			f = b * d; break;
		case '/': e = a * d;
			f = b * c; break;
		}
		cout << e << ch << f << endl;
		cout << "Продолжить? (y,n)" << endl;
		cin >> ch;
	} while (ch != 'n');
	return 0;
}
