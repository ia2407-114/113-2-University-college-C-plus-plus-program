#include <iostream>
#include "square_2D.h"  // 引入 rect_3D 類別

using namespace std;


int main() {
    rect_3D box1;         // 建立大型客機物件 air1
    box1.print_2D();        // 顯示飛行物的資料
    box1.print_3D(); // 顯示大型客機的資料
    return 0;
}
