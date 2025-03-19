#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int volume(int);
double volume(int,int);
int volume(int,int,int);

int main()
{
	double sideValue = 10.0;
	int a, b, c;
	float result;
	cout << "輸入一個整數" << endl;
	cin >> a;
	cout << "正方體:"<<volume(a)<<endl;

	cout << "輸入兩個整數" << endl;
	cin >> a>>b;
	cout << "圓柱體:"<<volume(a, b)<<endl;

	cout << "輸入三個整數" << endl;
	cin >> a>>b>>c;
	cout << "長方體:"<<volume(a, b, c)<<endl;
	cout << "finished" << endl;

}

int volume(int a)
{
	return a * a * a;
}
double volume(int a,int b)
{
	return a * a * 3.14*b;
}
int volume(int a,int b,int c)
{
	return a * b * c;
}