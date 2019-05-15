// Labs_1_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 10;
	cout << a << endl;
	a += 10;
	cout << a-- << endl << a << endl;
	return 0;
}
