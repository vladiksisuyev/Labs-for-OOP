// Labs_7_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
const int LIMIT = 100;
class safearray
{
private:
	int arr[LIMIT];
public:
	int& operator[](int n)
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "\nОшибочный индекс!"; exit(1);
		}
		return arr[n];
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	safearray sa1;
	int up, down, down2, differ = 0;
	cout << "Введите верхний предел массива:" << endl; cin >> up;
	cout << "Введите массив нижнего предела:" << endl; cin >> down;
	differ = up - 100;
	down2 = down;
	for (int i = down - differ; i < up - differ; i++)
		sa1[i] = (down2++) * 10;
	for (int i = down - differ; i < up - differ; i++)
	{
		int temp = sa1[i];
		cout << "Элемент " << down++ << " равный " << temp << endl;
	}
	system("pause");
	return 0;
}

