#include <iostream>
#include <string>
#include "week14 Employee.h"
using namespace std;

int main()
{
    string phone;
    cout << "請輸入手機號碼（例如: 0912345678）: ";
    cin >> phone;

    if (phone.length() == 10 && phone.substr(0, 2) == "09") {
        cout << phone.substr(0, 4) << "-" << phone.substr(4, 3) << "-" << phone.substr(7, 3) << endl;
    }
    else {
        cout << "輸入錯誤" << endl;
    }

    cout << "Number of employees before instantiation of any objects is "
        << Employee::getCount() << endl;

    {
        Employee e1("Susan", "Baker");
        Employee e2("Robert", "Jones");

        cout << "Number of employees after objects are instantiated is "
            << Employee::getCount() << "\n\n";

        cout << "Employee 1: " << e1.getFirstName() << " " << e1.getLastName() << "\n";
        cout << "Employee 2: " << e2.getFirstName() << " " << e2.getLastName() << "\n";
    }

    cout << "\nNumber of employees after objects are deleted is "
        << Employee::getCount() << endl;

    return 0;
}