#pragma once
#include <iostream>
#include <string>
using namespace std;
// ���檫�����O 
#include "air.h"

circ_1D::circ_1D()
{
    cout << "�п�J�b�|\n";
    cin >> radius;
}
void circ_1D::compute_circ()
{
    C1D = radius * 2 * pi;
    cout << "�b�|���G" << radius << endl;
    cout << "��P�����G" << C1D << endl;

}

corn_3D::corn_3D()
{
    cout << "�п�J��:\n";
    cin >> height;
}
void corn_3D::compute_volume()
{
    volume = radius * radius * height * pi / 3;
    cout << "�b�|���G" << radius << endl;
    cout << "�����G" << height << endl;
    cout << "����n���G" << volume << endl;
}

pie_2D::pie_2D()
{
    cout << "�b�|���G" << radius << endl;
}
void pie_2D::compute_area()
{
    area = radius * radius * pi;
    cout << "�ꭱ�n���G" << area << endl;
}

