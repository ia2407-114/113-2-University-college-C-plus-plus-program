#include <iostream>
#include <string>
#include"square.h"
using namespace std;
// ��������O 

square_2D::square_2D()
{
    cout << "��������Osquare_2D���غc���禡\n";
    cout << "��:";
    cin >> length;
    cout << "�e:";
    cin >> width;
}

// square_2D���O�Ѻc���禡
square_2D::~square_2D()
{
    cout << "��������Osquare_2D���Ѻc���禡.\n";
}

//�p�⭱�n
double square_2D::compute_area() const
{
    return length * width;
}

// ��ܪ���Ϊ����
void square_2D::print_2D()
{
    cout << "��:" << length << endl;
    cout << "�e:" << width << endl;
    cout << "���n:" << compute_area() << endl;
}



rect_3D::rect_3D()
{
    cout << "\n����l���Orect_3D���غc���禡\n";
    cout << "��:";
    cin >> height;
}

// rect_3D���O�Ѻc���禡
rect_3D::~rect_3D()
{
    cout << "����l���Orect_3D���Ѻc���禡.\n";
}
//�p����n
double rect_3D::compute_volume() const
{
    return compute_area() * height;
}

// ��ܪ����骺���
void rect_3D::print_3D()
{
    cout << "��:" << height << endl;
    cout << "��n:" << compute_volume() << endl;
}

