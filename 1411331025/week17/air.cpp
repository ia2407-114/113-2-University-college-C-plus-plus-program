#include <iostream>
#include "air.h"
using namespace std;

// Circle ���O��@
Circle::Circle() {
    cout << "�п�J�ꪺ�b�|: ";
    cin >> radius;
    circumference = 2 * pi * radius;
}

void Circle::display() {
    cout << "�ꪺ�b�|: " << radius << endl;
    cout << "�ꪺ�P��: " << circumference << endl;
}

float Circle::getRadius() const {
    return radius;
}

// Area ���O��@
Area::Area() {
    area = pi * getRadius() * getRadius();
}

void Area::display() {
    cout << "�ꪺ���n: " << area << endl;
}

// ConeVolume ���O��@
ConeVolume::ConeVolume() {
    cout << "�п�J���@����: ";
    cin >> height_cone;
    cone_volume = (1.0f / 3) * pi * getRadius() * getRadius() * height_cone;
}

void ConeVolume::display() {
    cout << "���@����: " << height_cone << endl;
    cout << "���@����n: " << cone_volume << endl;
}

float ConeVolume::getVolume() const {
    return cone_volume;
}

// Cylinder ���O��@
Cylinder::Cylinder() {
    cout << "�п�J��W����: ";
    cin >> height_cyl;
    surface_area = 2 * pi * getRadius() * height_cyl + 2 * pi * getRadius() * getRadius();
    cylinder_volume = pi * getRadius() * getRadius() * height_cyl;
}

void Cylinder::display() {
    cout << "��W����: " << height_cyl << endl;
    cout << "��W�����n: " << surface_area << endl;
    cout << "��W����n: " << cylinder_volume << endl;
}

float Cylinder::getVolume() const {
    return cylinder_volume;
}

// Tower ���O��@
Tower::Tower() {
    total_volume = ConeVolume::getVolume() + Cylinder::getVolume();
}

void Tower::display() {
    cout << "\n=== ���Ӹ�T ===" << endl;
    Circle::display();
    ConeVolume::display();
    Cylinder::display();
    cout << "�����`��n (���@ + ��W): " << total_volume << endl;
}
