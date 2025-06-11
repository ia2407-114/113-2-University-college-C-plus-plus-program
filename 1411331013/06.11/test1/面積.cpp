#include <iostream>
#include <string>
#include "面積.h"
using namespace std;
// 圓周長類別 
    // flight_object類別建構元函式,設定飛行物的資料
Circ_1D::Circ_1D()
    {
        cout << "半徑:";
        cin >> radius;
        cout << "π=3.14" << endl;
    }

double Circ_1D::print_1D() {
    return radius * 2 * pi;
}

    // 顯示圓周長的資料
void Circ_1D::compute_circ()
    {
        cout << "圓周長=" << print_1D() <<"\n" << endl;
    }

// 甜筒類別 
    // ship_object類別建構元函式,設定飛行物的資料
Cron_3D::Cron_3D()
    {
        cout << "高:";
        cin >> height;
    }

double Cron_3D::print_3D()
{
    return  (pi * radius * radius * height)/3;
}

void Cron_3D::compute_volume() 
{
    cout << "圓錐體體積:" << print_3D() <<"\n" << endl;
}

// 圓餅類別
    // airliner類別建構元函式,設定大型客機的資料 
Pie_2D::Pie_2D()
    {
    cout << "\n半徑為:" << radius << endl;
        cout << "π=" << pi << endl;
    }

double Pie_2D::print_2D()
{
    return radius * radius * pi;
}
    // 顯示圓餅的資料
void Pie_2D::comput_area()
    {
        cout << "圓面積:" << print_2D() << endl;
    }
