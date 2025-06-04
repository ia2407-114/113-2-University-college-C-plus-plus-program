#include <iostream>
#include "square.h"

using namespace std;

square_2D::square_2D() {
    cout << "執行 square_2D 建構子" << endl;
    cout << "請輸入長方形的長: ";
    cin >> length;
    cout << "請輸入長方形的寬: ";
    cin >> width;
}

square_2D::~square_2D() {
    cout << "執行 square_2D 解構子" << endl;
}

void square_2D::print_2D() {
    cout << "\n=== 長方形資訊 ===" << endl;
    cout << "長: " << length << endl;
    cout << "寬: " << width << endl;
    cout << "面積: " << length * width << endl;
}

double square_2D::getLength() const {
    return length;
}

double square_2D::getWidth() const {
    return width;
}

rect_3D::rect_3D() {
    cout << "\n執行 rect_3D 建構子" << endl;
    cout << "請輸入長方體的高: ";
    cin >> height;
}

rect_3D::~rect_3D() {
    cout << "執行 rect_3D 解構子" << endl;
}

double rect_3D::compute_volume() {
    return getLength() * getWidth() * height;
}

double rect_3D::compute_surface() {
    double l = getLength();
    double w = getWidth();
    double h = height;
    return 2 * (l * w + l * h + w * h);
}

void rect_3D::print_3D() {
    cout << "\n=== 長方體資訊 ===" << endl;
    cout << "長: " << getLength() << endl;
    cout << "寬: " << getWidth() << endl;
    cout << "高: " << height << endl;
    cout << "體積: " << compute_volume() << endl;
    cout << "表面積: " << compute_surface() << endl;
}
