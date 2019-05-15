// Labs_1_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float g;
	cout << "Введите количество галлонов: \n";
	cin >> g;
	cout << g << " галлонов равно " << g / 7.481 << " кубических футов" << endl;
	return 0;
}
