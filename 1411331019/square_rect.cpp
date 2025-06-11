#include <iostream>
#include "square_rect.h"

using namespace std;

square_2D::square_2D(double l, double w) : length(l), width(w) {
    cout << "執行 square_2D 建構子\n";
}

square_2D::~square_2D() {
    cout << "執行 square_2D 解構子\n";
}

void square_2D::print_2D() const {
    cout << "長方形 長: " << length << ", 寬: " << width << endl;
    cout << "面積: " << length * width << endl;
}

rect_3D::rect_3D(double l, double w, double h) : square_2D(l, w), height(h) {
    cout << "執行 rect_3D 建構子\n";
}

rect_3D::~rect_3D() {
    cout << "執行 rect_3D 解構子\n";
}

void rect_3D::print_3D() const {
    cout << "長方體 長: " << length << ", 寬: " << width << ", 高: " << height << endl;
    cout << "體積: " << length * width * height << endl;
}
