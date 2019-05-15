// Labs_1_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << setw(4) << 1990 << setw(6) << 135 << endl
		<< setw(4) << 1991 << setw(6) << 7290 << endl
		<< setw(4) << 1992 << setw(6) << 11300 << endl
		<< setw(4) << 1993 << setw(6) << 16200 << endl;
	return 0;
}
