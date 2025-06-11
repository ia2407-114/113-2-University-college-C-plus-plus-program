#include "Pie_2D.h"

// Circ_1D ���O���غc�l
Circ_1D::Circ_1D(double r) : radius(r) {
    cout << "Circ_1D �غc�l�I�s" << endl;
}

// Circ_1D ���O���Ѻc�l
Circ_1D::~Circ_1D() {
    cout << "Circ_1D �Ѻc�l�I�s" << endl;
}

// Pie_2D ���O���غc�l
Pie_2D::Pie_2D(double r) : Circ_1D(r) {
    cout << "Pie_2D �غc�l�I�s" << endl;
    area = PI * radius * radius;  // �p��ꭱ�n
}

// Pie_2D ���O���Ѻc�l
Pie_2D::~Pie_2D() {
    cout << "Pie_2D �Ѻc�l�I�s" << endl;
}

// Cylinder_3D ���O���غc�l
Cylinder_3D::Cylinder_3D(double r, double h) : Pie_2D(r), height(h) {
    cout << "Cylinder_3D �غc�l�I�s" << endl;
    volume = area * height;  // �p���W����n
    surface = 2 * area + 2 * PI * radius * height;  // �p���W����n
}

// Cylinder_3D ���O���Ѻc�l
Cylinder_3D::~Cylinder_3D() {
    cout << "Cylinder_3D �Ѻc�l�I�s" << endl;
}

// ��X��W�骺��n�P���n
void Cylinder_3D::print() {
    cout << "��W����n: " << volume << endl;
    cout << "��W����n: " << surface << endl;
}
