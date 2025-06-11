#pragma once
#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class shape
{
protected:
    double radius; // 半徑
    double pi = 3.14;

public:
    shape() {
        cout << "請輸入圓柱體的半徑: ";
        cin >> radius;
    }

    virtual void display() const {
        cout << "圓柱體的半徑: " << radius << endl;
    }

    double get_area() const {
        return pi * radius * radius;  // 計算圓面積
    }
};

