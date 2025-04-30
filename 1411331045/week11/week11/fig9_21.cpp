// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include <vector>
#include "Pet.h"
#include "Date.h"// ���]�A�N Pet �M Date ���O���{���X���}�å]�t�b��

using namespace std;

int main() {
    vector<Pet> pets;
    string type, name;
    int birthYear, birthMonth, birthDay;
    int adoptionYear, adoptionMonth, adoptionDay;

    // ��J�d���ƶq
    int numPets;
    cout << "�п�J�d���ƶq: ";
    cin >> numPets;

    for (int i = 0; i < numPets; i++) {
        cout << "�п�J�� " << i + 1 << " ���d�������:" << endl;
        cout << "�d������: ";
        cin >> type;
        cout << "�d���W�r: ";
        cin >> name;

        cout << "�п�J�ͤ� (�~ �� ��): ";
        cin >> birthYear >> birthMonth >> birthDay;
        Date birthDate(birthYear, birthMonth, birthDay);

        cout << "�п�J��i�� (�~ �� ��): ";
        cin >> adoptionYear >> adoptionMonth >> adoptionDay;
        Date adoptionDate(adoptionYear, adoptionMonth, adoptionDay);

        Pet newPet(type, name, birthDate, adoptionDate);

        if (newPet.checkPetDetails()) {
            pets.push_back(newPet);  // �u�����Ʀ��Įɤ~�N�d���[�J�C��
        }
    }

    // ��X�Ҧ��d�����
    cout << "\n�Ҧ��d�����:" << endl;
    for (const Pet& pet : pets) {
        pet.printPetDetails();
    }

    return 0;
}