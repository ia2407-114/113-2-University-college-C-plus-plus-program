#include <iostream>
using namespace std;

// �����O: square_2D (�����)
class square_2D {
protected:
    float length;  // ����Ϊ���
    float width;   // ����Ϊ��e

public:
    // �غc�l
    square_2D() {
        cout << "�п�J����Ϊ���: ";
        cin >> length;
        cout << "�п�J����Ϊ��e: ";
        cin >> width;
    }

    // �Ѻc�l
    ~square_2D() {
        cout << "�P������Ϊ���...\n";
    }

    // ��X����Ϊ��ݩʻP���n
    void print_2D() {
        float area = length * width;
        cout << "����Ϊ�: " << length << ", �e: " << width << ", ���n: " << area << endl;
    }
};

// �l�����O: rect_3D (������A�~�Ӧ� square_2D)
class rect_3D : public square_2D {
private:
    float height;  // �����骺����

public:
    // �غc�l
    rect_3D() : square_2D() {  // ���I�s�����O���غc�l
        cout << "�п�J�����骺��: ";
        cin >> height;
    }

    // �Ѻc�l
    ~rect_3D() {
        cout << "�P�������骫��...\n";
    }

    // ��X�����骺�ݩʻP��n
    void print_3D() {
        float volume = length * width * height;
        cout << "�������: " << length << ", �e: " << width << ", ��: " << height << ", ��n: " << volume << endl;
    }
};

int main() {
    // �إߤ@�Ӫ���Ϊ���
    square_2D square;
    square.print_2D();  // ��X����Ϊ����B�e�P���n

    // �إߤ@�Ӫ����骫��
    rect_3D rectangle;
    rectangle.print_2D();  // ��X����Ϊ����B�e�P���n�]�Ӧۤ����O�^
    rectangle.print_3D();  // ��X�����骺���B�e�B���P��n

    return 0;
}
