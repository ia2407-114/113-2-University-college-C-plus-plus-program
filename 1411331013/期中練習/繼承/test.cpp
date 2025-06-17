#include <iostream>
#include <string>
#include "test.h"
using namespace std;

    // flight_object類別建構元函式,設定圓周長的資料
Circ_1D::Circ_1D()
{
    cout << "輸入半徑:";
    cin >> radius;
    cout << "π=3.14";
}

    // 顯示圓周長的資料
void Circ_1D::compute_circ()
{
    circ = radius * 2 * 3.14;
    cout << "\n圓周長=" << circ << endl;
}

// 甜筒類別 
Cron_3D::Cron_3D()
    {
        cout << "\n輸入圓錐體高:";
        cin >> height;
    }

void Cron_3D::compute_volume()
{
    volume = (radius * radius * pi * height) / 3;
    cout << "甜筒體積=" << volume << endl;
}

// 圓餅類別
    // Pie_2D類別建構元函式,設定圓餅的資料 
Pie_2D::Pie_2D()
{
    area = 0.0;
}

    // 顯示圓餅的資料
void Pie_2D::compute_area()
    {
        area = radius * radius * pi;
        cout << "\n圓面積=" << area << endl;
    }

// 圓柱體類別
    // Cylinder_3D類別建構元函式,設定圓柱體的資料 
Cylinder_3D::Cylinder_3D()
{
    cout << "\n輸入圓柱體高:";
    cin >> height;
}

// 顯示圓柱體的資料
void Cylinder_3D::compute_volume()
{
    volume = radius * radius * pi * height;
    cout << "圓柱體體積=" << volume << endl;
}

void Cylinder_3D::compute_surface()
{
    surface = 2 * pi * radius * (radius + height);
    cout << "圓柱體表面積=" << surface << endl;
}

//城樓類別
    // Castle類別建構元函式,設定城樓的資料 
Castle::Castle()
{
    volume = 0.0;
}

// 顯示城樓的資料
void Castle::compute_volume()
{
    Cron_3D::compute_volume();
    Cylinder_3D::compute_volume();
    volume = Cron_3D::volume + Cylinder_3D::volume;
    cout << "城樓體積=" << volume << endl;
}