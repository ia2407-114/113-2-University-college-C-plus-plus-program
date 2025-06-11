#include <iostream>
#include<string>
#include "HW.h"
using namespace std;

Circ_1D::Circ_1D()
{
	cout << "�}�l����Circ_1D" << endl;
	cout << "�п�J�b�|:";
	cin >> radius;
	compute_circ();
};
void Circ_1D::compute_circ()
{
	cout << "��X��P��:" << radius * 2 * pi << endl;
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
	cout << "�}�l����Cron_3D" << endl;
	cout << "�п�J����:";
	cin >> height;
	compute_volume();
};
void Cron_3D::compute_volume()
{
	volume = ((get_pi() * get_radius() * get_radius()) * height) / 3;
	cout << "��������n:" << volume << endl;
};
double Cron_3D::get_height_cron()
{
	return height;
};

Pie_2D::Pie_2D()
{
	cout << "�}�l����Pie_2D" << endl;
	area = get_radius() * get_radius() * get_pi();
};
void Pie_2D::compute_area()
{
	cout << "��X�ꭱ�n" << area << endl;
};

Cylinder_3D::Cylinder_3D()
{	
	cout << "�}�l����Cylinder_3D" << endl;
	cout << "�п�J����:";
	cin >> height;
};
void Cylinder_3D::compute_volume()
{
	volume = get_pi() * get_radius() * get_radius() * height;
	cout << "��X��W����n" << volume << endl;
};
void Cylinder_3D::compute_surface()
{
	surface = get_radius() * 2 * get_pi() * height + get_radius() * get_radius() * get_pi() * 2;
	cout << "��X��W�魱�n" << surface << endl;
};
double Cylinder_3D::get_height_cylinder()
{
	return height;
};


Castle::Castle()
{
	cout << "�п�J����:";
	cin >> height;
};
void Castle::compute_volume()
{

	volume = Cylinder_3D::get_pi() * Circ_1D::get_radius() * Circ_1D::get_radius() * height + Cron_3D::get_pi() * Circ_1D::get_radius() * Circ_1D::get_radius() * Cron_3D::get_height_cron() / 3;
	cout << "���Ӫ���n��:" << volume << endl;
};
void Castle::compute_height()
{
	height = get_height_cron() + get_height_cylinder();
	cout << "���Ӫ����׬�:" << height << endl;
};