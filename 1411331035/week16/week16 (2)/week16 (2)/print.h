#ifndef Square_2D
#define Square_2D
#include <iostream>
#include <string>

using namespace std;

class square_2D {

public:
	int L, width, M;
	square_2D();
	~square_2D();
	void print2D();
};
class rect_3D : public square_2D {
private:
	int height, V;
public:
	rect_3D();
	~rect_3D();
	void print3D();
};
#endif