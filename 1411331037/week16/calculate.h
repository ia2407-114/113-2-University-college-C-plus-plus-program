#include <iostream>
#include <string>
using namespace std;

class square_2D
{
private:
	double length;
	double width;
	double area;
public:
	square_2D();
	~square_2D();
	double get_width();
	double get_length();
	void print_square2D();
};


class rect_3D :public square_2D
{
private:
	double height;
	double area2;

public:
	rect_3D();
	~rect_3D();
	void print_rect3D();
};