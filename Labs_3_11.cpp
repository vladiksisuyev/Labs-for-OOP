// Labs_3_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct Time
{
	int hours;
	int minutes;
	int seconds;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Time t1, t2, tsum;
	char ch;
	cout << "Введите 1-е время (часы. минуты. секунды)" << endl;
	cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
	cout << "Введите 2-е время (часы. минуты. секунды)" << endl;
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
	long totalsecs = ((t1.hours * 3600) + (t1.minutes * 60) + t1.seconds) + ((t2.hours * 3600) + (t2.minutes * 60) + t2.seconds);
	tsum.hours = totalsecs / (60 * 60);
	tsum.minutes = totalsecs % (60 * 60) / 60;
	tsum.seconds = totalsecs % (60 * 60) % 60;
	cout << "Время: " << tsum.hours << ch << tsum.minutes << ch << tsum.seconds << endl;
	system("pause");
	return 0;
}
