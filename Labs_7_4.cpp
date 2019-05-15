// Labs_7_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>         
using namespace std;

class Int
{
private:
	long double num;
public:
	Int() : num(0)
	{}
	Int(long double n) : num(n)
	{}
	void disp_num()
	{
		if (num < 2147483648.0L && num > -2147483648.0L)
		{
			cout << num << endl;
		}
		else
		{
			cout << "error" << endl;
			exit(1);
		}
	}
	Int operator + (Int bet)
	{
		return num + bet.num;
	}
	Int operator - (Int bet)
	{
		return num - bet.num;
	}
	Int operator / (Int bet)
	{
		return  num / bet.num;
	}
	Int operator * (Int bet)
	{
		return num * bet.num;
	}
};
int main()
{
	Int gamma;
	Int alpha(3), beta(5);
	gamma = alpha + beta;
	cout << "\nalpha = "; alpha.disp_num();
	cout << "\nbeta  = "; beta.disp_num();
	cout << "\ngamma (alpha+beta) = "; gamma.disp_num();
	gamma = alpha - beta;
	cout << "\ngamma (alpha-beta) = "; gamma.disp_num();
	gamma = alpha / beta;
	cout << "\ngamma (alpha/beta) = "; gamma.disp_num();
	gamma = alpha * beta;
	cout << "\ngamma (alpha*beta) = "; gamma.disp_num();
	system("pause");
	return 0;
}
