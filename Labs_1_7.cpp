// Labs_1_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float t;
	cout << "Введите температуру в C° по Цельсию: ";
	cin >> t;
	cout << t << "°C = " << t * 9 / 5 + 32 << "°F" << endl;
	return 0;
}
