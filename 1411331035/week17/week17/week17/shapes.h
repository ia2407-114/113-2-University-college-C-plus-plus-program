#ifndef SHAPES_H
#define SHAPES_H
#include <iostream>
#include <string> 

class Circ_1D {
public:
    double radius;
    const double pi = 3.14;

    Circ_1D();
    void compute_circ();
};

class Pie_2D : public Circ_1D {
public:
    double area;

    Pie_2D();
    void compute_area();
};

class Cron_3D : public Circ_1D {
public:
    double height;
    double volume;

    Cron_3D();
    void compute_volume();
};

class Cylinder_3D : public Pie_2D {
public:
    double height;
    double volume;
    double surface;

    Cylinder_3D();
    void compute_volume();
    void compute_surface();
};

class Castle : public Cron_3D, public Cylinder_3D {
public:
    double height;
    double volume;

    Castle();
    void compute_volume();
    void compute_height();
};

#endif#pragma once
