// Labs_7_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0)
	{ }
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist()
	{
		cout << "\nВведите футы: "; cin >> feet;
		cout << "Введите дюймы: ";  cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	Distance operator+(Distance d2) const
	{
		int f = feet + d2.feet;
		float i = inches + d2.inches;
		if (i >= 12.0)
		{
			i -= 12.0;
			f++;
		}
		return Distance(f, i);
	}
	Distance operator-(Distance d2) const
	{
		int f = feet - d2.feet;
		float i = inches - d2.inches;
		if (i < 0)
		{
			f--;
			i += 12.0;
		}
		return Distance(f, i);
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Distance dist1, dist3, dist4;
	dist1.getdist();
	Distance dist2(11, 6.25);
	dist3 = dist1 - dist2;
	dist4 = dist1 + dist2 + dist3;
	cout << "расстояние 1 = "; dist1.showdist(); cout << endl;
	cout << "расстояние 2 = "; dist2.showdist(); cout << endl;
	cout << "расстояние 3 = "; dist3.showdist(); cout << endl;
	cout << "расстояние 4 = "; dist4.showdist(); cout << endl;
	system("pause");
	return 0;
}
