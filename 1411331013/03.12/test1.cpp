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
	cout << "�п�J�@�Ӿ��:" << endl;
	cin >> a;
	cout <<"��������n��:" << volume(a);

	cout << "\n�п�J��Ӿ��:" << endl;
	cin >> a>>b;
	cout <<"��W����n��:" << volume(a, b);

	cout << "\n�п�J�T�Ӿ��:" << endl;
	cin >> a>>b>>c;
	cout <<"��������n��:" << volume(a, b, c);

	cout << "\nfinished" << endl;
}
