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
	cout << "��J�@�Ӿ��" << endl;
	cin >> a;
	cout << "������:"<<volume(a)<<endl;

	cout << "��J��Ӿ��" << endl;
	cin >> a>>b;
	cout << "��W��:"<<volume(a, b)<<endl;

	cout << "��J�T�Ӿ��" << endl;
	cin >> a>>b>>c;
	cout << "������:"<<volume(a, b, c)<<endl;
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