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
    float result;

    cout << "�п�J�@�Ӿ��" << endl;
    cin >> a;
    cout << "�ߤ��骺��n�O: " << volume(a) << endl;

    cout << "�п�J��Ӿ��" << endl;
    cin >> a >> b;
    cout << "��W�骺��n�O: " << volume(a, b) << endl;

    cout << "�п�J�T�Ӿ��" << endl;
    cin >> a >> b >> c;
    cout << "�����骺��n�O: " << volume(a, b, c) << endl;

    cout << "����!" << endl;
}

int volume(int a)
{
    return a * a * a;
}

double volume(int a, int b)
{
    return a * a * 3.14159 * b;
}

int volume(int a, int b, int c)
{
    return a * b * c;
}
