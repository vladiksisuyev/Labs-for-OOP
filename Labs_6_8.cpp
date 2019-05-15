// Labs_6_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include<iostream>
using namespace std;
const int LIMIT = 100;
class Safearay
{
private:
	int array[LIMIT];
public:
	void putel(int n, int temp)
	{
		if (n<0 || n>LIMIT - 1)
		{
			cout << "Внимание! переполнение массива!" << endl;;
			system("pause");
			exit(1);
		}
		array[n] = temp;
	}
	int getel(int n)
	{
		if (n<0 || n>LIMIT - 1)
		{
			cout << "Внимание! переполнение массива!" << endl;;
			system("pause");
			exit(1);
		}
		return array[n];
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Safearay sal;
	int temp = 12345;
	sal.putel(7, temp);
	temp = sal.getel(7);
	cout << temp << endl;
	system("pause");
	return 0;
}
