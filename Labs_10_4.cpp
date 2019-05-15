// Labs_10_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
class Array
{
private:
	int* ptr;
	int size;
public:
	Array(int s)
	{
		size = s;
		ptr = new int[s];
	}
	~Array()
	{
		delete[] ptr;
	}
	int& operator [] (int j)
	{
		return *(ptr + j);
	}
};
int main()
{
	const int ASIZE = 10;
	Array arr(ASIZE);
	for (int j = 0; j < ASIZE; j++)
		arr[j] = j * j;
	for (int j = 0; j < ASIZE; j++)
		cout << arr[j] << ' ';
	cout << endl;
	return 0;
}

