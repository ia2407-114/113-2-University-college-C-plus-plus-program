#include <iostream>
#include "cron_3d.h"
using namespace std;

int main()
{
    cron_3d cone;  // �Ыز�������
    cout << "\n���P�������:\n";
    cout << "��P��: " << cone.compute_circ() << endl;  // ��ܶ�P��
    cout << "��歱�n: " << cone.compute_area() << endl;  // ��ܶ�歱�n
    cout << "������n: " << cone.compute_volume() << endl;  // ��ܲ�����n

    return 0;
}
