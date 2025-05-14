#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

// �غc�l�A��l���d�����
Pet::Pet(const string& first, const string& last, const Date& dateOfBirth, const Date& dateOfTake)
    : classes(first), Name(last), birthDate(dateOfBirth), takeDate(dateOfTake)
{
    // ��X�d�����W�٩M����
    cout << "�d������: " << classes << " �d���W�r: " << Name << endl;
}

// �r������ơA�C�X�d���ԲӸ��
void Pet::print() const
{
    // ��X�d�����W�r�B�����B��i��M�ͤ�
    cout << "�d���W�r: " << this->Name << " ����: " << this->classes << "  ��i��: ";
    this->takeDate.print();  // �ϥ� this ���нե� takeDate �� print() ���
    cout << "  �ͤ�: ";
    this->birthDate.print();  // �ϥ� this ���нե� birthDate �� print() ���
    cout << endl;
}

// �Ѻc�l�A��ܾP���T��
Pet::~Pet()
{
    cout << "Pet object destructor >> "
        << "�W�r: " << this->Name << " ����: " << this->classes << endl;
}