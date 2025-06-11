#include <iostream>
#include "air.h"
using namespace std;

// Circle 類別實作
Circle::Circle() {
    cout << "請輸入圓的半徑: ";
    cin >> radius;
    circumference = 2 * pi * radius;
}

void Circle::display() {
    cout << "圓的半徑: " << radius << endl;
    cout << "圓的周長: " << circumference << endl;
}

float Circle::getRadius() const {
    return radius;
}

// Area 類別實作
Area::Area() {
    area = pi * getRadius() * getRadius();
}

void Area::display() {
    cout << "圓的面積: " << area << endl;
}

// ConeVolume 類別實作
ConeVolume::ConeVolume() {
    cout << "請輸入圓錐的高: ";
    cin >> height_cone;
    cone_volume = (1.0f / 3) * pi * getRadius() * getRadius() * height_cone;
}

void ConeVolume::display() {
    cout << "圓錐的高: " << height_cone << endl;
    cout << "圓錐的體積: " << cone_volume << endl;
}

float ConeVolume::getVolume() const {
    return cone_volume;
}

// Cylinder 類別實作
Cylinder::Cylinder() {
    cout << "請輸入圓柱的高: ";
    cin >> height_cyl;
    surface_area = 2 * pi * getRadius() * height_cyl + 2 * pi * getRadius() * getRadius();
    cylinder_volume = pi * getRadius() * getRadius() * height_cyl;
}

void Cylinder::display() {
    cout << "圓柱的高: " << height_cyl << endl;
    cout << "圓柱的表面積: " << surface_area << endl;
    cout << "圓柱的體積: " << cylinder_volume << endl;
}

float Cylinder::getVolume() const {
    return cylinder_volume;
}

// Tower 類別實作
Tower::Tower() {
    total_volume = ConeVolume::getVolume() + Cylinder::getVolume();
}

void Tower::display() {
    cout << "\n=== 城樓資訊 ===" << endl;
    Circle::display();
    ConeVolume::display();
    Cylinder::display();
    cout << "城樓總體積 (圓錐 + 圓柱): " << total_volume << endl;
}
