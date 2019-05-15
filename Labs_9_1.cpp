// Labs_9_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float flarr[100];
	char ch;
	int num = 0;
	do
	{
		cout << "Введите номер: ";
		cin >> *(flarr + num++);
		cout << " Введите другой: (y/n)? ";
		cin >> ch;
	} while (ch != 'n');
	float total = 0.0;
	for (int k = 0; k < num; k++)
		total += *(flarr + k);
	float average = total / num;
	cout << "Средний: " << average << endl;
	return 0;
}

