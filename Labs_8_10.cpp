// Labs_8_10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
const int LEN = 80;
class student
{
private:
	char school[LEN];
	char degree[LEN];
public:
	void getedu()
	{
		cout << "  Введите название учебного заведения: ";
		cin >> school;
		cout << "  Введите степень высшего образования\n";
		cout << "  (неполное высшее, бакалавр, магистр, кандидат наук): ";
		cin >> degree;
	}
	void putedu() const
	{
		cout << "\n  Учебное заведение: " << school;
		cout << "\n  Степень: " << degree;
	}
};
class employee
{
private:
	char name[LEN];
	unsigned long number;
public:
	void getdata()
	{
		cout << "\n  Введите фамилию: "; cin >> name;
		cout << "  Введите номер: ";     cin >> number;
	}
	void putdata() const
	{
		cout << "\n  Фамилия: " << name;
		cout << "\n  Номер: " << number;
	}
};
class manager : private employee, private student
{
private:
	char title[LEN];
	double  dues;
public:
	void getdata()
	{
		employee::getdata();
		cout << "  Введите должность: "; cin >> title;
		cout << "  Введите сумму взносов в гольф-клуб: "; cin >> dues;
		student::getedu();
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  Должность: " << title;
		cout << "\n  Сумма взносов в гольф-клуб: " << dues;
		student::putedu();
	}
};
class executive : public manager
{
private:
	float premium;
	int stock;
public:
	void getdata()
	{
		manager::getdata();
		cout << "  Введите премию: "; cin >> premium;
		cout << "  Введите количество акций: "; cin >> stock;
	}
	void putdata()const
	{
		manager::putdata();
		cout << "\n  премия: " << premium;
		cout << "\n количество акций: " << stock;
	}
};
class scientist : private employee, private student
{
private:
	int pubs;
public:
	void getdata()
	{
		employee::getdata();
		cout << "  Введите количество публикаций: "; cin >> pubs;
		student::getedu();
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  Количество публикаций: " << pubs;
		student::putedu();
	}
};
class laborer : public employee // рабочий
{
};
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	setlocale(0, "");
	manager m1;
	executive e1;
	scientist s1;
	laborer l1;
	cout << endl;
	cout << "\nВвод информации о первом менеджере";
	m1.getdata();
	cout << "\nВвод информации о первом ученом";
	s1.getdata();
	cout << "\nВвод информации о первом управляющем";
	e1.getdata();
	cout << "\nВвод информации о первом рабочем";
	l1.getdata();
	cout << "\nИнформация о первом менеджере";
	m1.putdata();
	cout << "\nИнформация о первом ученом";
	s1.putdata();
	cout << "\nИнформация о первом управляющем";
	e1.putdata();
	cout << "\nИнформация о первом рабочем";
	l1.putdata();
	cout << endl;
	system("pause");
	return 0;
}

