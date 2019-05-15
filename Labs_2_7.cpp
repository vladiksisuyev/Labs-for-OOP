// Labs_2_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double vklad, let, proz, s, sum;
	setlocale(0, "");
	cout << "Введите начальный вклад: ";
	cin >> vklad;
	cout << " \nВведите число лет: ";
	cin >> let;
	cout << "\nВведите процентную ставку: ";
	cin >> proz;
	sum = vklad;
	for (int j = let; j > 0; j--)
	{
		s = sum / 100 * proz;
		sum = s + sum;
	}
	cout << "Через " << let << " лет вы получите " << sum << " долларов" << endl;
	system("pause");
	return 0;
}
