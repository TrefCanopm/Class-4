#include <iostream>
#include "Triad.h"
#include "Data.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");

	Data d;
	Triad t;

	bool f = 1;
	int n, x, y, z;
	while (f)
	{
		cout << "Изменение объекта Triad" << endl;
		cout << "1) Изменить поле first" << endl;
		cout << "2) Изменить поле second" << endl;
		cout << "3) Изменить поле third" << endl;
		cout << "4) Изменить все три поля" << endl;
		cout << "5) Не чего не изменять" << endl;
		cout << "" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			cout << "Введите число на которое нелобходимо заминить данные выбраном поле" << endl;
			cin >> x;
			t.setFirst(x);
		}
		case 2:
		{
			cout << "Введите число на которое нелобходимо заминить данные выбраном поле" << endl;
			cin >> x;
			t.setSecond(x);
		}
		case 3:
		{
			cout << "Введите число на которое нелобходимо заминить данные выбраном поле" << endl;
			cin >> x;
			t.setThird(x);
		}
		case 4:
		{
			cout << "Введите число на которое нелобходимо заминить данные в поле first" << endl;
			cin >> x;
			cout << "Введите число на которое нелобходимо заминить данные в поле second" << endl;
			cin >> y;
			cout << "Введите число на которое нелобходимо заминить данные в поле third" << endl;
			cin >> z;
			t.setTriad(x, y, z);
		}
		case 5:
		{
			f = 0;
		}
		}
	}
	t.print();
	d.plus();
	d.print();
	cout << "Сколько дней необходимо прибавить" << endl;
	cin >> x;
	d.plusD(x);
	d.print();
}