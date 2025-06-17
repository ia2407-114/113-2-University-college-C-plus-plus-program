#pragma once
#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 
#include "air.h"

circ_1D::circ_1D()
{
    cout << "請輸入半徑\n";
    cin >> radius;
}
void circ_1D::compute_circ()
{
    C1D = radius * 2 * pi;
    cout << "半徑為：" << radius << endl;
    cout << "圓周長為：" << C1D << endl;

}

corn_3D::corn_3D()
{
    cout << "請輸入高:\n";
    cin >> height;
}
void corn_3D::compute_volume()
{
    volume = radius * radius * height * pi / 3;
    cout << "半徑為：" << radius << endl;
    cout << "高為：" << height << endl;
    cout << "圓體積為：" << volume << endl;
}

pie_2D::pie_2D()
{
    cout << "半徑為：" << radius << endl;
}
void pie_2D::compute_area()
{
    area = radius * radius * pi;
    cout << "圓面積為：" << area << endl;
}

