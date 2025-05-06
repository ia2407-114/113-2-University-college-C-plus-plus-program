#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

Pet::Pet(const string& first, const string& last, const Date& dob, const Date& adopt)
    : firstName(first), lastName(last), birthDate(dob), adoptDate(adopt) {
    cout << "建立寵物物件：" << firstName << " " << lastName << endl;
}

void Pet::print() const {
    cout << lastName << "，" << firstName << "  領養日: ";
    adoptDate.print();
    cout << "  生日: ";
    birthDate.print();
    cout << endl;
}

Pet::~Pet() {
    cout << "銷毀寵物物件：" << lastName << "，" << firstName << endl;
}
