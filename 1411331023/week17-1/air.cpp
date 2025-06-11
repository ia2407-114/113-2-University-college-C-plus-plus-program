#include <iostream>
#include <string>
#include "air.h"
using namespace std;

Circ_1D::Circ_1D() {
    cout << "請輸入半徑: ";
    cin >> radius;
}

double Circ_1D::compute_circ() {
    return 2 * pi * radius;
}

void Circ_1D::display_radius() {
    cout << "半徑: " << radius << endl;
    cout << "圓周長: " << compute_circ() << endl;  // 顯示圓周長
}

Cron_3D::Cron_3D() {
    cout << "請輸入甜筒高度: ";
    cin >> height;
    compute_volume();
}

void Cron_3D::compute_volume() {
    volume = (1.0 / 3) * pi * radius * radius * height;
}

void Cron_3D::display_cron() {
    display_radius();  // 顯示圓周長
    cout << "甜筒底面半徑: " << radius << endl;
    cout << "甜筒高度: " << height << endl;
    cout << "甜筒體積: " << volume << endl;
}

Pie_2D::Pie_2D() {
    compute_area();
}

void Pie_2D::compute_area() {
    area = pi * radius * radius;
}

void Pie_2D::display_pie() {
    display_radius();  // 顯示圓周長
    cout << "圓餅面積: " << area << endl;
}
