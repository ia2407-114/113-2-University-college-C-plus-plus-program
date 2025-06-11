#pragma once
#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class base
{
protected:
    double radius; // 半徑
    double pi = 3.14;

public:
    base() {
        cout << "請輸入圓形的半徑: ";
        cin >> radius;
    }

    double get_area() const {
        return pi * radius * radius;  // 圓面積
    }

    void display_base() const {
        cout << "圓形的半徑: " << radius << endl;
    }
};

