#include <iostream>
#include <string>
#include "Circ20250611.h"
using namespace std;

Circ_1D::Circ_1D()
{
    cout << "執行圓周長建構子" << endl;
    cout << "請輸入半徑(radius)：";
    cin >> radius;
}

void Circ_1D::compute_circ()
{
    cout << "圓周長為：" << 2 * radius * pi << endl;
}

Circ_3D::Circ_3D()
{
    cout << "執行圓錐體建構子" << endl;
    cout << "請輸入高度(height):";
    cin >> height;
    volume = ((radius * radius * pi) * height ) / 3;
}

void Circ_3D::compute_volume()
{
    cout << "圓錐體體積為：" << volume << endl;
}

Pie_2D::Pie_2D()
{
    cout << "執行圓面積建構子" << endl;
    area = radius * radius * pi;
}

void Pie_2D::compute_area()
{
    cout << "圓面積為：" << area << endl;
}

Cylinder_3D::Cylinder_3D()
{
    cout << "執行圓柱體建構子" << endl;
    cout << "請輸入高度(height):";
    cin >> height;
    volume = area * height;
    surface = 2 * pi * radius * height + 2 * area;
}

void Cylinder_3D::compute_volume()
{
    cout << "圓柱體體積為：" << volume << endl;
}

void Cylinder_3D::compute_surface()
{
    cout << "圓柱體表面積為：" << surface << endl;
} 

Castle::Castle()
{
    cout << "執行樓城建構子" << endl;
    cout << "請輸入高度(height):";
    cin >> height;
    volume = Cylinder_3D::volume + Circ_3D::volume;
}

void Castle::compute_volume()
{
    cout << "樓城體積為：" << volume << endl;
}

void Castle::compute_height()
{
    cout << "樓城高為：" << height << endl;
}