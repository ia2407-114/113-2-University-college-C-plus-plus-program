#include <iostream>
using namespace std;

int main()
{
	int x = 3;
	int& y = x; // y refers to (is an alias for) x

	cout << "x = " << x << endl << "y = " << y << endl;
	y = 7; // actually modifies x
	cout << "x = " << x << endl << "y = " << y << endl;
}
