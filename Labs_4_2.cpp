// Labs_4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>         
using namespace std;
double power(double, int = 2);
double n, res = 1;
int p;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер:" << endl;
	cin >> n;
	cout << "Степень числа:" << endl;
	cin >> p;
	power(n, p);
	cout << "Результат: " << res << endl;
	system("pause");
	return 0;
}
double power(double numb, int pow)
{
	for (int j = 1; j <= pow; j++)
		res *= n;
	return res;
}
