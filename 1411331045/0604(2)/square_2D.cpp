#include "square_2D.h"
#include <iostream>
using namespace std;

// �غc�l�A��l�ƪ��P�e
square_2D::square_2D() {
    cout << "�п�J����Ϊ����P�e:\n";
    cout << "��: ";
    cin >> length;
    cout << "�e: ";
    cin >> width;
}

// �Ѻc�l
square_2D::~square_2D() {
    cout << "���� square_2D �Ѻc�l\n";
}

// ��ܪ���Ϊ����B�e�M���n
void square_2D::print_2D() {
    cout << "����Ϊ���: " << length << endl;
    cout << "����Ϊ��e: " << width << endl;
    cout << "����Ϊ����n: " << length * width << endl;
};

rect_3D::rect_3D() {
    cout << "�п�J�����骺����:\n";
    cout << "����: ";
    cin >> height;
}

// �Ѻc�l
rect_3D::~rect_3D() {
    cout << "���� rect_3D �Ѻc�l\n";
}

// ��ܪ����骺���B�e�B���M��n
void rect_3D::print_3D() {
    // �եΰ����� print_2D ��k��ܪ���Ϊ����B�e�M���n
    print_2D();
    cout << "�����骺����: " << height << endl;
    cout << "�����骺��n: " << length * width * height << endl;
}