#pragma once
#include "circ_1d.h"

class pie_2d : public circ_1d
{
public:
    pie_2d() {
        // 這裡不需要額外初始化，因為基類的建構子會自動被呼叫
    }

    // 計算圓餅面積
    double compute_area() const {
        return pi * radius * radius;
    }
};
