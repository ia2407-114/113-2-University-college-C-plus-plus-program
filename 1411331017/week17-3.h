#ifndef CYLINDER2_H
#define CYLINDER2_H
#include <iostream>
#include <string>
using namespace std;
class circle {
protected:
    double radius;
public:
    circle();
};

class height {
protected:
    double h;
public:
    height();
};

class cylinder2 : public circle, public height {
public:
    cylinder2();
    void display();
};

#endif

