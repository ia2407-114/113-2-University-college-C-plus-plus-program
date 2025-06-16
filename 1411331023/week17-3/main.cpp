#include <iostream>
#include <string>
#include "circ.h"
using namespace std;

int main() {
    cout << "\n--- 建立圓周長物件 ---" << endl;
    Circ_1D myCirc;

    cout << "\n--- 建立甜筒物件 ---" << endl;
    Cron_3D myCone;
    myCone.display_radius();
    myCone.display_cron();

    cout << "\n--- 建立圓餅物件 ---" << endl;
    Pie_2D myPie;
    myPie.display_radius();
    myPie.display_pie();

    cout << "\n--- 建立圓柱體物件 ---" << endl;
    Cylinder_3D myCylinder;
    myCylinder.display_cylinder();

    cout << "\n--- 建立城樓物件 ---" << endl;
    Castle1 myCastle;
    myCastle.compute_volume();   // ← 要加上這行
    myCastle.compute_height();

    return 0;
}
