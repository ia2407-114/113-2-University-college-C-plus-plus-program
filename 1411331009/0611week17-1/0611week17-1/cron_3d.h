#pragma once
#include "pie_2d.h"

class cron_3d : public pie_2d
{
private:
    double height;  // 高度

public:
    cron_3d() {
        cout << "請輸入甜筒的高度: ";
        cin >> height;
    }

    // 計算甜筒的體積
    double compute_volume() const {
        return compute_area() * height / 3;  // 甜筒的體積公式為圓餅面積*高度/3
    }
};

