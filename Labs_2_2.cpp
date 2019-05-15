// Labs_2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float C, F, k;
	cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фарингейта и 2 для перевода шкалы Фарингейта в шкалу Цельсия:" << endl;
	cin >> k;
	if (k == 1)
	{
		cout << "Введите t по Цельсию:" << endl;
		cin >> C;
		F = C * 1.8 + 32;
		cout << "по Фарингейту: " << F << endl;
		system("pause");
	}
	else
	{
		cout << "Введите t по Фарингейту:" << endl;
		cin >> F;
		C = (F - 32) / 1.8;
		cout << "по Цельсию: " << C << endl;
		system("pause");
	}
	return 0;
}
