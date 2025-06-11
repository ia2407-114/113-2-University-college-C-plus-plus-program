#include <iostream>
#include <string>
#include "air.h"
using namespace std;

// 父類別：圓周長
Circ_1D::Circ_1D() {
    cout << "請輸入半徑: ";
    cin >> radius;
}

double Circ_1D::compute_circ() {
    return 2 * pi * radius;
}

void Circ_1D::display_radius() {
    cout << "半徑: " << radius << endl;
    cout << "圓周長: " << compute_circ() << endl;
}

// -------------------------------------------

// 甜筒類別
Cron_3D::Cron_3D() {
    cout << "請輸入甜筒高度: ";
    cin >> height;
    compute_volume();
}

void Cron_3D::compute_volume() {
    volume = (1.0 / 3) * pi * radius * radius * height;
}

void Cron_3D::display_cron() {
    display_radius();
    cout << "甜筒底面半徑: " << radius << endl;
    cout << "甜筒高度: " << height << endl;
    cout << "甜筒體積: " << volume << endl;
}

// -------------------------------------------

// 圓餅類別
Pie_2D::Pie_2D() {
    compute_area();
}

void Pie_2D::compute_area() {
    area = pi * radius * radius;
}

void Pie_2D::display_pie() {
    display_radius();
    cout << "圓餅面積: " << area << endl;
}

// -------------------------------------------

// 圓柱體類別
Cylinder_3D::Cylinder_3D() {
    cout << "請輸入圓柱體高度: ";
    cin >> height;
    compute_volume();
    compute_surface();
}

void Cylinder_3D::compute_volume() {
    volume = pi * radius * radius * height;
}

void Cylinder_3D::compute_surface() {
    surface = 2 * pi * radius * (radius + height);
}

void Cylinder_3D::display_cylinder() {
    display_radius();
    cout << "圓柱體高度: " << height << endl;
    cout << "圓柱體體積: " << volume << endl;
    cout << "圓柱體表面積: " << surface << endl;
}
