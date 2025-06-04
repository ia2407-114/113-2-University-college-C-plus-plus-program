#include <iostream>
#include <string>
#ifndef SQUARE_H
#define SQUARE_H
using namespace std;
// ��������O
class square_2D
{
private:
    double length;
    double width;      // ���檫�s�� 

public:
    // flight_object���O�غc���禡,�]�w���檫�����          
    square_2D();
    ~square_2D();
    double compute_area() const;
    void print_2D();
};


// ���������O
class rect_3D :public square_2D
{
private:
    double height;

public:
    rect_3D();
    ~rect_3D();
    double compute_volume() const;
    void print_3D();
};
#endif