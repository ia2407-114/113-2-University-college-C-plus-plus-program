#include <iostream>
#include <string>
using namespace std;


int main()
{
	string a;
	cout << "�п�J�q�ܸ��X" << endl;
	cin >> a;
	cout << "�A��J���q�ܸ��X��:" << a.substr(0, 4) << "-" << a.substr(4, 3) << "-" << a.substr(7, 9) << endl;
	return 0;
}
