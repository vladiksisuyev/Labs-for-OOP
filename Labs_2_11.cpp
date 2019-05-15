// Labs_2_11_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int funt, shill, pens, pens1, pens2, sumpens, operand;
	char ch, dot;
	setlocale(0, "");
	cout << "Введите первый операнд " << endl;
	cin >> funt >> dot >> shill >> dot >> pens;
	pens1 = funt * 20 * 12 + shill * 12 + pens;
	cout << "операцию " << endl;
	cin >> ch;
	cout << " и второй операнд:" << endl;
	if (ch == '*')
		cin >> operand;
	else
		cin >> funt >> dot >> shill >> dot >> pens;
	pens2 = funt * 20 * 12 + shill * 12 + pens1;
	switch (ch)
	{
	case '+': sumpens = pens + pens2; break;
	case '-': sumpens = pens - pens2; break;
	case '*': sumpens = pens * operand; break;
	}
	cout << "Всего: J" << sumpens / (20 * 12) << dot << sumpens % (20 * 12) / 12 << dot << sumpens % (20 * 12) % 12 << endl;
	system("pause");
	return 0;
}
