// Labs_8_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
class Counter
{
protected:
	int count;
public:
	Counter() : count(0)
	{ }
	Counter(int c) : count(c)
	{ }
	unsigned int get_count() const
	{
		return count;
	}
	Counter operator++()
	{
		return Counter(++count);
	}
};
class CountDn : public Counter
{
public:
	CountDn() : Counter()
	{ }
	CountDn(int c) : Counter(c)
	{ }
	CountDn operator--()
	{
		return CountDn(--count);
	}
};
class Postfix : public CountDn
{
public:
	Postfix() : CountDn()
	{}
	Postfix(int c) : CountDn(c)
	{}
	Postfix operator++(int)
	{
		return Postfix(count++);
	}
	Postfix operator--(int)
	{
		return Postfix(count--);
	}
};
int main()
{
	
	Counter* c1 = new Postfix;
	cout << "\nc1 = " << c1->get_count();
	++*c1; ++*c1; ++*c1;
	cout << "\nc1 = " << c1->get_count();
	CountDn* c2 = new Postfix;
	cout << "\nc2 = " << c2->get_count();
	--*c2; --*c2; --*c2;
	cout << "\nc2 = " << c2->get_count();
	Postfix c3, c4(10);
	c3 = c4++;
	c3.get_count();
	c3 = c4++;
	c3.get_count();
	cout << endl;
	cin.get();
	return 0;
}

