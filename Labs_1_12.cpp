// Labs_1_12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float decpounds;
	int pounds;
	float decfrac;
	cout << "Введите число десятичных фунтов: ";
	cin >> decpounds;
	pounds = static_cast<int>(decpounds);
	decfrac = (decpounds - pounds) * 20;
	static_cast<int>(decpounds);
	decpounds = static_cast<int>((decfrac - static_cast<int>(decfrac)) * 12);
	cout << "Эквивалентная сумма в старой форме записи: £" << pounds << '.' << static_cast<int>(decfrac) << '.' << decpounds << endl;
	return 0;
}
