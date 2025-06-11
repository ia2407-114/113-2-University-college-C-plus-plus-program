#pragma once
#include "base.h"

class castle : public base
{
private:
    double height; // 高度

public:
    castle() {
        cout << "請輸入圓柱體的高度: ";
        cin >> height;
    }

    void compute_volume() const {
        double volume = get_area() * height;
        cout << "圓柱體的體積: " << volume << endl;
    }

    void compute_height() const {
        cout << "圓柱體的高度: " << height << endl;
    }

    void display_castle() const {
        display_base();  // 顯示圓形資料
        compute_volume();  // 計算體積
        compute_height();  // 顯示高度
    }
};

