#include <iostream>
#include <string>
#include "calculate.h"
using namespace std;


square_2D::square_2D() 
{
	cout << "開始執行square_2D的建構子程序" << endl;
	cout << "輸入長的數值:";
	cin >> length;
	cout << "輸入寬的數值:";
	cin >> width;
	area = length * width;
}

square_2D::~square_2D()
{
	cout << "執行square_2D的解構子程序" << endl;
}

void square_2D::print_square2D()
{
	cout << "輸出square_2D面積:" << endl;
	cout << "長為" << length << ",寬為" << width << ",面積為" << area << endl;
}


double square_2D::get_width()
{
	return width;
}

double square_2D::get_length()
{
	return length;
}

rect_3D::rect_3D()
{
	cout << "開始執行rect_3D的建構子程序" << endl;
	cout << "輸入高的數值:";
	cin >> height;
	area2 = get_length() * get_width() * height;
}

rect_3D::~rect_3D()
{
	cout << "執行rect_3D的解構子程序" << endl;
}

void rect_3D::print_rect3D()
{
	cout << "輸出rect_3D面積:" << endl;
	cout << "長為" << get_length() << ",寬為" <<get_width() << ",高為" << height<< ",面積為" << area2 << endl;
}