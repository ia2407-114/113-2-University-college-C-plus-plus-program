#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

Pet::Pet(const string& first, const string& last,
    const Date& dateOfBirth, const Date& dateOfHire)
    : firstName(first),
    lastName(last),
    birthDate(dateOfBirth),
    hireDate(dateOfHire)
{
    cout << "寵物物件建構函數："
        << "寵物種類" << firstName << ' ' << "寵物名稱" << lastName << endl;
    check();
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