#include <iostream>
#include <string>
#include "week17-2.h"
using namespace std;

square_2D::square_2D() {
    cout << "��J���P�e(�� �e): ";
    cin >> length >> width;
}

void square_2D::print_2D() {
    cout << "�i������ơj��: " << length << ", �e: " << width
        << ", ���n: " << length * width << endl;
}

cylinder::cylinder() {
    cout << "��J����: ";
    cin >> height;
}

void cylinder::print_3D() {
    cout << "�i�����ơj��n: " << length * width * height << endl;
}
