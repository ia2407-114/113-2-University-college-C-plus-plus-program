#pragma once
#include <iostream>
using namespace std;

// ��������O
class square_2D {
protected:
    float length, width;

public:
    square_2D(float l = 0, float w = 0); // �غc�l
    void print_2D();  // ��ܪ��B�e�B���n
};

// ���������O�A�~�Ӧ� square_2D
class rect_3D : public square_2D {
private:
    float height;

public:
    rect_3D(float l = 0, float w = 0, float h = 0);  // �غc�l
    void print_3D();  // ��ܪ��B�e�B���B��n
};
