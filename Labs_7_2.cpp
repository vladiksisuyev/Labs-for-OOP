// Labs_7_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string.h>  
using namespace std;
class String
{
private:
	enum { SZ = 80 };
	char str[SZ];
public:
	String()
	{
		strcpy_s(str, "");
	}
	String(char s[])
	{
		strcpy_s(str, s);
	}
	void display() const
	{
		cout << str;
	}
	String operator += (String ss) const
	{
		String temp;
		if (strlen(str) + strlen(ss.str) < SZ)
		{
			strcpy_s(temp.str, str);
			strcat_s(temp.str, ss.str);
		}
		else
		{
			cout << "\nПереполнение!";
			exit(1);
		}
		return temp;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251 > nul");

	String s1 = "\nHappy New Year!  ";
	String s2 = "Merry Christmas!";
	String s3;
	s1.display();
	s2.display();
	s3.display();
	s3 = s1 += s2;
	s3.display();
	cout << endl;
	cin.get();
	return 0;
}
