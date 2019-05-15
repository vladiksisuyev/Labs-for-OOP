// Labs_9_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class person
{
protected:
	string name;
public:
	void setName()
	{
		cout << "Введите имя: "; cin >> name;
	}
	void printName()
	{
		cout << endl << name;
	}
	string getName()
	{
		return name;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	void bsort(person**, int);
	person* persPtr[100];
	int n = 0;
	char choice;
	do {
		persPtr[n] = new person;
		persPtr[n]->setName();
		n++;
		cout << "Ввести другое (y/n)? ";
		cin >> choice;
	} while (choice == 'y');
	cout << "\nНесортированный список:";
	for (int j = 0; j < n; j++)
	{
		persPtr[j]->printName();
	}
	bsort(persPtr, n);
	cout << "\nОтсортированный список:";
	for (int j = 0; j < n; j++)
	{
		persPtr[j]->printName();
	}
	cout << endl;
	return 0;
}
void bsort(person** pp, int n)
{
	void order(person**, person**);
	int j, k;
	for (j = 0; j < n - 1; j++)
		for (k = j + 1; k < n; k++)
			order(pp + j, pp + k);
}
void order(person** pp1, person** pp2)
{
	if ((*pp1)->getName() > (*pp2)->getName())
	{
		person* tempptr = *pp1;
		*pp1 = *pp2;
		*pp2 = tempptr;
	}
}

