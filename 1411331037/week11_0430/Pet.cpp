#include <iostream>// 
#include "Pet.h" // �s��Pet���O
#include "Date.h" // �s��Date���O
using namespace std;



Pet::Pet(const string& type, const string& name,
    const Date& dateOfBirth, const Date& dateOfAdopt)
    : pet_type(type), // ��l���d������
    pet_Name(name), // ��l���d���W�r
    pet_birthDate(dateOfBirth), // ��l���d���X�ͤ�
    pet_adoptDate(dateOfAdopt) // ��l���d����i��
{
    check();
    cout << pet_birthDate.get_year() << pet_birthDate.get_month() << pet_birthDate.get_day() << pet_adoptDate.get_year() << pet_adoptDate.get_month() << pet_adoptDate.get_day();
    cout << "Pet �w�]���:\n" << "�d������:" << type << "  ;  �d���W��:" << name<<endl;
    
} 

void Pet::check()
{
    if (pet_birthDate.get_year() > pet_adoptDate.get_year() ||
        (pet_birthDate.get_year() == pet_adoptDate.get_year() &&
            pet_birthDate.get_month() > pet_adoptDate.get_month()) ||
        (pet_birthDate.get_year() == pet_adoptDate.get_year() &&
            pet_birthDate.get_month() == pet_adoptDate.get_month() &&
            pet_birthDate.get_day() > pet_adoptDate.get_day()))
    {
        throw invalid_argument("�ͤ餣�o�j���i��");
    }
}

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "�d���W��:" << pet_Name << ", �d������:" << pet_type << "  ��i��: ";
    pet_adoptDate.print();
    cout << "  �X�ͤ�: ";
    pet_birthDate.print();
    cout << endl;
    cout << "Pet �������:\n" << "�d������:" << pet_type << ";�d���W��:" << pet_Name << endl;
} // end ~Employee destructor


