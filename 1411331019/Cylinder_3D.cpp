#include "Cylinder_3D.h"

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
}

// Cylinder_3D 類別的解構子
Cylinder_3D::~Cylinder_3D() {
    cout << "Cylinder_3D 解構子呼叫" << endl;
}

// Castle 類別的建構子
Castle::Castle(double r, double h) : Cylinder_3D(r, h) {
    cout << "Castle 建構子呼叫" << endl;
}

// Castle 類別的解構子
Castle::~Castle() {
    cout << "Castle 解構子呼叫" << endl;
}

// 輸出城樓的相關資訊
void Castle::print() {
    cout << "城樓體積: " << volume << endl;
    cout << "城樓圓柱高度: " << height << endl;
    cout << "城樓底部半徑: " << radius << endl;
}
