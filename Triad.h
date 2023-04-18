#pragma once

#include <iostream>

using namespace std;

class Triad
{
protected:
	int first;
	int second;
	int third;
public:
	virtual void print();

	Triad();
	Triad(int first, int second, int third);
	Triad(const Triad&);

	void setFirst(int f);
	void setSecond(int s);
	void setThird(int t);
	void setTriad(int f, int s, int t);

	friend std::istream& operator >> (std::istream& in,Triad&);

	void plus();

	~Triad() {};
};