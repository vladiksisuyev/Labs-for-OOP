// Labs_6_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>  
#include <string>
using namespace std;
int main()
{
	int maxint(int[], int);
	int numbers[100];
	int n = 0;
	char ans;
	do
	{
		cout << "\nEnter number: "; cin >> numbers[n++];
		cout << "\nContinue typing? "; cin >> ans;
	} while (ans != 'n');
	cout << "\ngreatest value: " << numbers[maxint(numbers, n)] << ", index into the array: " << maxint(numbers, n) << endl;
	system("pause");
	return 0;
}
int maxint(int num[], int n)
{
	int max = 0, index = 0;
	for (int j = 0; j < n; ++j)
	{
		if (num[j] > max)
		{
			max = num[j];
			index = j;
		}
	}
	return index;
}

