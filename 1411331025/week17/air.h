#ifndef SHAPES_H
#define SHAPES_H

class Circle {
protected:
    float radius;
    float circumference;
    float pi = 3.14f;
public:
    Circle();
    void display();
    float getRadius() const;
};

class Area : virtual public Circle {
protected:
    float area;
public:
    Area();
    void display();
};

class ConeVolume : virtual public Circle {
protected:
    float height_cone;
    float cone_volume;
public:
    ConeVolume();
    void display();
    float getVolume() const;
};

class Cylinder : public Area {
protected:
    float height_cyl;
    float surface_area;
    float cylinder_volume;
public:
    Cylinder();
    void display();
    float getVolume() const;
};

class Tower : public ConeVolume, public Cylinder {
private:
    float total_volume;
public:
    Tower();
    void display();
};

#endif
