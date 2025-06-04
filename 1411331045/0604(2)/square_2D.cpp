#include "square_2D.h"
#include <iostream>
using namespace std;

// 建構子，初始化長與寬
square_2D::square_2D() {
    cout << "請輸入長方形的長與寬:\n";
    cout << "長: ";
    cin >> length;
    cout << "寬: ";
    cin >> width;
}

// 解構子
square_2D::~square_2D() {
    cout << "執行 square_2D 解構子\n";
}

// 顯示長方形的長、寬和面積
void square_2D::print_2D() {
    cout << "長方形的長: " << length << endl;
    cout << "長方形的寬: " << width << endl;
    cout << "長方形的面積: " << length * width << endl;
};

rect_3D::rect_3D() {
    cout << "請輸入長方體的高度:\n";
    cout << "高度: ";
    cin >> height;
}

// 解構子
rect_3D::~rect_3D() {
    cout << "執行 rect_3D 解構子\n";
}

// 顯示長方體的長、寬、高和體積
void rect_3D::print_3D() {
    // 調用基類的 print_2D 方法顯示長方形的長、寬和面積
    print_2D();
    cout << "長方體的高度: " << height << endl;
    cout << "長方體的體積: " << length * width * height << endl;
}