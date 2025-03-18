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

    cout << "請輸入一個整數" << endl;
    cin >> a;
    cout << "立方體的體積是: " << volume(a) << endl;

    cout << "請輸入兩個整數" << endl;
    cin >> a >> b;
    cout << "圓柱體的體積是: " << volume(a, b) << endl;

    cout << "請輸入三個整數" << endl;
    cin >> a >> b >> c;
    cout << "長方體的體積是: " << volume(a, b, c) << endl;

    cout << "完成!" << endl;
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
