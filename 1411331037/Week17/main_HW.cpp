#include <iostream>
#include<string>
#include"HW.h"
using namespace std;

int main() {
	Circ_1D a;
	Cron_3D b;
	Pie_2D c;
	Cylinder_3D d;
	Castle e;
	a.compute_circ();
	b.compute_volume();
	c.compute_area();
	d.compute_volume();
	d.compute_surface();
	e.compute_volume();
	e.compute_height();
}