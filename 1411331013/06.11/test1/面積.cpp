#include <iostream>
#include <string>
#include "���n.h"
using namespace std;
// ��P�����O 
    // flight_object���O�غc���禡,�]�w���檫�����
Circ_1D::Circ_1D()
    {
        cout << "�b�|:";
        cin >> radius;
        cout << "�k=3.14" << endl;
    }

double Circ_1D::print_1D() {
    return radius * 2 * pi;
}

    // ��ܶ�P�������
void Circ_1D::compute_circ()
    {
        cout << "��P��=" << print_1D() <<"\n" << endl;
    }

// �������O 
    // ship_object���O�غc���禡,�]�w���檫�����
Cron_3D::Cron_3D()
    {
        cout << "��:";
        cin >> height;
    }

double Cron_3D::print_3D()
{
    return  (pi * radius * radius * height)/3;
}

void Cron_3D::compute_volume() 
{
    cout << "���@����n:" << print_3D() <<"\n" << endl;
}

// ������O
    // airliner���O�غc���禡,�]�w�j���Ⱦ������ 
Pie_2D::Pie_2D()
    {
    cout << "\n�b�|��:" << radius << endl;
        cout << "�k=" << pi << endl;
    }

double Pie_2D::print_2D()
{
    return radius * radius * pi;
}
    // ��ܶ�檺���
void Pie_2D::comput_area()
    {
        cout << "�ꭱ�n:" << print_2D() << endl;
    }
