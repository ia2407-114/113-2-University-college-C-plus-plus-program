#include <iostream>
using namespace std;

// �禡�ŧi
int volume(int);
double volume(int, int);
int volume(int, int, int);

int main()
{
    int a, b, c;

    cout << "�п�J�@�Ӿ�ơG" << endl;
    cin >> a;
    cout << "�Ӽƪ��ߤ���n���G" << volume(a) << endl;

    cout << "�п�J��Ӿ�ơG" << endl;
    cin >> a >> b;
    cout << "�Ӷ�W��n���G" << volume(a, b) << endl;

    cout << "�п�J�T�Ӿ�ơG" << endl;
    cin >> a >> b >> c;
    cout << "�Ӫ�����n���G" << volume(a, b, c) << endl;

    cout << "finished!" << endl;

    return 0;
}

// �p��ߤ��骺��n
int volume(int a)
{
    return a * a * a;
}

// �p���W�骺��n
double volume(int a, int b)
{
    return a * a * 3.14159 * b;
}

// �p������骺��n
int volume(int a, int b, int c)
{
    return a * b * c;
}