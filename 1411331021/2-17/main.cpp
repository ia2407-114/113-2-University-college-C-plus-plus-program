#include <iostream>
#include <string>
using namespace std;
#include "air.h"

int main()
{
    circ_1D C1D;
    C1D.compute_circ();
    corn_3D C3D;
    C3D.compute_volume();
    pie_2D P2D;
    P2D.compute_area();

    return 0;
}
