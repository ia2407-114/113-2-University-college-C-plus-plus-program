#pragma once
#include <iostream>
#include <string>

using namespace std;
// ��P�� 
class  Circ_1D
{
 
public:
    double radius, pi = 3.1415;
    Circ_1D();
    void compute_circ();
};

// ��
class Circ_3D :public Circ_1D
{

public:
    double height, volume;
    Circ_3D();
    void compute_volume();
};

// ��
class Pie_2D :public Circ_1D
{

public:
    double area;
    Pie_2D();
    void compute_area();
}; 

// ��W��

class Cylinder_3D :public Pie_2D
{
 
public:
    double height, volume, surface;
    Cylinder_3D();
    void compute_volume();
    void compute_surface();
};

// �ӫ�
class Castle :public Cylinder_3D, Circ_3D
{
private:
    double height, volume;
public:
    Castle();
    void compute_volume();
    void compute_height();
};