#include <iostream>
#include "square_rect.h"

using namespace std;

square_2D::square_2D(double l, double w) : length(l), width(w) {
    cout << "���� square_2D �غc�l\n";
}

square_2D::~square_2D() {
    cout << "���� square_2D �Ѻc�l\n";
}

void square_2D::print_2D() const {
    cout << "����� ��: " << length << ", �e: " << width << endl;
    cout << "���n: " << length * width << endl;
}

rect_3D::rect_3D(double l, double w, double h) : square_2D(l, w), height(h) {
    cout << "���� rect_3D �غc�l\n";
}

rect_3D::~rect_3D() {
    cout << "���� rect_3D �Ѻc�l\n";
}

void rect_3D::print_3D() const {
    cout << "������ ��: " << length << ", �e: " << width << ", ��: " << height << endl;
    cout << "��n: " << length * width * height << endl;
}
