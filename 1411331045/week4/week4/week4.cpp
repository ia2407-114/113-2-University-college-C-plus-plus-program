#include <iostream> 
using namespace std;
int volume(int);
double volume(int, int);
int volume(int, int, int);
int a;int b; int c;
int main()
{
	double sideValue = 10.0;
	float result;
	cout << "請輸入一個整數" << endl;
	cin >> a;
	cout << volume(a) << endl;
	cout << "請輸入兩個整數" << endl;
	cin >> a >> b;
	cout << volume(a, b) << endl;
	cout << "請輸入三個整數" << endl;
	cin >> a >> b >> c;
	cout << volume(a, b, c) << endl;
	cout << "finished!" << endl;
}


int volume(int a)
{
	return a * a * a;
}

double volume(int a ,int b)
{
	return a * a * 3.14159 * b;
}

int volume(int a,int b ,int c)
{
	return a * b * c;
}

