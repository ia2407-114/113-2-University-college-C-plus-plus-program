#include <iostream>
using namespace std;

int square(int x)
{
	cout << "square of integer " << x << " is ";
	return x * x;
}

double square(double y)
{
	cout << "square of double " << y << " is ";
	return y * y;
}

int main()
{
	cout << square(7);
	cout << endl;
	cout << square(7.5);
	cout << endl;
}
