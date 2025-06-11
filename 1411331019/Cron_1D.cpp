#include "Cron_1D.h"
#include <cmath>

// Circ_1D ���O���غc�l
Circ_1D::Circ_1D(double r) : radius(r) {
    cout << "Circ_1D �غc�l�I�s" << endl;
}

// Circ_1D ���O���Ѻc�l
Circ_1D::~Circ_1D() {
    cout << "Circ_1D �Ѻc�l�I�s" << endl;
}

// �p���P��
double Circ_1D::compute_circ() {
    return 2 * PI * radius;
}

// Cron_1D ���O���غc�l
Cron_1D::Cron_1D(double r, double h) : Circ_1D(r), height(h) {
    cout << "Cron_1D �غc�l�I�s" << endl;
    volume = (1.0 / 3.0) * PI * radius * radius * height;  // ������n����
}

// Cron_1D ���O���Ѻc�l
Cron_1D::~Cron_1D() {
    cout << "Cron_1D �Ѻc�l�I�s" << endl;
}

// ��X��������n�P������P��
void Cron_1D::print() {
    cout << "������n: " << volume << endl;
    cout << "������P��: " << compute_circ() << endl;
}
