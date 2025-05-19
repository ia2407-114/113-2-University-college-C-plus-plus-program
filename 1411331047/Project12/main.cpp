#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

int main()
{
    string firstName, lastName;
    int birthMonth, birthDay, birthYear, hireMonth, hireDay, hireYear;

    cout << "Enter Pet first name: ";
    cin >> firstName;
    cout << "Enter Pet last name: ";
    cin >> lastName;

    cout << "Enter birthdate (month day year): ";
    cin >> birthMonth >> birthDay >> birthYear;

    cout << "Enter hire date (month day year): ";
    cin >> hireMonth >> hireDay >> hireYear;

    // Create Date objects for birth and hire date
    Date birthDate(birthMonth, birthDay, birthYear);
    Date hireDate(hireMonth, hireDay, hireYear);

    // Create Pet object
    Pet Pet(firstName, lastName, birthDate, hireDate);

    // Display the Pet details
    Pet.print();  // Will call printName(), printHireDate(), and printBirthDate()

    return 0;
}