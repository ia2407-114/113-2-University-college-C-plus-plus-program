#include <iostream>
#include <string> 
#include "pet.h"
using namespace std;



int main()
{
    string nameOfpet;int age;

    pet pet1("petname", 10);//�إߪ���õ�����l���

    cout << "��l��Ƭ�:" << endl;
    pet1.display();

    cout << "\n�п�J�d���m�W:" << endl;
    getline(cin, nameOfpet);

    cout << "\n�п�J�d���~��:" << endl;
    cin >> age;
    cout << endl;

    pet1.setpetdata(nameOfpet, age);

    pet1.display();
}