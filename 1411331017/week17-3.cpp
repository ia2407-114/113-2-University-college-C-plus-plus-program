#include <iostream>
#include <string>
#include"week17-3.h"
#define PI 3.14159 
using namespace std;

circle::circle() {
    cout << "�п�J��b�|: ";
    cin >> radius;
}

height::height() {
    cout << "�п�J����: ";
    cin >> h;
}

cylinder2::cylinder2() {
    cout << "�إߤ@�Ӷ�W�骫��]�h���~�ӡ^" << endl;
}

void cylinder2::display() {
    double volume = PI * radius * radius * h;
    cout << "��W����n��: " << volume << endl;
}

