#include <iostream>
#include <string>
#include "Circ20250611.h"
using namespace std;

Circ_1D::Circ_1D()
{
    cout << "�����P���غc�l" << endl;
    cout << "�п�J�b�|(radius)�G";
    cin >> radius;
}

void Circ_1D::compute_circ()
{
    cout << "��P�����G" << 2 * radius * pi << endl;
}

Circ_3D::Circ_3D()
{
    cout << "������@��غc�l" << endl;
    cout << "�п�J����(height):";
    cin >> height;
    volume = ((radius * radius * pi) * height ) / 3;
}

void Circ_3D::compute_volume()
{
    cout << "���@����n���G" << volume << endl;
}

Pie_2D::Pie_2D()
{
    cout << "����ꭱ�n�غc�l" << endl;
    area = radius * radius * pi;
}

void Pie_2D::compute_area()
{
    cout << "�ꭱ�n���G" << area << endl;
}

Cylinder_3D::Cylinder_3D()
{
    cout << "�����W��غc�l" << endl;
    cout << "�п�J����(height):";
    cin >> height;
    volume = area * height;
    surface = 2 * pi * radius * height + 2 * area;
}

void Cylinder_3D::compute_volume()
{
    cout << "��W����n���G" << volume << endl;
}

void Cylinder_3D::compute_surface()
{
    cout << "��W����n���G" << surface << endl;
} 

Castle::Castle()
{
    cout << "����ӫ��غc�l" << endl;
    cout << "�п�J����(height):";
    cin >> height;
    volume = Cylinder_3D::volume + Circ_3D::volume;
}

void Castle::compute_volume()
{
    cout << "�ӫ���n���G" << volume << endl;
}

void Castle::compute_height()
{
    cout << "�ӫ������G" << height << endl;
}