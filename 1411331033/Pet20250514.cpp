#include <string>
#include <iostream>
#include "Pet20250514.h"
#include "Date20250514.h"
using namespace std;

Pet::Pet() {} //因為要瀑布式輸入 所以建構子沒用 :)

Pet& Pet::setPet(string F, string L, Date B, Date A)
{
    setFirst(F);
    setLast(L);
    setbirthDate(B);
    sethireDate(A);
    cout << "寵物物件建構函數：" << "寵物種類" << (*this).firstName << ' ' << "寵物名稱" << (*this).lastName << endl;
    check();
    return *this;
}

Pet& Pet::setFirst(string First)
{
    firstName = First;
    return *this;
}

Pet& Pet::setLast(string Last)
{
    lastName = Last;
    return *this;
}

Pet& Pet::sethireDate(Date hire)
{
    hireDate = hire;
    return *this;
}

Pet& Pet::setbirthDate(Date birth)
{
    birthDate = birth;
    return *this;
}

void Pet::check()
{
    if (birthDate.getyear() > hireDate.getyear())
        throw invalid_argument("生日不得大於領養日");
    else if (birthDate.getyear() == hireDate.getyear() && birthDate.getmonth() >= hireDate.getmonth() && birthDate.getday() > hireDate.getday())
        throw invalid_argument("生日不得大於領養日");
}

Pet::~Pet()
{
    cout << "-----------------------------------------" << endl;
    cout << "寵物種類：" << lastName << "\n寵物名稱：" << firstName << "\n領養日：";
    hireDate.print();
    cout << "\n生日：";
    birthDate.print();
    cout << "\n-----------------------------------------" << endl;
    cout << endl;
}
