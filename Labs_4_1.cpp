// Labs_4_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>         
using namespace std;
float circarea(float);
float rad, area;
const float PI = 3.14159F;
int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(0, "");
	cout << "Введите радиус окружности: ";
	cin >> rad;
	circarea(rad);
	cout << "Площадь круга равна: " << area << endl;
	system("pause");
	return 0;
}
float circarea(float radius)
{
	area = PI * rad * rad;
	return area;
}
