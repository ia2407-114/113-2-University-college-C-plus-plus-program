#include <iostream>
#include <string>
#include"week17-1.h"
using namespace std;

cone::cone() {
    cout << "�����~��:";
    cin >> shape;
}

icecream::icecream() {
    cout << "�B�N�O�f��:";
    cin >> flavor;
}

sweetcone::sweetcone() {
    cout << "�إߤ@�Ӳ�������I" << endl;
}

void sweetcone::display() {
    cout << "�����~��: " << shape << endl;
    cout << "�f��: " << flavor << endl;
}
