#include <iostream>
#include "cone.h"  // 引入 cone 類別的接口

using namespace std;

int main() {
    cone cone1;  // 創建一個 cone 物件，該物件同時具有圓周長、甜筒體積和圓餅面積的計算功能

    cone1.display();  // 顯示圓周長、甜筒體積和圓餅面積

    return 0;
};

