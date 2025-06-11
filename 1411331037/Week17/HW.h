#include <iostream>
#include<string>
using namespace std;

class Circ_1D
{	
public:
	Circ_1D();
	void compute_circ();
	double get_radius();
	double get_pi();
private:
	double radius;
	double pi = 3.14;
};

class Cron_3D :public Circ_1D
{
public:
	Cron_3D();
	void compute_volume();
	double get_height_cron();
	double volume;
private:
	double height;
};

class Pie_2D :public Circ_1D
{
public:
	Pie_2D();
	void compute_area();
private:
	double area;
};

class Cylinder_3D :public Pie_2D
{
public:
	Cylinder_3D();
	void compute_volume();
	void compute_surface();
	double get_height_cylinder();
	double volume;
private:
	double height, surface;
};

class Castle :public Cylinder_3D, public Cron_3D
{
public:
	Castle();
	void compute_volume();
	void compute_height();
private:
	double height, volume;
};