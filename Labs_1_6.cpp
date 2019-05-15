// Labs_1_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float dollar;
	cout << "Введите сумму в долларах $";
	cin >> dollar;
	cout << dollar << '$' << " эта сумма соответствует другим валютам: \n"
		<< dollar / 1.487 << " фут" << endl
		<< dollar / 0.172 << " франк" << endl
		<< dollar / 0.584 << " марк" << endl
		<< dollar / 0.00955 << " иен" << endl;
	return 0;
}
