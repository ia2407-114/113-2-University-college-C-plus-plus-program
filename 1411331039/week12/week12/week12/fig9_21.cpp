#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

int main() {
    string type, name;
    int by, bm, bd;
    int ty, tm, td;

    cout << "�п�J�d�������G";
    cin >> type;
    cout << "�п�J�d���W�r�G";
    cin >> name;

    cout << "�п�J�d���ͤ�]�~ �� ��^�G";
    cin >> by >> bm >> bd;
    Date birth(bm, bd, by);

    cout << "�п�J�d����i��]�~ �� ��^�G";
    cin >> ty >> tm >> td;
    Date take(tm, td, ty);

    Pet pet;
    pet.setClass(type)
        .setName(name)
        .setBirthDate(birth)
        .setTakeDate(take)
        .print(); // �]�i�I�s pet.print()

    return 0;
}
