// Labs_3_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct Distance
{
	int feet;
	float inches;
};

struct volume
{
	Distance length;
	Distance width;
	Distance height;

};
int main()
{
	float l, w, h;
	volume room1 = { {6, 3.23}, {7, 8.45}, {7, 9.57} };
	l = room1.length.feet + room1.length.inches / 12.0;
	w = room1.width.feet + room1.width.inches / 12.0;
	h = room1.height.feet + room1.height.inches / 12.0;
	cout << "V = " << l * w*h << " sqr feets" << endl;
	system("pause");
	return 0;
}
