#include <iostream>
#include "Cone3D.h"

using namespace std;

int main()
{
    Cone3D cone;  // 創建錐形物件（包含圓周長計算功能）
    double radius, height;

    // 設定圓的半徑
    cout << "請輸入圓的半徑: ";
    cin >> radius;

    // 設定錐形的高度
    cout << "請輸入錐形的高度: ";
    cin >> height;

    // 設定圓的半徑和錐形的高度
    cone.setRadius(radius);
    cone.setHeight(height);

    // 計算錐形的體積
    cone.compute_volume();

    // 顯示圓周長與錐形資料
    cone.display_circumference();
    cone.display();

    return 0;
}
