#ifndef SWEETCONE_H
#define SWEETCONE_H
#include <iostream>
#include <string>
using namespace std;

class cone {
protected:
    string shape;
public:
    cone();
};

class icecream {
protected:
    string flavor;
public:
    icecream();
};

class sweetcone : public cone, public icecream {
public:
    sweetcone();
    void display();
};

#endif

