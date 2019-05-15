// Labs_2_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int guest, place, var, variant = 1;
	cout << "Введите колличество гостей: ";
	cin >> guest;
	cout << "\nВведите колличество мест: ";
	cin >> place;
	var = guest - place;
	for (int j = guest; j > var; j--)
		variant *= j;
	cout << "Число вариантов: " << variant << endl;
	system("pause");
	return 0;
}
