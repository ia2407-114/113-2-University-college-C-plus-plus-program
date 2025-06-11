#ifndef CRON_1D_H   // �p�G�S���w�q CRON_1D_H�A�N�w�q���A�ð���H�U���e
#define CRON_1D_H   // �w�q CRON_1D_H

#include <iostream>
using namespace std;

const double PI = 3.14;

class Circ_1D {
protected:
    double radius;
public:
    Circ_1D(double r);  // �غc�l
    ~Circ_1D();         // �Ѻc�l
    double compute_circ();  // �p���P��
};

class Cron_1D : public Circ_1D {
protected:
    double height, volume;
public:
    Cron_1D(double r, double h);  // �غc�l
    ~Cron_1D();                   // �Ѻc�l
    void print();                  // ��X��������n�P��P��
};

#endif // CRON_1D_H   // �T�O #endif �� #ifndef �t��A�o�̬O�����O�@�϶�
