#include <iostream>
#include<string>
#include "HW.h"
using namespace std;

Circ_1D::Circ_1D()
{
	cout << "請輸入半徑:";
	cin >> radius;
	compute_circ();
};
void Circ_1D::compute_circ()
{
	cout << "輸出圓周長:" << radius *2* pi << endl;
};
double Circ_1D::get_radius()
{
	return radius;
};
double Circ_1D::get_pi()
{
	return pi;
};


Cron_3D::Cron_3D()
{
	cout << "請輸入高度:";
	cin >> height;
	compute_volume();
};
void Cron_3D::compute_volume()
{
	volume = get_pi() * get_radius() * get_radius() * height / 3;
	cout << "甜筒的體積:" << volume << endl;
};
double Cron_3D::get_height_cron()
{
	return height;
};

Pie_2D::Pie_2D()
{
	area = get_radius() * get_radius() * get_pi();
};
void Pie_2D::compute_area()
{
	cout << "輸出圓面積" << area;
};

Cylinder_3D::Cylinder_3D()
{
	height, volume, surface = 0.0;
	cout << "請輸入高度:";
	cin >> height;
};
void Cylinder_3D::compute_volume()
{
	volume = get_pi() * get_radius() * get_radius() * height;
};
void Cylinder_3D::compute_surface()
{
	surface = get_radius() * 2 * get_pi() * height + get_radius() * get_radius() * get_pi() * 2;
};
double Cylinder_3D::get_height_cylinder()
{
	return height;
};


Castle::Castle()
{
	cout << "請輸入高度:";
	cin >> height;
};
void Castle::compute_volume()
{
	volume = Cron_3D::volume + Cylinder_3D::volume;
	cout << "城樓的體積為:" << volume << endl;
};
void Castle::compute_height()
{
	height = get_height_cron() + get_height_cylinder();
	cout << "城樓的高度為:" << height << endl;
};