#ifndef CYLINDER_H
#define CYLINDER_H
#include <iostream>
#include <string>
using namespace std;

class square_2D {
protected:
    double length;
    double width;
public:
    square_2D();
    void print_2D();
};

class cylinder : public square_2D {
private:
    double height;
public:
    cylinder();
    void print_3D();
};

#endif

