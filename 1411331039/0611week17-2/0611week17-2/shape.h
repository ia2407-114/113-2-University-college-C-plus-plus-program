#pragma once
#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class shape
{
protected:
    double radius; // �b�|
    double pi = 3.14;

public:
    shape() {
        cout << "�п�J��W�骺�b�|: ";
        cin >> radius;
    }

    virtual void display() const {
        cout << "��W�骺�b�|: " << radius << endl;
    }

    double get_area() const {
        return pi * radius * radius;  // �p��ꭱ�n
    }
};

