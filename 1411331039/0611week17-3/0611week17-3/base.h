#pragma once
#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class base
{
protected:
    double radius; // �b�|
    double pi = 3.14;

public:
    base() {
        cout << "�п�J��Ϊ��b�|: ";
        cin >> radius;
    }

    double get_area() const {
        return pi * radius * radius;  // �ꭱ�n
    }

    void display_base() const {
        cout << "��Ϊ��b�|: " << radius << endl;
    }
};

