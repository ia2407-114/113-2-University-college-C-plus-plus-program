#include "shapes.h"
#include <iostream>

using namespace std;

int main() {
    cout << "--- �D�ؤ@: ���� ---" << endl;
    Cron_3D iceCreamCone;
    iceCreamCone.compute_volume();
    cout << "������n: " << iceCreamCone.volume << endl << endl;

    cout << "--- �D�ؤG: ��W�� ---" << endl;
    Cylinder_3D cylinder;
    cylinder.compute_volume();
    cylinder.compute_surface();
    cout << "��W����n: " << cylinder.volume << endl;
    cout << "��W����n: " << cylinder.surface << endl << endl;

    cout << "--- �D�ؤT: ���� ---" << endl;
    Castle castle;
    castle.compute_volume();
    castle.compute_height();
    cout << "���Ӫ��զX��n: " << castle.volume << endl;
    return 0;
}
