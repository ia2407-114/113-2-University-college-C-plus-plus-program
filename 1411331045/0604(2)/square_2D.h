
#include <iostream>
using namespace std;

class square_2D {
protected:
    float length;  // ����Ϊ���
    float width;   // ����Ϊ��e

public:
    square_2D();  // �غc�l
    ~square_2D(); // �Ѻc�l
    void print_2D(); // ��ܪ��B�e�M���n
};

class rect_3D : public square_2D {  // �~�Ӧ� square_2D
private:
    float height;  // �����骺����

public:
    rect_3D();  // �غc�l
    ~rect_3D(); // �Ѻc�l
    void print_3D();  // ��ܪ��B�e�B���M��n
};
