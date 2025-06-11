#include <iostream>// 
#include "Pet.h" // 連結Pet類別
#include "Date.h" // 連結Date類別
using namespace std;



Pet::Pet(const string& type, const string& name,
    const Date& dateOfBirth, const Date& dateOfAdopt)
    : pet_type(type), // 初始化寵物種類
    pet_Name(name), // 初始化寵物名字
    pet_birthDate(dateOfBirth), // 初始化寵物出生日
    pet_adoptDate(dateOfAdopt) // 初始化寵物領養日
{
    check();
    cout << pet_birthDate.get_year() << pet_birthDate.get_month() << pet_birthDate.get_day() << pet_adoptDate.get_year() << pet_adoptDate.get_month() << pet_adoptDate.get_day();
    cout << "Pet 預設資料:\n" << "寵物種類:" << type << "  ;  寵物名稱:" << name<<endl;
    
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
        throw invalid_argument("生日不得大於領養日");
    }
}

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "寵物名稱:" << pet_Name << ", 寵物種類:" << pet_type << "  領養日: ";
    pet_adoptDate.print();
    cout << "  出生日: ";
    pet_birthDate.print();
    cout << endl;
    cout << "Pet 結束顯示:\n" << "寵物種類:" << pet_type << ";寵物名稱:" << pet_Name << endl;
} // end ~Employee destructor


