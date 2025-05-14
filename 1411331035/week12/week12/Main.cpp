#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

int main()
{
    string firstName, lastName;
    int birthMonth, birthDay, birthYear, hireMonth, hireDay, hireYear;

    cout << "Enter employee first name: ";
    cin >> firstName;
    cout << "Enter employee last name: ";
    cin >> lastName;

    cout << "Enter birthdate (month day year): ";
    cin >> birthMonth >> birthDay >> birthYear;

    cout << "Enter hire date (month day year): ";
    cin >> hireMonth >> hireDay >> hireYear;

    // Create Date objects for birth and hire date
    Date birthDate(birthMonth, birthDay, birthYear);
    Date hireDate(hireMonth, hireDay, hireYear);

    // Create Employee object
    Employee employee(firstName, lastName, birthDate, hireDate);

    // Display the employee details
    employee.print();  // Will call printName(), printHireDate(), and printBirthDate()

    return 0;
}
