﻿// Labs_8_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;
class String
{
protected:
	enum { SZ = 80 };
	char str[SZ];
public:
	String()
	{
		str[0] = '\0';
	}
	String(char s[])
	{
		strcpy(str, s);
	}
	void display() const
	{
		cout << str;
	}
	operator char*()
	{
		return str;
	}
};
class Pstring : public String
{
public:
	Pstring(char s[]);
};
Pstring::Pstring(char s[])
{
	if (strlen(s) > SZ - 1)
	{
		for (int j = 0; j < SZ - 1; j++)
			str[j] = s[j];
		str[j] = '\0';
	}
	else
		String(s);
}
int main()
{
	Pstring s1 = "This is a very long string which is probably "
		"no, certainly--going to exceed the limit set by SZ.";
	cout << "\ns1="; s1.display();
	Pstring s2 = "This is a short string.";
	cout << "\ns2="; s2.display();
	cout << endl;
	return 0;
}
