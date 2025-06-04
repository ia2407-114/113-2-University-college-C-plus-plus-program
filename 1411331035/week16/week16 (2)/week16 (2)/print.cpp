#include <iostream>
#include <string>
#include "print.h"
using namespace std;

square_2D::square_2D() {
	cout << "long";
	cin >> L;
	cout << "width";
	cin >> width;
	
}
square_2D::~square_2D(){}
void square_2D::print2D() {
	cout << "long" << L << endl;
	cout << "width" << width << endl;
	cout << "­±¿n" << L * width << endl;
}

rect_3D::rect_3D() {
	cout << "height";
	cin >> height;
}
rect_3D::~rect_3D() {}
void rect_3D::print3D(){
	cout << "long" << L << endl;
	cout << "width" << width << endl;
	cout << "height" << height << endl;
	cout << "­±¿n" << L * width << endl;
	cout << "Åé¿n" << L * width * height << endl;
}