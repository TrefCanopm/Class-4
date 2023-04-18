#pragma once

#include <iostream>
#include "Triad.h"

using namespace std;

class Data : public Triad
{
	int year;
	int month;
	int day;
public:
	Data();
	Data(int y, int m, int d);
	Data(const Data&);
	
	void plus();
	void plusD(int d);

	void print();
};