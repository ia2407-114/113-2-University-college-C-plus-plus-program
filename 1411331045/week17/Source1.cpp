#include <iostream>
#include "castle.h"  // 引入城樓類別

using namespace std;

int main() {
    Castle castle1;  // 創建城樓物件，該物件會擁有圓周長、圓錐體體積、圓餅面積和圓柱體表面積的功能

    // 顯示圓周長、甜筒體積、圓柱體表面積等結果
    castle1.display();  // 顯示所有計算結果

    return 0;
}
