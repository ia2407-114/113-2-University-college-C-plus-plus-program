#include <iostream>
#include <string>
#include "air.h"
using namespace std;
Circ_1D::Circ_1D() {
	cout << "�п�J�b�|";
	cin >> radius;
}
void Circ_1D::compute_circ() {
	cout << "��P����:" << radius * 2 * pi << endl;
}

Cron_3D::Cron_3D() {
	cout << "�п�J���@�鰪��:";
	cin >> height;
}
void Cron_3D::compute_volume() {
	volume = pi * radius * radius * height * 1 / 3;
	cout << "���@����n��:" << volume << endl;
}

Pie_2D::Pie_2D() {

}
void Pie_2D::compute_area() {
	cout << "�ꭱ�n��:" << pi * radius * radius << endl;
}


Cylinder_3D::Cylinder_3D() {
	cout << "�п�J��W�鰪��:";
	cin >> height;
}
void Cylinder_3D::compute_volume() {
	volume = pi * radius * radius * height;
	cout << "��W����n��:" << volume << endl;
}
void Cylinder_3D::compute_surface() {
	surface = (2 * pi * radius * height) + (2 * pi * radius * radius);
	cout << "��W����n��:" << surface << endl;
}

Castle::Castle() {

}
void Castle::compute_volume() {
	volume = Cron_3D::volume + Cylinder_3D::volume;
	cout << "������n��:" << volume << endl;
}
void Castle::compute_height() {
	height = Cron_3D::height + Cylinder_3D::height;
	cout << "���Ӱ��׬�:" << height << endl;
}

