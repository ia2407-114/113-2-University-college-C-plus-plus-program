#include <iostream>
#include "square_2D.h"
using namespace std;

// square_2D 建構子，初始化長和寬
square_2D::square_2D(float l, float w) : length(l), width(w) {
    cout << "建立長方形，長為 " << length << "，寬為 " << width << endl;
}

// 顯示長方形的長、寬和面積
void square_2D::print_2D() {
    float area = length * width;
    cout << "長方形長: " << length << "，寬: " << width << "，面積: " << area << endl;
}

// rect_3D 建構子，初始化長、寬、高
rect_3D::rect_3D(float l, float w, float h) : square_2D(l, w), height(h) {
    cout << "建立長方體，長為 " << length << "，寬為 " << width << "，高為 " << height << endl;
}

// 顯示長方體的長、寬、高、體積
void rect_3D::print_3D() {
    float volume = length * width * height;
    cout << "長方體長: " << length << "，寬: " << width << "，高: " << height << "，體積: " << volume << endl;
}
