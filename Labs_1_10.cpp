// Labs_1_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int f, s, p;
	cout << "Введите количество фунтов: ";
	cin >> f;
	cout << "Введите количество шиллингов: ";
	cin >> s;
	cout << "Введите количество пенсов: ";
	cin >> p;
	cout << "Десятичных фунтов: " << f + ((static_cast<float>(s) * 12 + p) / 240) << endl;
	return 0;
}
