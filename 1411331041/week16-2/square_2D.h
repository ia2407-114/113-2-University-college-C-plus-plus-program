#pragma once
#include <iostream>
using namespace std;

// 長方形類別
class square_2D {
protected:
    float length, width;

public:
    square_2D(float l = 0, float w = 0); // 建構子
    void print_2D();  // 顯示長、寬、面積
};

// 長方體類別，繼承自 square_2D
class rect_3D : public square_2D {
private:
    float height;

public:
    rect_3D(float l = 0, float w = 0, float h = 0);  // 建構子
    void print_3D();  // 顯示長、寬、高、體積
};
