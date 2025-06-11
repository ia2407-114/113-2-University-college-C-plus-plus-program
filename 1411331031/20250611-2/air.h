#include <iostream>
#include <string>
using namespace std;

class Circ_1D
{
public:
    double radius, pi = 3.14;
    Circ_1D();
    void compute_circ();
};

class Cron_3D:public Circ_1D
{
public:
    double height, volume;
    Cron_3D();
    void compute_volume();
};

class Pie_2D:public Circ_1D
{
public:
    double area;
    Pie_2D();
    void compute_area();
};

class Cylinder_3D :public Pie_2D
{
public:
    double height,volume, surface;
    Cylinder_3D();
    void compute_volume();
    void compute_surface();
};

class Castle :protected Cron_3D, Cylinder_3D
{
public:
    double height, volume;
    Castle();
    void compute_volume();
    void compute_height();
};