#pragma once
#include "circ_1d.h"

class pie_2d : public circ_1d
{
public:
    pie_2d() {
        // �o�̤��ݭn�B�~��l�ơA�]���������غc�l�|�۰ʳQ�I�s
    }

    // �p���歱�n
    double compute_area() const {
        return pi * radius * radius;
    }
};
