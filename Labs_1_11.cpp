// Labs_1_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << setiosflags(ios::left) << setw(15) << "Фамилия" << setw(20) << "Имя" << setw(20) << "Адресс" << setw(15) << "Город" << endl;
	cout << setw(75) << setfill('-') << "-" << endl;
	cout << setfill(' ') << setiosflags(ios::left) << setw(15) << "Петров" << setw(20) << "Василий" << setw(20) << "Клёновская 20" << setw(15) << "Санкт-Петербург" << endl;
	cout << setiosflags(ios::left) << setw(15) << "Иванов" << setw(20) << "Сергей" << setw(20) << "Осиновая 3" << setw(15) << "Находка" << endl;
	cout << setiosflags(ios::left) << setw(15) << "Сидоров" << setw(20) << "Иван" << setw(20) << "Берёзовая 21" << setw(15) << "Калининград" << endl;
	return 0;
}
