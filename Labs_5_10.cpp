﻿// Labs_5_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>   
using namespace std;
class Ship
{
private:
	int number;
	static int amount;
	int degree;
	float min;
	char dir;
public:
	Ship() :number(0), degree(0), min(0), dir(0)
	{
		amount++;
		number = amount;
	}
	Ship(int num, int deg, float m, char d) : number(num), degree(deg), min(m), dir(d)
	{}
	void get_sh()
	{
		cout << "Введите степень:" << endl; cin >> degree;
		cout << "Введите минуты:" << endl; cin >> min;
		cout << "Введите направление (N, S, E, W):" << endl; cin >> dir;
	}
	void disp_sh()
	{
		cout << "Серийный номер: " << number << ", Направление: " << degree << '\xF8' << min << "'" << dir << endl;
	}
};
int Ship::amount = 0;
int main()
{
	setlocale(LC_ALL, "Russian");
	Ship ship1, ship2, ship3;
	ship1.get_sh();
	ship2.get_sh();
	ship3.get_sh();
	ship1.disp_sh();
	ship2.disp_sh();
	ship3.disp_sh();
	system("pause");
	return 0;
}
