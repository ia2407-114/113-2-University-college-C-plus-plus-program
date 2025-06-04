#include <iostream>
#include <string>
#ifndef SQUARE_H
#define SQUARE_H
using namespace std;
// 長方形類別
class square_2D
{
private:
    double length;
    double width;      // 飛行物編號 

public:
    // flight_object類別建構元函式,設定飛行物的資料          
    square_2D();
    ~square_2D();
    double compute_area() const;
    void print_2D();
};


// 長方體類別
class rect_3D :public square_2D
{
private:
    double height;

public:
    rect_3D();
    ~rect_3D();
    double compute_volume() const;
    void print_3D();
};
#endif