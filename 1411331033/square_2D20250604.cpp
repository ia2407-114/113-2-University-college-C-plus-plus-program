#include <iostream>
#include <string>
#include "square_2D20250604.h"
using namespace std;

square_2D::square_2D()
{
    cout << "��������Osquare_2D_object���غc���禡\n";
    cout << "��@�@�����:\n";
    cout << "����:";
    cin >> length;
    cout << "�e��:";
    cin >> width;
}
square_2D::~square_2D()
{
    cout << "��������Osquare_2D_object���Ѻc���禡.\n";
}
void square_2D::square_2D_area()
{
    cout << "����Ϊ�:" << length << endl;
    cout << "����μe:" << width << endl;
    cout << "����έ��n:" << length * width << endl;
}

rect_3D::rect_3D()
{
    cout << "\n����l���Orect_3D���غc���禡\n";
    cout << "����:";
    cin >> high;
}

rect_3D::~rect_3D()
{
    cout << "����l���Orect_3D���Ѻc���禡.\n";
}

void rect_3D::rect_3D_area()
{
    cout << "�������:" << length << endl;
    cout << "������e:" << width << endl;
    cout << "�����鰪:" << high << endl;
    cout << "��������n:" << length * width * high << endl;
} 




