#include <iostream>
#include "Cylinder_3D.h"
using namespace std;

int main() {
    double r, h;

    cout << "�i�D�ؤT�j���ӭp��\n";
    cout << "�п�J�b�|: ";
    cin >> r;
    cout << "�п�J����: ";
    cin >> h;

    Castle castle(r, h);  // �إ� Castle ����
    castle.print();        // ��X���G

    return 0;
}
