#include <iostream>
#include <string>
#include "square.h"

// square���O�غc���禡,�]�w����Ϊ����          
square2D::square2D()
{
    cout << "��������Osquare2D���غc���禡\n";
    cout << "��@�@�����:\n";
    cout << "��:";
    cin >> l;
    cout << "�e:";
    cin >> w;
}

// square���O�Ѻc���禡
square2D::~square2D()
{
    cout << "��������Osquare2D���Ѻc���禡.\n";
}

// ��ܪ���Ϊ����
void square2D::display()
{
    cout << "\n��:" << l << endl;
    cout << "�e:" << w << endl;

}
void square2D::display_2D(){
    cout << "����έ��n" << l * w << endl;
}
// rect3D���O�غc���禡,�]�wrect3D�����  
rect3D::rect3D()
{
    cout << "\n����l���Orect3D���غc���禡\n";
    cout << "��@�@������" << endl;
    cout << "���G";
    cin >> h;

}
// rect3D���O�Ѻc���禡
rect3D::~rect3D()
{
    cout << "����l���Orect3D���Ѻc���禡.\n";
}
// ���rect3D�����
void rect3D::display_3D()
{
    cout << "��:" << h << endl;
    cout << "��������n:" << l * w * h << endl;
}




