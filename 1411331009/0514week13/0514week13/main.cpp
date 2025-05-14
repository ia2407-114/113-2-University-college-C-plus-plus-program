// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h"  // �ޤJ Pet ���O���Y���
#include "Date.h" // �ޤJ Date ���O���Y���
using namespace std;

int main()
{
    string petClass, petName;
    int year, month, day;

    // ��J�d������
    cout << "�п�J�d������: ";
    cin >> petClass;

    // ��J�d���W�r
    cout << "�п�J�d���W�r: ";
    cin >> petName;

    // ��J�d���ͤ�
    cout << "�п�J�d���ͤ� (�~ �� ��): ";
    cin >> year >> month >> day;
    Date birth(month, day, year); // �ھڥΤ��J������إ� Date ����

    // ��J�d����i��
    cout << "�п�J�d����i�� (�~ �� ��): ";
    cin >> year >> month >> day;
    Date take(month, day, year); // �ھڥΤ��J������إ� Date ����

    // �إ� Pet ����A������d�����
    Pet pet(petClass, petName, birth, take);
    pet.print(); // ���L�d�������

    return 0;
}