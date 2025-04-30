// Fig. 9.20: Pet.cpp
// Pet class member-function definitions.
#include "Pet.h"
#include "Date.h"
#include <iostream>
using namespace std;

Pet::Pet(string t, string n, Date bDate, Date aDate)
    : type(t), name(n), birthDate(bDate), adoptionDate(aDate) {}

Pet::~Pet() {
    cout << "寵物 " << name << " 的資料已經被刪除。" << endl;
    cout << "寵物類型: " << type << endl;
    cout << "名字: " << name << endl;
    cout << "生日: ";
    birthDate.printDate();
    cout << endl;
    cout << "領養日: ";
    adoptionDate.printDate();
    cout << endl;
}

void Pet::printPetDetails() const {
    cout << "寵物類型: " << type << endl;
    cout << "名字: " << name << endl;
    cout << "生日: ";
    birthDate.printDate();
    cout << endl;
    cout << "領養日: ";
    adoptionDate.printDate();
    cout << endl;
}

bool Pet::checkPetDetails() const {
    // 檢查寵物年齡是否合理
    int age = birthDate.calculateAge(2025, 4, 30);  // 假設當前年份為2025年
    if (age < 0 || age > 20) {
        cout << "錯誤: 寵物的年齡不合理。" << endl;
        return false;
    }

    // 檢查生日不大於領養日
    if (birthDate.calculateAge(adoptionDate) < 0) {
        cout << "錯誤: 生日不可晚於領養日。" << endl;
        return false;
    }

    return true;
}