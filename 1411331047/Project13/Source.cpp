// Fig. 10.1: fig10_01.cpp
// Standard Library string class test program.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;

    // test overloaded equality and relational operators
    cout << "�п�J�q�ܸ��X :";
    cin >> s1;

    // test string member function empty
    if (s1.length() == 10) {
        cout << s1.substr(0, 4) << "-"
            << s1.substr(4, 3) << "-"
            << s1.substr(7, 3) << endl;
    }
    else {
        cout << "�q�ܸ��X�榡�����T�A��J10�Ӹ��X" << endl;
    }
}
    