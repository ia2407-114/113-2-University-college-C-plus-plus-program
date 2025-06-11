#include <iostream>
#include <string>
#include "square_2D20250604.h"
using namespace std;

square_2D::square_2D()
{
    cout << "執行父類別square_2D_object的建構元函式\n";
    cout << "實作一長方形:\n";
    cout << "長度:";
    cin >> length;
    cout << "寬度:";
    cin >> width;
}
square_2D::~square_2D()
{
    cout << "執行父類別square_2D_object的解構元函式.\n";
}
void square_2D::square_2D_area()
{
    cout << "長方形長:" << length << endl;
    cout << "長方形寬:" << width << endl;
    cout << "長方形面積:" << length * width << endl;
}

rect_3D::rect_3D()
{
    cout << "\n執行子類別rect_3D的建構元函式\n";
    cout << "高度:";
    cin >> high;
}

rect_3D::~rect_3D()
{
    cout << "執行子類別rect_3D的解構元函式.\n";
}

void rect_3D::rect_3D_area()
{
    cout << "長方體長:" << length << endl;
    cout << "長方體寬:" << width << endl;
    cout << "長方體高:" << high << endl;
    cout << "長方體體積:" << length * width * high << endl;
} 




