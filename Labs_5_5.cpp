// Labs_5_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>   
using namespace std;
char ch = '/';
class Date
{
private:
	int day, month, year;
public:
	Date() : month(0), day(0), year(0)
	{}
	Date(int d, int m, int y) : month(m), day(d), year(y)
	{}
	void getdate()
	{
		cout << "Введите день, месяц и год (XX/XX/XXXX): " << endl;
		cin >> day >> ch >> month >> ch >> year;
	}
	void showdate()const
	{
		cout << "Вы ввели дату: " << day << ch << month << ch << year << endl;
	};
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Date date;
	date.getdate();
	date.showdate();
	system("pause");
	return 0;
}
