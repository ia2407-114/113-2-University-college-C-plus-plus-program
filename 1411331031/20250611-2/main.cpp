#include <iostream>
#include <string>
#include "air.h"
using namespace std;
int main()
{
    Circ_1D a1;
    cout << "~" << endl;
    Pie_2D a2;
    cout << "~" << endl;
    Cron_3D a3;
    cout << "~" << endl;
    Cylinder_3D a4;
    cout << "~" << endl;
    Castle a5;
    cout << "~" << endl;
    a1.compute_circ();
    a2.compute_area();
    a3.compute_volume();
    a4.compute_surface();
    a4.compute_volume();
    a5.compute_height();
    a5.compute_volume();

    
    return 0;
}