#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int volume(int);
int volume(int, int);
int volume(int, int, int);

int main()
{
	double sidevalue = 10.0;


	int a, b, c;
	float result;

	cout << "請輸入一個整數" << endl;
	cin >> a;
	cout << volume(a);

	cout << "請輸入二個整數" << endl;
	cin >> a;
	cout << volume(a, b);

	cout << "請輸入三個整數" << endl;
	cin >> a, b, c;
	cout << volume(a, b, c);
	cout << "finished!" << endl;
}

int main()
{
    int a, b, c;
    double result;

    cout << "請輸入一個整數：";
    cin >> a;
    cout << "正方體體積：" << volume(a) << endl;

    cout << "請輸入兩個整數：";
    cin >> a >> b;
    cout << "圓柱體體積：" << volume(a, b) << endl;

    cout << "請輸入三個整數：";
    cin >> a >> b >> c;
    cout << "長方體體積：" << volume(a, b, c) << endl;

    cout << "finished!" << endl;

    return 0;
}

int volume(int a)
{
    return a * a * a;
}


double volume(int a, int b)
{
    return 3.14159 * a * a * b;  // π * r^2 * h
}


int volume(int a, int b, int c)
{
    return a * b * c;
}
