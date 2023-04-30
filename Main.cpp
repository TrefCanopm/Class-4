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
		cout << "Changing the Triad object" << endl;
		cout << "1) Change the field first" << endl;
		cout << "2) Change the second field" << endl;
		cout << "3) Change the third field " << endl;
		cout << "4) Change all three fields" << endl;
		cout << "5) Don't change anything" << endl;
		cout << "Select action" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			cout << "Enter the number to replace the data in the selected field with" << endl;
			cin >> x;
			t.setFirst(x);
			break;
		}
		case 2:
		{
			cout << "Enter the number to replace the data in the selected field with" << endl;
			cin >> x;
			t.setSecond(x);
			break;
		}
		case 3:
		{
			cout << "Enter the number to replace the data in the selected field with" << endl;
			cin >> x;
			t.setThird(x);
			break;
		}
		case 4:
		{
			cout << "Enter the number to replace the data with in the field first" << endl;
			cin >> x;
			cout << "Enter the number to replace the data with in the field second" << endl;
			cin >> y;
			cout << "Enter the number to replace the data with in the field third" << endl;
			cin >> z;
			t.setTriad(x, y, z);
			break;
		}
		case 5:
		{
			f = 0;
			break;
		}
		}
	}
	t.print();
	d.plus();
	d.print();
	cout << "How many days do I need to add" << endl;
	cin >> x;
	d.plusD(x);
	d.print();
}