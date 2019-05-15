// Labs_6_9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
class Queue
{
private:
	enum { MAX = 10 };
	int st[MAX];
	int head;
	int tail;
public:
	Queue()
	{
		head = tail = 0;
	}
	void put(int var)
	{
		st[tail++] = var;
		if (head > 0) head--;
	}
	int get()
	{
		if (tail > 0)tail--;
		return st[head++];
	}
};
int main()
{
	Queue s1;
	s1.put(11);
	s1.put(22);
	cout << "1: " << s1.get() << endl;
	cout << "2: " << s1.get() << endl;
	s1.put(33);
	s1.put(44);
	s1.put(55);
	s1.put(66);
	cout << "3: " << s1.get() << endl;
	cout << "4: " << s1.get() << endl;
	cout << "5: " << s1.get() << endl;
	cout << "6: " << s1.get() << endl;
	cin.get();
	return 0;
}
