#pragma once
#include "base.h"

class castle : public base
{
private:
    double height; // ����

public:
    castle() {
        cout << "�п�J��W�骺����: ";
        cin >> height;
    }

    void compute_volume() const {
        double volume = get_area() * height;
        cout << "��W�骺��n: " << volume << endl;
    }

    void compute_height() const {
        cout << "��W�骺����: " << height << endl;
    }

    void display_castle() const {
        display_base();  // ��ܶ�θ��
        compute_volume();  // �p����n
        compute_height();  // ��ܰ���
    }
};

