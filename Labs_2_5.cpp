// Labs_2_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int y = 39, x = 1;
	do {
		int j = y;
		int d = x;
		do {
			cout << ' '; j--;
		} while (j != 0);
		do {
			cout << 'X'; d--;
		} while (d != 0);
		y -= 2;
		x += 2;
		cout << endl;
	} while (y > 0);
	_getche();
	return 0;
}

