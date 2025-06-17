// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h"
using namespace std;

int main()
{
	string type, name;
	cout << "請輸入狗的種類：";
	cin >> type;

	cout << "請輸入狗的名字：";
	cin >> name;

	Date birth(7, 24, 1949);
	Date hire(3, 12, 1988);
	Pet manager(type, name, birth, Adoption);

	cout << endl;
	manager.print();
} // end main