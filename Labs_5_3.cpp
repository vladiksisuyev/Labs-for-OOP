// Labs_5_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>   
using namespace std;
class Time
{
private:
	unsigned int hour, minutes, seconds;
public:
	Time() : hour(0), minutes(0), seconds(0)
	{}
	Time(unsigned int h, unsigned int m, unsigned int s) : hour(h), minutes(m), seconds(s)
	{}
	void display()const
	{
		cout << hour << ":" << minutes << ":" << seconds << endl;
	};
	void add_time(Time t1, Time t2)
	{
		long totalsecs = (t1.hour * 3600) + (t1.minutes * 60) + t1.seconds + (t2.hour * 3600) + (t2.minutes * 60) + t2.seconds;
		hour = totalsecs / (60 * 60);
		minutes = totalsecs % (60 * 60) / 60;
		seconds = totalsecs % (60 * 60) % 60;
	}
};
int main()
{
	const Time time_1(3, 5, 2), time_2(2, 5, 3);
	Time time_sum;
	time_sum.add_time(time_1, time_2);
	time_1.display(); time_2.display(); time_sum.display();
	system("pause");
	return 0;
}
