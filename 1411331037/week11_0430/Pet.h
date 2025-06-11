#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition
using namespace std;



class Pet
{
public:
    Pet(const string&, const string&,const Date&, const Date&);
    void print() const;
    void check();
    ~Pet(); // �����e��������
private:
    string pet_type; // �ŧi�d������
    string pet_Name; // �ŧi�d���W��
    const Date pet_birthDate; // �ŧi�d���ͤ�
    const Date pet_adoptDate; // �ŧi�d����i��
}; 

#endif