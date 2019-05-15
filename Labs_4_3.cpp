// Labs_4_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>         
using namespace std;
void zeroSmaller(int&, int&);
int n1, n2;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите 1-й номер:" << endl;
	cin >> n1;
	cout << "Введите 2-й номер:" << endl;
	cin >> n2;
	zeroSmaller(n1, n2);
	cout << n1 << " " << n2 << endl;
	system("pause");
	return 0;
}
void zeroSmaller(int& num1, int& num2)
{
	if (num1 > num2)
		num2 = 0;
	else num1 = 0;
}
