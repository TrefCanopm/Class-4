#include <iostream>
#include "Triad.h"

using namespace std;

Triad::Triad()
{
	first = 0;
	second = 0;
	third = 0;
}
Triad::Triad(int f, int s, int t)
{
	first = f;
	second = s;
	third = t;
}
Triad::Triad(const Triad& t)
{
	first = t.first;
	second = t.second;
	third = t.third;
}

void Triad::print()
{
	cout << "1) " << first << endl;
	cout << "2) " << second << endl;
	cout << "3) " << third << endl;
}

std::istream& operator >> (std::istream& in, Triad& t)
{
	in >> t.first;
	in >> t.second;
	in >> t.third;
	return in;
}

void Triad::plus()
{
	first++;
	second++;
	third++;
}

void Triad::setFirst(int f)
{
	first = f;
}
void Triad::setSecond(int s)
{
	second = s;
}
void Triad::setThird(int t)
{
	third = t;
}
void Triad::setTriad(int f, int s, int t)
{
	first = f;
	second = s;
	third = t;
}