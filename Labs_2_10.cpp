// Labs_2_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double vklad, zhel, proz, s, sum, let = 0;
	setlocale(0, "");
	cout << "Введите начальный вклад: ";
	cin >> vklad;
	cout << " \nВведите желаемую сумму: ";
	cin >> zhel;
	cout << "\nВведите процентную ставку: ";
	cin >> proz;
	sum = vklad;
	do
	{
		s = sum / 100 * proz;
		sum = s + sum;
		let++;
	} while (sum <= zhel);
	cout << "Через " << let << " лет вы получите " << sum << " долларов" << endl;
	system("pause");
	return 0;
}
