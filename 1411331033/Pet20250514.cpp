#include <string>
#include <iostream>
#include "Pet20250514.h"
#include "Date20250514.h"
using namespace std;

Pet::Pet() {} //�]���n�r������J �ҥH�غc�l�S�� :)

Pet& Pet::setPet(string F, string L, Date B, Date A)
{
    setFirst(F);
    setLast(L);
    setbirthDate(B);
    sethireDate(A);
    cout << "�d������غc��ơG" << "�d������" << (*this).firstName << ' ' << "�d���W��" << (*this).lastName << endl;
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
        throw invalid_argument("�ͤ餣�o�j���i��");
    else if (birthDate.getyear() == hireDate.getyear() && birthDate.getmonth() >= hireDate.getmonth() && birthDate.getday() > hireDate.getday())
        throw invalid_argument("�ͤ餣�o�j���i��");
}

Pet::~Pet()
{
    cout << "-----------------------------------------" << endl;
    cout << "�d�������G" << lastName << "\n�d���W�١G" << firstName << "\n��i��G";
    hireDate.print();
    cout << "\n�ͤ�G";
    birthDate.print();
    cout << "\n-----------------------------------------" << endl;
    cout << endl;
}
