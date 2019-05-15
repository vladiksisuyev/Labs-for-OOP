// Labs_5_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>   
using namespace std;
class Employee
{
private:
	int number;
	float salary;
public:
	Employee() : number(0), salary(0)
	{}
	Employee(int num, float sal) : number(num), salary(sal)
	{}
	void get_empl()
	{
		cout << "Номер сотрудника:" << endl;
		cin >> number;
		cout << "Зарплата:" << endl;
		cin >> salary;
	}
	void display()const
	{
		cout << "Служащий: " << number << ", Зарплата: " << salary << "$" << endl;
	};
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Employee empl_1, empl_2, empl_3;
	empl_1.get_empl();
	empl_2.get_empl();
	empl_3.get_empl();
	empl_1.display();
	empl_2.display();
	empl_3.display();
	system("pause");
	return 0;
}

