// Labs_5_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>         
using namespace std;
class Int
{
private:
	int num;
public:
	Int() : num(0)
	{}
	Int(int n) : num(n)
	{}
	void disp_num()
	{
		cout << num << endl;
	}
	void add_num(Int n1, Int n2)
	{
		num = n1.num + n2.num;
	}
};
int main()
{
	Int obj3;
	Int obj1(3), obj2(5);
	obj3.add_num(obj1, obj2);
	cout << "\nobject 1 = "; obj1.disp_num();
	cout << "\nobject 2 = "; obj2.disp_num();
	cout << "\nobject 3 = "; obj3.disp_num();
	system("pause");
	return 0;
}
