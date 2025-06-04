#include <iostream>
#include "square_rect.h"

using namespace std;

int main() {
    double l, w, h;

    cout << "請輸入長方形的長和寬: ";
    cin >> l >> w;
    square_2D rect2D(l, w);
    rect2D.print_2D();

    cout << "\n請輸入長方體的長、寬和高: ";
    cin >> l >> w >> h;
    rect_3D rect3D(l, w, h);
    rect3D.print_3D();

    return 0;
}
