#include <iostream>
#include "cron_3d.h"
using namespace std;

int main()
{
    cron_3d cone;  // 創建甜筒物件
    cout << "\n圓餅與甜筒資料:\n";
    cout << "圓周長: " << cone.compute_circ() << endl;  // 顯示圓周長
    cout << "圓餅面積: " << cone.compute_area() << endl;  // 顯示圓餅面積
    cout << "甜筒體積: " << cone.compute_volume() << endl;  // 顯示甜筒體積

    return 0;
}
