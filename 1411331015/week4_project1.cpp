#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int volume(int);
double volume(int, int);
int volume(int, int, int);

int main()
{
    int a, b, c;
    double result;

    cout << "�п�J�@�Ӿ�ơG";
    cin >> a;
    cout << "��������n�G" << volume(a) << endl;

    cout << "�п�J��Ӿ�ơG";
    cin >> a >> b;
    cout << "��W����n�G" << volume(a, b) << endl;

    cout << "�п�J�T�Ӿ�ơG";
    cin >> a >> b >> c;
    cout << "��������n�G" << volume(a, b, c) << endl;

    cout << "finished!" << endl;

    return 0;
}

int volume(int a)
{
    return a * a * a;
}


double volume(int a, int b)
{
    return 3.14159 * a * a * b;  // �k * r^2 * h
}


int volume(int a, int b, int c)
{
    return a * b * c;
}
