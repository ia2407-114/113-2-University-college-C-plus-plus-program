#include <iostream>
#include <string>
using namespace std;
// ��P�����O 
class Circ_1D
{
public:
    double radius;  // �b�|
    double pi = 3.14;//�k
    double circ;
    // Circ_1D���O�غc���禡,�]�w��P�������
    Circ_1D();
    // ��ܶ�P�������
    void compute_circ();
};

// �������O 
class Cron_3D :public virtual Circ_1D
{
public:
    double height,volume;  // �w�q���B��n
    // Cron_3D���O�غc���禡,�]�w���������
    Cron_3D();
    void compute_volume();
};

// ������O
class Pie_2D :public virtual Circ_1D
{   
public:
    double area;  //�w�q�ꭱ�n 
    // Pie_2D���O�غc���禡,�]�w�ꭱ�n����� 
    Pie_2D();
    // ��ܶꭱ�n�����
    void compute_area();
};

//��W�����O
class Cylinder_3D :public virtual Circ_1D
{
public:
    double height, volume, surface;//�w�q���B��n�B���n
    // Cylinder_3D���O�غc���禡,�]�w��W�骺��� 
    Cylinder_3D();
    // ��ܶ�W�骺���
    void compute_volume();
    void compute_surface();
};

//�������O
class Castle :public virtual Cron_3D, public virtual Cylinder_3D
{
public:
    double height, volume;//�w�q���B��n
    // Castle���O�غc���禡,�]�w���Ӫ���� 
    Castle();
    // ��ܶ�W�骺���
    void compute_volume();
};