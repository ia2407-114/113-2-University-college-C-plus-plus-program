#ifndef CYLINDER_3D_H
#define CYLINDER_3D_H

#include <iostream>
using namespace std;

const double PI = 3.14;

class Circ_1D {
protected:
    double radius;
public:
    Circ_1D(double r);  // �غc�l
    ~Circ_1D();         // �Ѻc�l
};

class Pie_2D : public Circ_1D {
protected:
    double area;
public:
    Pie_2D(double r);   // �غc�l
    ~Pie_2D();          // �Ѻc�l
};

class Cylinder_3D : public Pie_2D {
protected:
    double height, volume;
public:
    Cylinder_3D(double r, double h);  // �غc�l
    ~Cylinder_3D();                   // �Ѻc�l
};

class Castle : public Cylinder_3D {
public:
    Castle(double r, double h);  // �غc�l
    ~Castle();                   // �Ѻc�l
    void print();                // ��X���Ӫ�������T
};

#endif // CYLINDER_3D_H
#pragma once
