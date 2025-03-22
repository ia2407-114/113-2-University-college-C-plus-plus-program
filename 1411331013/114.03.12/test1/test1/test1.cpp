#include <iostream>
using namespace std;
int volume(int);
double volume(int, int);
int volume(int, int, int);

int volume(int a)
{
	return a * a * a;
}

double volume(int a, int b)
{
	return a * a * 3.14 * b;
}

int volume(int a,int b,int c)
{
	return a * b * c;
}

int main()
{
	int a, b, c;
	float result;
	cout << "請輸入一個整數:" << endl;
	cin >> a;
	cout <<"正方體體積為:" << volume(a);

	cout << "\n請輸入兩個整數:" << endl;
	cin >> a>>b;
	cout <<"圓柱體體積為:" << volume(a, b);

	cout << "\n請輸入三個整數:" << endl;
	cin >> a>>b>>c;
	cout <<"長方體體積為:" << volume(a, b, c);

	cout << "\nfinished" << endl;
}
