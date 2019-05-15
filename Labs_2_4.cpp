// Labs_2_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double op, oper, rez;
	char ch;
	setlocale(0, "");
	do {
		cout << "Введите первый операнд, операцию и второй операнд:" << endl;
		cin >> op >> ch >> oper;
		switch (ch)
		{
		case '+': rez = op + oper; break;
		case '-': rez = op - oper; break;
		case '*': rez = op * oper; break;
		case '/': rez = op / oper; break;
		default:rez = 0;
		}
		cout << "Результат равен " << rez << endl;
		cout << "Выполнить еще одну операцию? (y,n)";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}
