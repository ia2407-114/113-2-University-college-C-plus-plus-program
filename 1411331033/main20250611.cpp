#include <iostream>
#include <string>
#include "Circ20250611.h"
using namespace std;

int main()
{
    Circ_3D Circ_3D1;
    Circ_3D1.Circ_1D::compute_circ();
    Circ_3D1.compute_volume();
    Pie_2D Pie_2D1;
    Pie_2D1.compute_area();
    Cylinder_3D Cylinder_3D1;
    Cylinder_3D1.compute_volume();
    Cylinder_3D1.compute_surface();
    Castle Castle1;
    Castle1.compute_volume();
    Castle1.compute_height();
    return 0;
}