#include <iostream>
#include "week13-2 Pet.h"
using namespace std;

int main() {
	string firstName, lastName;
	int birthMonth, birthDay, birthYear;
	int adoptMonth, adoptDay, adoptYear;

	cout << "Enter pet's first name: ";
	cin >> firstName;
	cout << "Enter pet's last name: ";
	cin >> lastName;

	cout << "Enter pet's birth date (MM DD YYYY): ";
	cin >> birthMonth >> birthDay >> birthYear;
	Date birth(birthMonth, birthDay, birthYear);

	cout << "Enter pet's adoption date (MM DD YYYY): ";
	cin >> adoptMonth >> adoptDay >> adoptYear;
	Date adopt(adoptMonth, adoptDay, adoptYear);

	Pet pet(firstName, lastName, birth, adopt);
	cout << endl;
	pet.printFirstName().printLastName().printDates();
}