#include <iostream>
#include <string>
#include "test.h"
using namespace std;

int main()
{
    cout << "�Эp���P��" << endl;
    Circ_1D circ;
    circ.compute_circ();
    
    cout << "\n�Эp����@����n" << endl;
    Cron_3D cron; 
    cron.compute_volume();

    cout << "\n�Эp��ꭱ�n" << endl;
    Pie_2D pie;
    pie.compute_area();

    cout << "\n�Эp���W����n�P���n" << endl;
    Cylinder_3D cylinder;
    cylinder.compute_volume();
    cylinder.compute_surface();

    cout << "\n�Эp�⫰����n" << endl;
    Castle castle;
    castle.compute_volume();
    
    return 0;
}