#include <iostream>
using namespace std;

double R(int);
double R(int, int);
double R(int, int, int);

int main()
{
	int a, b, c;
	cout << "�п�J�Ѽƥ�����:" << endl;
	cin >> a;
	cout << "����:" << R(a) << endl;
	cout << "�п�J�Ѽƶ�W��:" << endl;
	cin >> a >> b;
	cout << "����:" << R(a, b) << endl;
	cout << "�п�J�Ѽƪ�����:" << endl;
	cin >> a >> b >> c;
	cout << "����:" << R(a, b ,c) << endl;
	return 0;
}

double R(int q = 1)
{
	return q * q * q;
}	
double R(int q = 1, int w = 1)
{
	return 3.14 * (q * q) * w;
}
double R(int q = 1, int w = 1, int e = 1)
{
	return q * w * e;
}