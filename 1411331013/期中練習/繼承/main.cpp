#include <iostream>
#include <string>
#include "test.h"
using namespace std;

int main()
{
    cout << "請計算圓周長" << endl;
    Circ_1D circ;
    circ.compute_circ();
    
    cout << "\n請計算圓錐體體積" << endl;
    Cron_3D cron; 
    cron.compute_volume();

    cout << "\n請計算圓面積" << endl;
    Pie_2D pie;
    pie.compute_area();

    cout << "\n請計算圓柱體體積與表面積" << endl;
    Cylinder_3D cylinder;
    cylinder.compute_volume();
    cylinder.compute_surface();

    cout << "\n請計算城樓體積" << endl;
    Castle castle;
    castle.compute_volume();
    
    return 0;
}