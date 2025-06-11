#include <iostream>
#include "Cylinder_3D.h"
using namespace std;

int main() {
    double r, h;

    cout << "【題目三】城樓計算\n";
    cout << "請輸入半徑: ";
    cin >> r;
    cout << "請輸入高度: ";
    cin >> h;

    Castle castle(r, h);  // 建立 Castle 物件
    castle.print();        // 輸出結果

    return 0;
}
