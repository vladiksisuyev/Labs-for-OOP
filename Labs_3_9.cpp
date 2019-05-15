// Labs_3_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
	Time t1;
	cout << "Введите время через промежуток (часы, минуты, секунды):" << endl;
	cin >> t1.hours >> t1.minutes >> t1.seconds;
	long totalsecs = (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
	cout << "Количество секунд: " << totalsecs << endl;
	system("pause");
	return 0;
}
