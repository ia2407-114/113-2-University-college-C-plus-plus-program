// Fig. 9.19: Pet.h
// Pet class definition showing composition.
// Member functions defined in Pet.cpp.
#ifndef PET_H
#define PET_H

#include "Date.h"
#include <string>
using namespace std;

class Pet {
public:
    Pet(string type, string name, Date birthDate, Date adoptionDate);  // �غc�l
    ~Pet();  // �Ѻc�l

    void printPetDetails() const;  // ��X�d�����
    bool checkPetDetails() const;  // �ˬd�d����Ʀ��ĩ�

private:
    string type;
    string name;
    Date birthDate;  // �ϥ� composition�ADate ���O�@����Ʀ���
    Date adoptionDate;
};
#endif // PET_H