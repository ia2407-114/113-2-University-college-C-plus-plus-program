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
    Circ_1D();

    double compute_circ();

    void display_radius();
};

// 子類別：甜筒（圓錐體積）
class Cron_3D : public Circ_1D {
private:
    double height;
    double volume;

public:
    Cron_3D();

    void compute_volume();

    void display_cron();

};

// 子類別：圓餅（圓面積）
class Pie_2D : public Circ_1D {
private:
    double area;

public:
    Pie_2D();

    void compute_area();

    void display_pie();
};
