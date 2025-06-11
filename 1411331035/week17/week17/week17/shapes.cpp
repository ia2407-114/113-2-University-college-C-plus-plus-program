#include "shapes.h"
#include <iostream>
using namespace std;

Circ_1D::Circ_1D() {
    cout << "�п�J�b�|: ";
    cin >> radius;
}

void Circ_1D::compute_circ() {}

Pie_2D::Pie_2D() : Circ_1D() {}

void Pie_2D::compute_area() {
    area = pi * radius * radius;
}

Cron_3D::Cron_3D() : Circ_1D() {
    cout << "�п�J��������: ";
    cin >> height;
}

void Cron_3D::compute_volume() {
    volume = (1.0 / 3.0) * pi * radius * radius * height;
}

Cylinder_3D::Cylinder_3D() : Pie_2D() {
    cout << "�п�J��W�鰪��: ";
    cin >> height;
}

void Cylinder_3D::compute_volume() {
    Pie_2D::compute_area();
    volume = area * height;
}

void Cylinder_3D::compute_surface() {
    surface = 2 * area + (2 * pi * radius * height);
}

Castle::Castle() : Cron_3D(), Cylinder_3D() {
    cout << "�п�J���Ӫ��`����: ";
    cin >> height;
}

void Castle::compute_volume() {
    Cron_3D::compute_volume();
    Cylinder_3D::compute_volume();
    volume = Cron_3D::volume + Cylinder_3D::volume;
}

void Castle::compute_height() {
    cout << "���Ӫ����׬�: " << height << endl;
}