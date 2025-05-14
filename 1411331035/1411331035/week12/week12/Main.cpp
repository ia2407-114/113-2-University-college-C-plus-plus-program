#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

int main()
{
	string species, name;
	int birthMonth, birthDay, birthYear, adoptMonth, adoptDay, adoptYear;

	// Let the user input pet data
	cout << "Enter pet species: ";
	cin >> species;
	cout << "Enter pet name: ";
	cin >> name;

	cout << "Enter birthdate (month day year): ";
	cin >> birthMonth >> birthDay >> birthYear;

	cout << "Enter adoption date (month day year): ";
	cin >> adoptMonth >> adoptDay >> adoptYear;

	// Create Date objects for birth and adoption date
	Date birthDate(birthMonth, birthDay, birthYear);
	Date adoptDate(adoptMonth, adoptDay, adoptYear);

	// Create Pet object
	Pet pet(species, name, birthDate, adoptDate);

	// Display the pet details
	pet.print();  // Will call printName(), printAdoptDate(), and printBirthDate()

	return 0;
}
