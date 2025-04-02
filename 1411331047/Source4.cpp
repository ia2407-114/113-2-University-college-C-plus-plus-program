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
	cout << "請輸入正方體長度:" << endl;
	cin >> a;
	cout << "正方體體積:" << E(a) << endl;
	cout << "請輸入圓柱體半徑、高:";
	cin >> a >> b;
	cout << "圓柱體體積:" << E(a,b) << endl;
	cout << "請輸入長方體長、寬、高:";
	cin >> a>>b>>c;
	cout << "長方體體積:" << E(a,b,c) << endl;
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