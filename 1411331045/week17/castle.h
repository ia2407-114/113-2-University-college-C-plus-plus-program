#include <iostream>
using namespace std;

// === ��¦���O�G��P���� ===
class Circ_1D {
protected:
    double radius;       // �b�|
    const double pi = 3.1415;  // ��P�v�A�w�]�� 3.1415

public:
    Circ_1D() {  // �غc�l�A��l�ƶꪺ�b�|
        cout << "�п�J�ꪺ�b�|: ";
        cin >> radius;
    }

    void compute_circ() {  // �p���P��
        double circumference = 2 * pi * radius;
        cout << "��P��: " << circumference << endl;
    }
};

// === ���@�����O ===
// �~�Ӧ� Circ_1D�A�]���i�ϥ� radius �P pi
class Circ_3D : public Circ_1D {
protected:
    double height;  // ����
    double volume;  // ��n

public:
    Circ_3D() : Circ_1D() {  // �I�s�����غc�l�Ӫ�l�ƶꪺ�b�|
        cout << "�п�J���@�骺����: ";
        cin >> height;  // ���ϥΪ̿�J���@�骺����
    }

    void compute_volume() {  // �p����@�骺��n
        volume = (1.0 / 3) * pi * radius * radius * height;  // ���@����n����
        cout << "���@�骺��n: " << volume << endl;
    }

    double getVolume() const {  // ������k�A��^ volume
        return volume;
    }
};

// === ������O ===
// �~�Ӧ� Circ_1D�A�]���i�ϥ� radius �P pi
class Pie_2D : public Circ_1D {
protected:
    double area;  // ���n

public:
    Pie_2D() : Circ_1D() {  // �I�s�������غc�l�Ӫ�l�ƶꪺ�b�|
    }

    void compute_area() {  // �p���檺���n
        area = pi * radius * radius;
        cout << "��檺���n: " << area << endl;
    }
};

// === ��W�����O ===
// �~�Ӧ� Pie_2D�A�]���i�ϥ� area�Bradius�Bpi
class Cylinder_3D : public Pie_2D {
protected:
    double height;  // ����
    double volume;  // ��n
    double surface; // ���n

public:
    Cylinder_3D() : Pie_2D() {  // �I�s�������غc�l�Ӫ�l�ƶꪺ�b�|
        cout << "�п�J��W�骺����: ";
        cin >> height;  // ���ϥΪ̿�J��W�骺����
    }

    void compute_volume() {  // �p���W�骺��n
        volume = pi * radius * radius * height;  // ��W����n����
        cout << "��W�骺��n: " << volume << endl;
    }

    void compute_surface() {  // �p���W�骺���n
        surface = 2 * pi * radius * (radius + height);  // ��W����n����
        cout << "��W�骺���n: " << surface << endl;
    }

    double getVolume() const {  // ������k�A��^ volume
        return volume;
    }
};

// === �������O ===
// �P���~�� Cylinder_3D �M Circ_3D
class Castle : public Cylinder_3D, public Circ_3D {
private:
    double height;  // ���Ӫ��`����
    double total_volume;  // ���Ӫ��`��n

public:
    Castle() : Cylinder_3D(), Circ_3D() {  // �I�s�������غc�l�Ӫ�l�ƶꪺ�b�|�B���@�骺���שM��W�骺����
        cout << "�п�J���Ӫ��`����: ";
        cin >> height;  // ��J�����`����
    }

    void compute_volume() {  // �p�⫰�Ӫ��`��n
        total_volume = Circ_3D::getVolume() + Cylinder_3D::getVolume();  // �X�ֶ��@����n�P��W����n
        cout << "���Ӫ��`��n: " << total_volume << endl;
    }

    void compute_height() {  // ��ܫ��Ӫ��`����
        cout << "���Ӫ��`����: " << height << endl;
    }

    // ��ܩҦ��p�⵲�G
    void display() {
        Circ_3D::compute_circ();      // �p��ꪺ�P��
        compute_volume();    // �p����@�骺��n�]�íp�⫰�Ӫ��`��n�^
        compute_surface();   // �p���W�骺���n
        cout << "��������n: " << Circ_3D::getVolume() << endl;  // ��ܶ��@�骺��n
        compute_height();    // ��ܫ��Ӫ��`����
    }
};