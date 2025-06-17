#include "Cone3D.h"

// 基類：圓的周長計算
Circ_1D::Circ_1D()
{
    radius = 0;
}

// 設定圓的半徑
void Circ_1D::setRadius(double r)
{
    radius = r;
}

// 計算圓的周長
double Circ_1D::compute_circumference()
{
    return 2 * pi * radius;
}

// 顯示圓周長資料
void Circ_1D::display_circumference()
{
    cout << "圓的半徑: " << radius << endl;
    cout << "圓周長: " << compute_circumference() << endl;
}

// 派生類：錐形計算
Cone3D::Cone3D()
{
    height = 0;
    volume = 0;
}

// 設定錐形的高度
void Cone3D::setHeight(double h)
{
    height = h;
}

// 計算錐形的體積
void Cone3D::compute_volume()
{
    volume = (1.0 / 3) * 3.14 * radius * radius * height;  // 錐形體積公式
}

// 顯示錐形資料
void Cone3D::display()
{
    cout << "錐形的半徑: " << radius << endl;
    cout << "錐形的高度: " << height << endl;
    cout << "錐形的體積: " << volume << " 立方單位" << endl;
}

// 解構子
Cone3D::~Cone3D()
{
    cout << "銷毀錐形物件..." << endl;
}
