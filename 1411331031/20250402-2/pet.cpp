#include <iostream>
#include <string> 
#include "pet.h"
using namespace std;

pet::pet(string name, int age)//�إ߫غc�l
    : petname(name), petage(age)
{}
void pet:: setpetdata(string name, int age)
{
    if (age >= 0 and age < 20) {//�P�_�~�֬O�_�X�z
        petage = age;
    }
    else
    {
        cout << "�~�֤��X�z!" << endl;
        cout << endl;
    }
}
string pet:: getpetName()//Ū���m�W�禡
{
    return petname;
}
int pet:: getpetage()//Ū���~�֨禡
{
    return petage;
}
void pet:: display()//�L�X�m�W�M�~��
{
    cout << "�d���m�W:" << petname << " �d���~��:" << petage << endl;
}