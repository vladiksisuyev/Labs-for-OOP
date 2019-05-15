// Labs_1_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d; // a & c числители, b & d - знаменатели
	char s; //s - слэш
	cout << "Введите первую дробь: ";
	cin >> a >> s >> b; // Ввод дроби
	cout << "Введите вторую дробь: ";
	cin >> c >> s >> d;
	cout << "Сумма равна: " << a * d + b * c << '/' << b * d << endl;
	return 0;
}
