#include <iostream>
#include <string>
#include "面積.h"
using namespace std;

int main()
{
    Circ_1D Circ_1D;  // 兼具空中及水上功能   
    Circ_1D.Circ_1D::compute_circ();

    Cron_3D Cron_3D;  // 兼具空中及水上功能   
    Cron_3D.Cron_3D::compute_volume();

    Pie_2D Pie_2D;  // 兼具空中及水上功能   
    Pie_2D.Pie_2D::comput_area();

    return 0;
}