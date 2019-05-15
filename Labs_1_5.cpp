// Labs_1_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
	char a;
	cout << "Введите заглавную или строчную букву: ";
	cin >> a;
	cout << islower(a) << endl;
	return 0;
}
