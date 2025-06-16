#pragma once
#include <iostream>
#include <string>
using namespace std;

// 父類別：圓周長
class Circ_1D {
protected:
    double radius;
    const double pi = 3.14;

public:
    Circ_1D();  // 建構子

    double compute_circ();  // 計算圓周長

    void display_radius();  // 顯示圓周長
};

// 子類別：甜筒（圓錐體積）
class Cron_3D : public Circ_1D {
private:
    double height;
    double volume;

public:
    Cron_3D();  // 建構子

    double compute_volume();  // 計算甜筒體積

    void display_cron();  // 顯示甜筒資料
};

// 子類別：圓餅（圓面積）
class Pie_2D : public Circ_1D {
private:
    double area;

public:
    Pie_2D();  // 建構子

    void compute_area();  // 計算圓面積

    void display_pie();  // 顯示圓餅資料
};

// 子類別：圓柱體（體積與表面積）
class Cylinder_3D : public Circ_1D {
private:
    double height;
    double volume;
    double surface;

public:
    Cylinder_3D();  // 建構子

    double compute_volume();  // 計算圓柱體體積

    void compute_surface();  // 計算圓柱體表面積

    void display_cylinder();  // 顯示圓柱體資料
};


// 子類別：城樓（體積與高度）
class Castle1: public Cron_3D, Cylinder_3D {
private:
    double height;
    double volume;

public:
    Castle1();  // 建構子

    double compute_volume();  
    double compute_height();

};
