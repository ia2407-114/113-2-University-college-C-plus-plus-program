#include <iostream>
#include "square_2D.h"
using namespace std;

int main() {
    float length, width, height;

    // 讓使用者輸入長方形的長和寬
    cout << "請輸入長方形的長和寬:" << endl;
    cout << "長: ";
    cin >> length;
    cout << "寬: ";
    cin >> width;

    // 建立並顯示長方形
    square_2D rect2D(length, width);
    rect2D.print_2D();

    // 讓使用者輸入長方體的高
    cout << "\n請輸入長方體的高:" << endl;
    cout << "高: ";
    cin >> height;

    // 建立並顯示長方體
    rect_3D rect3D(length, width, height);
    rect3D.print_2D();  // 顯示長方形的資料
    rect3D.print_3D();  // 顯示長方體的資料

    return 0;
}
