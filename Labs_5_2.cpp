// Labs_5_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>   
#include <conio.h>
using namespace std;
class tollBooth
{
private:
	unsigned int car;
	double cash;
public:
	tollBooth() : car(-1), cash(0)
	{}
	void payingCar()
	{
		car++; cash += 0.5;
	}
	void nopayCar()
	{
		car++;
	}
	void display()const
	{
		cout << car << " car " << cash << " cash" << endl;
	}
};
int main()
{
	tollBooth road;
	char ch;
	do
	{
		cout << "\nenter 'p' for paying car, enter 'n' for not paying car, enter 'ESC' to display cash and exit" << endl;
		ch = _getche();
		if (ch == 'p')
			road.payingCar();
		else road.nopayCar();
	} while (ch != 27);
	road.display();
	system("pause");
	return 0;
}
