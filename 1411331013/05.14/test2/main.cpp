#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h"
#include <vector> // �Ψ��x�s�h���d��
using namespace std;

int main() {
    vector<Pet> pets;  // �Ψ��x�s�h���d��
    char continueInput = 'y';  // ���ϥΪ̨M�w�O�_�~���J��h���d��

    while (continueInput == 'y' || continueInput == 'Y') {
        string firstName, lastName;
        int birthMonth, birthDay, birthYear;
        int adoptMonth, adoptDay, adoptYear;

        // ��J�d�����W�r
        cout << "�п�J�d�����W�r: ";
        cin >> firstName;
        cout << "�п�J�d��������: ";
        cin >> lastName;

        // ��J�d�����ͤ�
        cout << "�п�J�ͤ�]�榡�G�� �� �~�^: ";
        cin >> birthMonth >> birthDay >> birthYear;
        Date birth(birthMonth, birthDay, birthYear);  // �ϥ� Date ���O�B�z�ͤ�

        // ��J�d������i��
        cout << "�п�J��i��]�榡�G�� �� �~�^: ";
        cin >> adoptMonth >> adoptDay >> adoptYear;
        Date adopt(adoptMonth, adoptDay, adoptYear);  // �ϥ� Date ���O�B�z��i��

        // �إ��d������å[�J vector
        Pet newPet(firstName, lastName, birth, adopt);
        pets.push_back(newPet);

        // �߰ݬO�_�~���J
        cout << "�O�_�~���J�t�@���d���H (y/n): ";
        cin >> continueInput;
    }

    // ��X�Ҧ��d������T
    cout << "\n�Ҧ��d������T:\n";
    for (auto& pet : pets) {
        pet.print();  // �ϥ��r�����I�s�C�L���
    }

    return 0;
}