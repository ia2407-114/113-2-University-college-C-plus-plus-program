// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h" // Pet class definition
using namespace std;

int main()
{
	string a, n;
	int y, m, d;
	cout << "�п�J�d������" << endl;
	cin >> a;
	cout << "�п�J�d���W�r" << endl;
	cin >> n;
	cout << "�п�J�d���ͤ�(�~)" << endl;
	cin >> y;
	cout << "�п�J�d���ͤ�(��)" << endl;
	cin >> m;
	cout << "�п�J�d���ͤ�(��)" << endl;
	cin >> d;
	Date birth(m, d, y);
	cout << "�п�J�d����i��(�~)" << endl;
	cin >> y;
	cout << "�п�J�d����i��(��)" << endl;
	cin >> m;
	cout << "�п�J�d����i��(��)" << endl;
	cin >> d;



	Date hire(m, d, y);
	Pet manager(a, n, birth, hire);

	cout << endl;
	manager.print();
} // end main