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
    ~Pet(); // 結束前必須執行
private:
    string pet_type; // 宣告寵物類型
    string pet_Name; // 宣告寵物名稱
    const Date pet_birthDate; // 宣告寵物生日
    const Date pet_adoptDate; // 宣告寵物領養日
}; 

#endif