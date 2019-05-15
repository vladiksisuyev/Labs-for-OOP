// Labs_2_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>  
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int j, num;
	char ch;
	cout << "Введите число: ";
	cin >> num;
	for (j = 1; j <= 200; j++)
	{
		ch = (j % 10) ? ' ' : '\n';
		cout << setiosflags(ios::left) << setw(6) << num * j << ch;
	}
	cout << endl;
	system("pause");
	return 0;
}
