#include <iostream>
#include <string>
#include "square.h"

// square類別建構元函式,設定長方形的資料          
square2D::square2D()
{
    cout << "執行父類別square2D的建構元函式\n";
    cout << "實作一長方形:\n";
    cout << "長:";
    cin >> l;
    cout << "寬:";
    cin >> w;
}

// square類別解構元函式
square2D::~square2D()
{
    cout << "執行父類別square2D的解構元函式.\n";
}

// 顯示長方形的資料
void square2D::display()
{
    cout << "\n長:" << l << endl;
    cout << "寬:" << w << endl;

}
void square2D::display_2D(){
    cout << "長方形面積" << l * w << endl;
}
// rect3D類別建構元函式,設定rect3D的資料  
rect3D::rect3D()
{
    cout << "\n執行子類別rect3D的建構元函式\n";
    cout << "實作一長方體" << endl;
    cout << "高：";
    cin >> h;

}
// rect3D類別解構元函式
rect3D::~rect3D()
{
    cout << "執行子類別rect3D的解構元函式.\n";
}
// 顯示rect3D的資料
void rect3D::display_3D()
{
    cout << "高:" << h << endl;
    cout << "長方體體積:" << l * w * h << endl;
}




