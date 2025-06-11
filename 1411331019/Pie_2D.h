#ifndef PIE_2D_H
#define PIE_2D_H

#include <iostream>
using namespace std;

const double PI = 3.14;

class Circ_1D {
protected:
    double radius;
public:
    Circ_1D(double r);  // 建構子
    ~Circ_1D();         // 解構子
};

class Pie_2D : public Circ_1D {
protected:
    double area;
public:
    Pie_2D(double r);   // 建構子
    ~Pie_2D();          // 解構子
};

class Cylinder_3D : public Pie_2D {
protected:
    double height, volume, surface;
public:
    Cylinder_3D(double r, double h);  // 建構子
    ~Cylinder_3D();                   // 解構子
    void print();                     // 輸出圓柱體的體積與表面積
};

#endif // PIE_2D_H
#pragma once
