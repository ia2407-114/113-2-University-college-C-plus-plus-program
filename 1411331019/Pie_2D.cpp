#include "Pie_2D.h"

// Circ_1D 類別的建構子
Circ_1D::Circ_1D(double r) : radius(r) {
    cout << "Circ_1D 建構子呼叫" << endl;
}

// Circ_1D 類別的解構子
Circ_1D::~Circ_1D() {
    cout << "Circ_1D 解構子呼叫" << endl;
}

// Pie_2D 類別的建構子
Pie_2D::Pie_2D(double r) : Circ_1D(r) {
    cout << "Pie_2D 建構子呼叫" << endl;
    area = PI * radius * radius;  // 計算圓面積
}

// Pie_2D 類別的解構子
Pie_2D::~Pie_2D() {
    cout << "Pie_2D 解構子呼叫" << endl;
}

// Cylinder_3D 類別的建構子
Cylinder_3D::Cylinder_3D(double r, double h) : Pie_2D(r), height(h) {
    cout << "Cylinder_3D 建構子呼叫" << endl;
    volume = area * height;  // 計算圓柱體體積
    surface = 2 * area + 2 * PI * radius * height;  // 計算圓柱體表面積
}

// Cylinder_3D 類別的解構子
Cylinder_3D::~Cylinder_3D() {
    cout << "Cylinder_3D 解構子呼叫" << endl;
}

// 輸出圓柱體的體積與表面積
void Cylinder_3D::print() {
    cout << "圓柱體體積: " << volume << endl;
    cout << "圓柱體表面積: " << surface << endl;
}
