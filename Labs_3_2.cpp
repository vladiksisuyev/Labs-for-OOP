// Labs_3_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct point
{
	int x;
	int y;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(0, "");
	point p1, p2, p3;
	cout << "Введите координаты р1:" << endl;
	cin >> p1.x >> p1.y;
	cout << "Введите координаты р2:" << endl;
	cin >> p2.x >> p2.y;
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	cout << "Координаты точки р1+р2 = " << p3.x << "." << p3.y << endl;
	system("pause");

	return 0;
}
