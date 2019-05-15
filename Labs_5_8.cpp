// Labs_5_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>   
using namespace std;
class Amount
{
private:
	int number;
	static int amount;
public:
	Amount()
	{
		amount++;
		number = amount;
	}
	void disp_num()
	{
		cout << "Мой серийный номер " << number << endl;
	}
};
int Amount::amount = 0;
int main()
{
	setlocale(LC_ALL, "Russian");
	Amount obj1, obj2, obj3;
	obj1.disp_num();
	obj2.disp_num();
	obj3.disp_num();
	system("pause");
	return 0;
}
