// Labs_6_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include<iostream>
using namespace std;
const int LIMIT = 10;
class Matrix
{
private:
	int array[10][10];
public:
	int rows, colums;
	Matrix(int r, int k) : rows(r), colums(k)
	{}
	void putel(int r, int k, int temp)
	{
		if (r<0 || r>LIMIT - 1 || k<0 || k>LIMIT - 1)
		{
			cout << "Внимание! переполнение массива!" << endl;;
			system("pause");
			exit(1);
		}
		array[r][k] = temp;
	}
	int getel(int r, int k)
	{
		if (r<0 || r>LIMIT - 1 || k<0 || k>LIMIT - 1)
		{
			cout << "Внимание! переполнение массива!" << endl;;
			system("pause");
			exit(1);
		}
		return array[r][k];
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Matrix m1(3, 4);
	int temp = 12345;
	m1.putel(7, 4, temp);
	temp = m1.getel(7, 4);
	cout << temp << endl;
	system("pause");
	return 0;
}

