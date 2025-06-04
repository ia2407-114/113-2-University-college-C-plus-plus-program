#include <iostream>
#include "square_2D.h"
using namespace std;

// square_2D �غc�l�A��l�ƪ��M�e
square_2D::square_2D(float l, float w) : length(l), width(w) {
    cout << "�إߪ���ΡA���� " << length << "�A�e�� " << width << endl;
}

// ��ܪ���Ϊ����B�e�M���n
void square_2D::print_2D() {
    float area = length * width;
    cout << "����Ϊ�: " << length << "�A�e: " << width << "�A���n: " << area << endl;
}

// rect_3D �غc�l�A��l�ƪ��B�e�B��
rect_3D::rect_3D(float l, float w, float h) : square_2D(l, w), height(h) {
    cout << "�إߪ�����A���� " << length << "�A�e�� " << width << "�A���� " << height << endl;
}

// ��ܪ����骺���B�e�B���B��n
void rect_3D::print_3D() {
    float volume = length * width * height;
    cout << "�������: " << length << "�A�e: " << width << "�A��: " << height << "�A��n: " << volume << endl;
}
