// Labs_2_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	char ch;
	unsigned long total = 0;
	cout << "\nВведите номер: ";
	while ((ch = _getche()) != '\r')
		total = total * 10 + ch - '0';
	cout << "\nВы ввели номер: " << total << endl;
	return 0;
}
