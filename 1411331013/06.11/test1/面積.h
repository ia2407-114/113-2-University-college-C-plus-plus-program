#include <iostream>
#include <string>
using namespace std;
// ��P�����O 
class Circ_1D
{
public:     
    double radius;       // �b�|
    double pi = 3.14;    // �k
    // Circ_1D���O�غc���禡,�]�w��P�������
    Circ_1D();

    // ��ܭ��檫�����
    double print_1D();
    void compute_circ();
};

// �������O 
class Cron_3D :public Circ_1D
{
public:
    double height;
    double volume;// ������n

    // Cron_3D���O�غc���禡,�]�w���������
    Cron_3D();
    double print_3D();
    void compute_volume();
};

// ������O
class Pie_2D :public Circ_1D
{
private:
    double area;

public:
    // airliner���O�غc���禡,�]�w�j���Ⱦ������ 
    Pie_2D();

    // ��ܤj���Ⱦ������
    double print_2D();
    void comput_area();
};