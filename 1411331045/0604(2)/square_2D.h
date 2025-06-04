
#include <iostream>
using namespace std;

class square_2D {
protected:
    float length;  // 長方形的長
    float width;   // 長方形的寬

public:
    square_2D();  // 建構子
    ~square_2D(); // 解構子
    void print_2D(); // 顯示長、寬和面積
};

class rect_3D : public square_2D {  // 繼承自 square_2D
private:
    float height;  // 長方體的高度

public:
    rect_3D();  // 建構子
    ~rect_3D(); // 解構子
    void print_3D();  // 顯示長、寬、高和體積
};
