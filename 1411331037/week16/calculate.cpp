#include <iostream>
#include <string>
#include "calculate.h"
using namespace std;


square_2D::square_2D() 
{
	cout << "�}�l����square_2D���غc�l�{��" << endl;
	cout << "��J�����ƭ�:";
	cin >> length;
	cout << "��J�e���ƭ�:";
	cin >> width;
	area = length * width;
}

square_2D::~square_2D()
{
	cout << "����square_2D���Ѻc�l�{��" << endl;
}

void square_2D::print_square2D()
{
	cout << "��Xsquare_2D���n:" << endl;
	cout << "����" << length << ",�e��" << width << ",���n��" << area << endl;
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
	cout << "�}�l����rect_3D���غc�l�{��" << endl;
	cout << "��J�����ƭ�:";
	cin >> height;
	area2 = get_length() * get_width() * height;
}

rect_3D::~rect_3D()
{
	cout << "����rect_3D���Ѻc�l�{��" << endl;
}

void rect_3D::print_rect3D()
{
	cout << "��Xrect_3D���n:" << endl;
	cout << "����" << get_length() << ",�e��" <<get_width() << ",����" << height<< ",���n��" << area2 << endl;
}