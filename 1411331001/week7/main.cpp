#include <iostream>
#include <string> // �ϥ� C++ �зǦr�Ŧ���
#include "petdog.h"
using namespace std;

// �D��ƶ}�l�{������
int main() {
    string dogName;
    int dogAge;

    // ���ܥΤ��J�����W�r�M�~��
    cout << "Enter the dog's name: ";
    getline(cin, dogName); // Ū�������W�r�A�i�H�]�t�Ů�

    cout << "Enter the dog's age: ";
    cin >> dogAge; // Ū�������~��

    // �Ы� PetDog ����A�ê�l�ƪ����W�r�M�~��
    PetDog myPetDog(dogName, dogAge);

    // ��ܪ�����T
    cout << endl;
    myPetDog.displayMessage();

    // �Y�~�ֵL�ġA�i�H�A���]�w�~��
    if (myPetDog.getAge() == -1) {
        cout << "Please enter a valid age for the dog: ";
        cin >> dogAge;
        myPetDog.setAge(dogAge); // ��s�~��
        myPetDog.displayMessage(); // ��ܧ�s�᪺��T
    }

    return 0;
} // ���� main ���