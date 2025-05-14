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
    cout << "�d������غc��ơG"
        << "�d������" << firstName << ' ' << "�d���W��" << lastName << endl;
    check();
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