#include <iostream>
#include <string>
#include "test.h"
using namespace std;

    // flight_object���O�غc���禡,�]�w��P�������
Circ_1D::Circ_1D()
{
    cout << "��J�b�|:";
    cin >> radius;
    cout << "�k=3.14";
}

    // ��ܶ�P�������
void Circ_1D::compute_circ()
{
    circ = radius * 2 * 3.14;
    cout << "\n��P��=" << circ << endl;
}

// �������O 
Cron_3D::Cron_3D()
    {
        cout << "\n��J���@�鰪:";
        cin >> height;
    }

void Cron_3D::compute_volume()
{
    volume = (radius * radius * pi * height) / 3;
    cout << "������n=" << volume << endl;
}

// ������O
    // Pie_2D���O�غc���禡,�]�w��檺��� 
Pie_2D::Pie_2D()
{
    area = 0.0;
}

    // ��ܶ�檺���
void Pie_2D::compute_area()
    {
        area = radius * radius * pi;
        cout << "\n�ꭱ�n=" << area << endl;
    }

// ��W�����O
    // Cylinder_3D���O�غc���禡,�]�w��W�骺��� 
Cylinder_3D::Cylinder_3D()
{
    cout << "\n��J��W�鰪:";
    cin >> height;
}

// ��ܶ�W�骺���
void Cylinder_3D::compute_volume()
{
    volume = radius * radius * pi * height;
    cout << "��W����n=" << volume << endl;
}

void Cylinder_3D::compute_surface()
{
    surface = 2 * pi * radius * (radius + height);
    cout << "��W����n=" << surface << endl;
}

//�������O
    // Castle���O�غc���禡,�]�w���Ӫ���� 
Castle::Castle()
{
    volume = 0.0;
}

// ��ܫ��Ӫ����
void Castle::compute_volume()
{
    Cron_3D::compute_volume();
    Cylinder_3D::compute_volume();
    volume = Cron_3D::volume + Cylinder_3D::volume;
    cout << "������n=" << volume << endl;
}