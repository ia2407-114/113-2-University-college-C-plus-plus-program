#pragma once
#include <iostream>
using namespace std;

class circ_1d
{
protected:
    double radius;  // 圓的半徑
    const double pi = 3.14;  // 圓周率

public:
    circ_1d() {
        cout << "請輸入圓形的半徑: ";
        cin >> radius;
    }

    // 計算圓周長
    double compute_circ() const {
        return 2 * pi * radius;
    }
};
