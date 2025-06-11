#ifndef SQUARE_RECT_H
#define SQUARE_RECT_H

// 不要在 header 檔放 using namespace std

class square_2D {
protected:
    double length;
    double width;

public:
    square_2D(double l, double w);
    virtual ~square_2D();
    void print_2D() const;
};

class rect_3D : public square_2D {
private:
    double height;

public:
    rect_3D(double l, double w, double h);
    ~rect_3D();
    void print_3D() const;
};

#endif // SQUARE_RECT_H

