// Pet.cpp
#include "Pet.h"
#include <iostream>
using namespace std;

Pet::Pet(const string& sp, const string& nm,
    const Date& bd, const Date& ad)
    : species(sp), name(nm), birthDate(bd), adoptionDate(ad)
{
    // 檢查領養日 ? 生日
    if (!(birthDate <= adoptionDate))
        throw invalid_argument("Adoption date must be >= birth date");
    // 檢查年齡合理
    int age = birthDate.calculateAge(adoptionDate);
    if (age < 0 || age > 20)
        throw invalid_argument("Pet age must be between 0 and 20");

    cout << "Pet constructor: [" << species
        << "] " << name << ", age=" << age << endl;
}

void Pet::print() const {
    cout << "寵物種類: " << species
        << "，名字: " << name << endl
        << "  生日: ";   birthDate.print();
    cout << "  領養日: "; adoptionDate.print();
    cout << endl;
}

Pet::~Pet() {
    cout << "Pet destructor: [" << species
        << "] " << name << endl;
}
