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
    Pet(string type, string name, Date birthDate, Date adoptionDate);  // 建構子
    ~Pet();  // 解構子

    void printPetDetails() const;  // 輸出寵物資料
    bool checkPetDetails() const;  // 檢查寵物資料有效性

private:
    string type;
    string name;
    Date birthDate;  // 使用 composition，Date 類別作為資料成員
    Date adoptionDate;
};
#endif // PET_H