#pragma once
#include "pie_2d.h"

class cron_3d : public pie_2d
{
private:
    double height;  // ����

public:
    cron_3d() {
        cout << "�п�J����������: ";
        cin >> height;
    }

    // �p�Ⲣ������n
    double compute_volume() const {
        return compute_area() * height / 3;  // ��������n��������歱�n*����/3
    }
};

