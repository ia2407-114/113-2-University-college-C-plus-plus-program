// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h" // Pet class definition
using namespace std;

int main()
{
	string a, n;
	int y, m, d;
	cout << "請輸入寵物種類" << endl;
	cin >> a;
	cout << "請輸入寵物名字" << endl;
	cin >> n;
	cout << "請輸入寵物生日(年)" << endl;
	cin >> y;
	cout << "請輸入寵物生日(月)" << endl;
	cin >> m;
	cout << "請輸入寵物生日(日)" << endl;
	cin >> d;
	Date birth(m, d, y);
	cout << "請輸入寵物領養日(年)" << endl;
	cin >> y;
	cout << "請輸入寵物領養日(月)" << endl;
	cin >> m;
	cout << "請輸入寵物領養日(日)" << endl;
	cin >> d;



	Date hire(m, d, y);
	Pet manager(a, n, birth, hire);

	cout << endl;
	manager.print();
} // end main