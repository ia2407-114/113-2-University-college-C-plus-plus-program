#include <iostream>
#include <string>
#include"square.h"
using namespace std;
// 長方形類別 

square_2D::square_2D()
{
    cout << "執行父類別square_2D的建構元函式\n";
    cout << "長:";
    cin >> length;
    cout << "寬:";
    cin >> width;
}

// square_2D類別解構元函式
square_2D::~square_2D()
{
    cout << "執行父類別square_2D的解構元函式.\n";
}

//計算面積
double square_2D::compute_area() const
{
    return length * width;
}

// 顯示長方形的資料
void square_2D::print_2D()
{
    cout << "長:" << length << endl;
    cout << "寬:" << width << endl;
    cout << "面積:" << compute_area() << endl;
}



rect_3D::rect_3D()
{
    cout << "\n執行子類別rect_3D的建構元函式\n";
    cout << "高:";
    cin >> height;
}

// rect_3D類別解構元函式
rect_3D::~rect_3D()
{
    cout << "執行子類別rect_3D的解構元函式.\n";
}
//計算體積
double rect_3D::compute_volume() const
{
    return compute_area() * height;
}

// 顯示長方體的資料
void rect_3D::print_3D()
{
    cout << "高:" << height << endl;
    cout << "體積:" << compute_volume() << endl;
}

