#pragma once
#include <iostream>
#include <string>
using namespace std;
// 飛行物體類別 

class circ_1D
{

public:
    double C1D; //圓周長     
    double radius, pi = 3.14;
    circ_1D();

    // 顯示圓周長資料
    void compute_circ();
};

// 甜筒類別 
class corn_3D:public circ_1D
{
public:
    double height,volume;  // 噴水推進器名稱 

    // ship_object類別建構元函式,設定飛行物的資料
    corn_3D();

    void compute_volume();
};

// 圓餅類別

class pie_2D :public circ_1D
{
public:
    double area;  // 噴水推進器名稱 

    // ship_object類別建構元函式,設定飛行物的資料
    pie_2D();

    void compute_area();
};

//圓柱體
class pie_2D :public circ_1D
{
public:
    double area;  // 噴水推進器名稱 

    // ship_object類別建構元函式,設定飛行物的資料
    pie_2D();

    void compute_area();
};
