#pragma once
#include <iostream>
#include <string>
using namespace std;
// ���檫�����O 

class circ_1D
{

public:
    double C1D; //��P��     
    double radius, pi = 3.14;
    circ_1D();

    // ��ܶ�P�����
    void compute_circ();
};

// �������O 
class corn_3D:public circ_1D
{
public:
    double height,volume;  // �Q�����i���W�� 

    // ship_object���O�غc���禡,�]�w���檫�����
    corn_3D();

    void compute_volume();
};

// ������O

class pie_2D :public circ_1D
{
public:
    double area;  // �Q�����i���W�� 

    // ship_object���O�غc���禡,�]�w���檫�����
    pie_2D();

    void compute_area();
};

//��W��
class pie_2D :public circ_1D
{
public:
    double area;  // �Q�����i���W�� 

    // ship_object���O�غc���禡,�]�w���檫�����
    pie_2D();

    void compute_area();
};
