#include <iostream>
#include "Data.h"
using namespace std;

Data::Data()
{
	year = 0;
	month = 0;
	day = 0;
}
Data::Data(int y, int m, int d)
{
	if (d > 30)
	{
		m = d / 30;
		day = d % 30;
	}
	else
	{
		day = d;
	}
	if (m > 12)
	{
		y = m / 12;
		month = m % 12;
	}
	else
	{
		month = m;
	}
	year = y;
}
Data::Data(const Data& d)
{
	day = d.day;
	month = d.month;
	year = d.year;
}

void Data::print()
{
	cout << year << ". " << month << ". " << day << endl;
}

void Data::plus()
{
	year++;
	month++;
	day++;
}

void Data::plusD(int d)
{
	if (day + d > 30)
	{
		month = (day + d) / 30;
		day = (day + d) % 30;
		if (month > 12)
		{
			year += month / 12;
			month = month % 12;
		}
	}
	else
	{
		day += d;
	}
}