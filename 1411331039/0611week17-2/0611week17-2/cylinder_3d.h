#pragma once
#include "shape.h"

class cylinder_3d : public shape
{
private:
    double height; // ����
    double pi = 3.14;

public:
    cylinder_3d() {
        cout << "�п�J��W�骺����: ";
        cin >> height;
    }

    void compute_volume() const {
        double volume = get_area() * height;
        cout << "��W�骺��n: " << volume << endl;
    }

    void compute_surface() const {
        double surface_area = 2 * pi * radius * (radius + height);
        cout << "��W�骺���n: " << surface_area << endl;
    }

    void display() const override {
        shape::display();  // ��ܥb�|
        cout << "��W�骺����: " << height << endl;
        compute_volume();
        compute_surface();
    }
};

