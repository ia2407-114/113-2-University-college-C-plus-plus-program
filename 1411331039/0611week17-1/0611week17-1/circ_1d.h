#pragma once
#include <iostream>
using namespace std;

class circ_1d
{
protected:
    double radius;  // �ꪺ�b�|
    const double pi = 3.14;  // ��P�v

public:
    circ_1d() {
        cout << "�п�J��Ϊ��b�|: ";
        cin >> radius;
    }

    // �p���P��
    double compute_circ() const {
        return 2 * pi * radius;
    }
};
