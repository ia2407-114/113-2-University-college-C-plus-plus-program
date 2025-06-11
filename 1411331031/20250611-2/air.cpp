#include <iostream>
#include <string>
#include "air.h"
using namespace std;
Circ_1D::Circ_1D() {
	cout << "請輸入半徑";
	cin >> radius;
}
void Circ_1D::compute_circ() {
	cout << "圓周長為:" << radius * 2 * pi << endl;
}

Cron_3D::Cron_3D() {
	cout << "請輸入圓錐體高度:";
	cin >> height;
}
void Cron_3D::compute_volume() {
	volume = pi * radius * radius * height * 1 / 3;
	cout << "圓錐體體積為:" << volume << endl;
}

Pie_2D::Pie_2D() {

}
void Pie_2D::compute_area() {
	cout << "圓面積為:" << pi * radius * radius << endl;
}


Cylinder_3D::Cylinder_3D() {
	cout << "請輸入圓柱體高度:";
	cin >> height;
}
void Cylinder_3D::compute_volume() {
	volume = pi * radius * radius * height;
	cout << "圓柱體體積為:" << volume << endl;
}
void Cylinder_3D::compute_surface() {
	surface = (2 * pi * radius * height) + (2 * pi * radius * radius);
	cout << "圓柱體表面積為:" << surface << endl;
}

Castle::Castle() {

}
void Castle::compute_volume() {
	volume = Cron_3D::volume + Cylinder_3D::volume;
	cout << "城樓體積為:" << volume << endl;
}
void Castle::compute_height() {
	height = Cron_3D::height + Cylinder_3D::height;
	cout << "城樓高度為:" << height << endl;
}

