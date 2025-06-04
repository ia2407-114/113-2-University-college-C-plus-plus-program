#include "shape.h"

square_2D::square_2D()
{
    cout << "請輸入長方形的長與寬：\n";
    cout << "長: "; cin >> length;
    cout << "寬: "; cin >> width;
}

square_2D::~square_2D()
{
    cout << "square_2D 解構元被呼叫\n";
}

void square_2D::print_2D()
{
    double area = length * width;
    cout << "長: " << length << ", 寬: " << width << ", 面積: " << area << endl;
}

rect_3D::rect_3D()
{
    cout << "請輸入長方體的高：\n";

    cout << "高: "; cin >> height;
}

rect_3D::~rect_3D()
{
    cout << "rect_3D 解構元被呼叫\n";
}

void rect_3D::print_3D()
{
    double volume = length * width * height;
    cout << "長: " << length << ", 寬: " << width << ", 高: " << height << ", 體積: " << volume << endl;
}
