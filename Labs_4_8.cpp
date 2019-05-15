// Labs_4_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>         
using namespace std;
void swap(int&, int&);
int main()
{
	setlocale(LC_ALL, "Russian");
	int n1, n2;
	cout << "Введите 1-й номер:" << endl;
	cin >> n1;
	cout << "Введите 2-й номер:" << endl;
	cin >> n2;
	swap(n1, n2);
	cout << n1 << ' ' << n2 << endl;
	system("pause");
	return 0;
}
void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
