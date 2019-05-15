// Labs_4_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int hour, mins, secs;
unsigned long hms_to_secs(int, int, int);
int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned long seconds;
	char ch;
	do
	{
		cout << "Введите часы:" << endl; cin >> hour;
		cout << "Введите минуты:" << endl; cin >> mins;
		cout << "Введите секунды:" << endl; cin >> secs;
		seconds = hms_to_secs(hour, mins, secs);
		cout << "Всего секунд: " << seconds << endl;
		cout << "Повторить? (y/n) ";
		cin >> ch;
	} while (ch != 'n');
}
unsigned long hms_to_secs(int h, int m, int s)
{
	unsigned long seconds = h * 60 * 60 + m * 60 + s;
	return seconds;
}
