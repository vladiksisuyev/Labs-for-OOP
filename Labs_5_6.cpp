// Labs_5_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>   
using namespace std;
class Date
{
private:
public:
	int day, month, year;
	Date() : month(0), day(0), year(0)
	{}
	Date(int d, int m, int y) : month(m), day(d), year(y)
	{}
};
class Employee
{
private:
	int number;
	float salary;
	Date date;
	enum etype { laborer, secretary, manager, accountant, executive, researcher };
	etype post;
	char letter;
public:
	Employee() : number(0), salary(0)
	{}
	Employee(int num, float sal) : number(num), salary(sal)
	{}
	void get_empl()
	{
		char ch;
		cout << "Номер сотрудника:" << endl;
		cin >> number;
		cout << "Зарплата:" << endl;
		cin >> salary;
		cout << "Введите день, месяц и год работы (XX/XX/XXXX): " << endl;
		cin >> date.day >> ch >> date.month >> ch >> date.year;
		cout << "Введите первое почтовое письмо (laborer, secretary, manager, accountant, executive, researcher):" << endl;
		cin >> letter;
		switch (letter)
		{
		case 'l': post = laborer; break;
		case 's': post = secretary; break;
		case 'm': post = manager; break;
		case 'a': post = accountant; break;
		case 'e': post = executive; break;
		case 'r': post = researcher; break;
		}
	}
	void put_empl()const
	{
		cout << "Служащий " << number << ", Зарплата " << salary << "$," << " Дата трудоустройства " << date.day << "/" << date.month << "/" << date.year << ", post ";
		switch (post)
		{
		case laborer: cout << "laborer" << endl; break;
		case secretary: cout << "secretary" << endl; break;
		case manager: cout << "manager" << endl; break;
		case accountant: cout << "accountant" << endl; break;
		case executive: cout << "executive" << endl; break;
		case researcher: cout << "researcher" << endl; break;
		}
	};
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Employee empl_1, empl_2, empl_3;
	empl_1.get_empl();
	empl_2.get_empl();
	empl_3.get_empl();
	empl_1.put_empl();
	empl_2.put_empl();
	empl_3.put_empl();
	system("pause");
	return 0;
}
