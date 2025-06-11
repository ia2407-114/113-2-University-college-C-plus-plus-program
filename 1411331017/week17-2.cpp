#include <iostream>
#include <string>
#include "week17-2.h"
using namespace std;

square_2D::square_2D() {
    cout << "輸入長與寬(長 寬): ";
    cin >> length >> width;
}

void square_2D::print_2D() {
    cout << "【平面資料】長: " << length << ", 寬: " << width
        << ", 面積: " << length * width << endl;
}

cylinder::cylinder() {
    cout << "輸入高度: ";
    cin >> height;
}

void cylinder::print_3D() {
    cout << "【立體資料】體積: " << length * width * height << endl;
}
