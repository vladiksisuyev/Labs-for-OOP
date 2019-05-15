// Labs_2_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int j;
	unsigned long fact = 1;
	int ch;
	setlocale(0, "");
	do
	{
		fact = 1;
		cout << "Введите целое число: ";
		cin >> j;

		for (j; j > 0; j--)  
			fact *= j;                  
		cout << "Факториал числа равен " << fact << endl;
		cout << "еще раз? (нет - 0, да - 1)" << endl;
		cin >> ch;
	} while (ch != 0);

	return 0;
}
