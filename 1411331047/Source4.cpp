// Fig. 15.10: fig15_10.cpp
// Overloaded functions.
#include <iostream>
using namespace std;

// function square for int values
double E(int);
double E(int,int);
double E(int,int,int);
int main()
{
	int a, b, c;
	cout << "�п�J���������:" << endl;
	cin >> a;
	cout << "��������n:" << E(a) << endl;
	cout << "�п�J��W��b�|�B��:";
	cin >> a >> b;
	cout << "��W����n:" << E(a,b) << endl;
	cout << "�п�J��������B�e�B��:";
	cin >> a>>b>>c;
	cout << "��������n:" << E(a,b,c) << endl;
}
double E(int a)
{
	return a*a*a ;
}
double E(int a,int b)
{
	return a * a * 3.14 * b;
}
double E(int a,int b,int c)
{
	return a * b * c;
}