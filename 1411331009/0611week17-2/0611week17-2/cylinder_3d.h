#pragma once
#include "shape.h"

class cylinder_3d : public shape
{
private:
    double height; // 高度
    double pi = 3.14;

public:
    cylinder_3d() {
        cout << "請輸入圓柱體的高度: ";
        cin >> height;
    }

    void compute_volume() const {
        double volume = get_area() * height;
        cout << "圓柱體的體積: " << volume << endl;
    }

    void compute_surface() const {
        double surface_area = 2 * pi * radius * (radius + height);
        cout << "圓柱體的表面積: " << surface_area << endl;
    }

    void display() const override {
        shape::display();  // 顯示半徑
        cout << "圓柱體的高度: " << height << endl;
        compute_volume();
        compute_surface();
    }
};

