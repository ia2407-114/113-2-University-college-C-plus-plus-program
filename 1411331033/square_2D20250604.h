#pragma once
#include <iostream>
#include <string>
using namespace std;

class square_2D
{
public:

    square_2D();
    ~square_2D();
    void square_2D_area();

    int length;
    int width;

};

class rect_3D :public square_2D
{
public:
    rect_3D();
    ~rect_3D();
    void rect_3D_area();

	private:
        int high;
};