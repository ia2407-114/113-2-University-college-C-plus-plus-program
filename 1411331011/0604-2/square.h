#ifndef SQUARE_H
#define SQUARE_H

class square_2D {
private:
    double length;
    double width;

public:
    square_2D();
    ~square_2D();
    void print_2D();
    double getLength() const;
    double getWidth() const;
};

class rect_3D : public square_2D {
private:
    double height;

public:
    rect_3D();
    ~rect_3D();
    double compute_volume();
    double compute_surface();
    void print_3D();
};

#endif

