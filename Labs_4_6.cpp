// Labs_4_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
Time t1, t2, tsum;
long time_to_secs(Time);
Time secs_to_time(long);
int main()
{
	setlocale(LC_ALL, "Russian");
	long totalsecs;
	char ch;
	cout << "Введите 1-е время (часы. минуты. секунды)" << endl;
	cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
	cout << "Введите 2-е время (часы. минуты. секунды)" << endl;
	cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;
	totalsecs = time_to_secs(t1) + time_to_secs(t2);
	tsum = secs_to_time(totalsecs);
	cout << "Время: " << tsum.hours << ch << tsum.minutes << ch << tsum.seconds << endl;
	system("pause");
	return 0;
}
long time_to_secs(Time time)
{
	long totalsecs = ((time.hours * 3600) + (time.minutes * 60) + time.seconds);
	return totalsecs;
}
Time secs_to_time(long totalsecs)
{
	tsum.hours = totalsecs / (60 * 60);
	tsum.minutes = totalsecs % (60 * 60) / 60;
	tsum.seconds = totalsecs % (60 * 60) % 60;
	return tsum;
}
