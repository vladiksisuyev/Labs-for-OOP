// Labs_1_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	cout << setfill('.') << setw(9) << "Город" << setw(15) << "Население" << endl
		<< setw(9) << "Москва" << setw(15) << pop1 << endl
		<< setw(9) << "Киров" << setw(15) << pop2 << endl
		<< setw(9) << "Угрюмовка" << setw(15) << pop3 << endl;
	return 0;
}

