#include "shapes.h"
#include <iostream>

using namespace std;

int main() {
    cout << "--- 題目一: 甜筒 ---" << endl;
    Cron_3D iceCreamCone;
    iceCreamCone.compute_volume();
    cout << "甜筒體積: " << iceCreamCone.volume << endl << endl;

    cout << "--- 題目二: 圓柱體 ---" << endl;
    Cylinder_3D cylinder;
    cylinder.compute_volume();
    cylinder.compute_surface();
    cout << "圓柱體體積: " << cylinder.volume << endl;
    cout << "圓柱體表面積: " << cylinder.surface << endl << endl;

    cout << "--- 題目三: 城樓 ---" << endl;
    Castle castle;
    castle.compute_volume();
    castle.compute_height();
    cout << "城樓的組合體積: " << castle.volume << endl;
    return 0;
}
