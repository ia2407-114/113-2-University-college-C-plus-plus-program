#include <iostream>
using namespace std;
int volume(int);
double volume(int, int);
int volume(int,int,int);
int a = 0;
int b = 0;
int c = 0;
int main()
{

    cout << "�п�J1�Ӿ�ơA�p�⥿������n:" << endl;
    cin >> a;
    cout << volume(a) << endl;
    cout << "�п�J2�Ӿ�ơA�p���W����n:" << endl;
    cin >> a >> b;
    cout << volume(a,b) << endl;
    cout << "�п�J3�Ӿ�ơA�p���������n:" << endl;
    cin >> a >> b >> c;
    cout << volume(a,b,c) << endl;
}
int volume(int a)
{
    return a*a*a;
}
double volume(int a,int b)
{
    return a * a * 3.14159 * b;
}
int volume(int a,int b,int c)
{
    return a * b * c;
}