// Labs_3_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct date
{
	int day, month, year;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	date date_1;
	char ch = '/';
	cout << "Введите день, месяц и год (XX/XX/XXXX) " << endl;
	cin >> date_1.day >> ch >> date_1.month >> ch >> date_1.year;
	cout << "Вы ввели дату: " << date_1.day << ch << date_1.month << ch << date_1.year << endl;
	system("pause");
	return 0;
}
