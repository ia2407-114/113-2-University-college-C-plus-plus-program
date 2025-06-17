#ifndef CONE3D_H
#define CONE3D_H

#include <iostream>
using namespace std;

// 基類：計算圓的周長
class Circ_1D
{
protected:
    double radius;  
    const double pi = 3.14;  

public:
    Circ_1D();  // 建構子

    
    void setRadius(double r);

    
    double compute_circumference();

    
    void display_circumference();
};


class Cone3D : public Circ_1D
{
private:
    double height;  // 錐形的高度
    double volume;  // 錐形的體積

public:
    Cone3D();  // 建構子

    // 設定錐形的高度
    void setHeight(double h);

    // 計算錐形的體積
    void compute_volume();

    // 顯示錐形資料
    void display();

    // 解構子
    ~Cone3D();
};

#endif
