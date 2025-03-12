#include <iostream>
using namespace std;

double R(int);
double R(int, int);
double R(int, int, int);

int main()
{
	int a, b, c;
	cout << "請輸入參數正方體:" << endl;
	cin >> a;
	cout << "答案:" << R(a) << endl;
	cout << "請輸入參數圓柱體:" << endl;
	cin >> a >> b;
	cout << "答案:" << R(a, b) << endl;
	cout << "請輸入參數長方體:" << endl;
	cin >> a >> b >> c;
	cout << "答案:" << R(a, b ,c) << endl;
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