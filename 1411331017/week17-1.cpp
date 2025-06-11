#include <iostream>
#include <string>
#include"week17-1.h"
using namespace std;

cone::cone() {
    cout << "甜筒外形:";
    cin >> shape;
}

icecream::icecream() {
    cout << "冰淇淋口味:";
    cin >> flavor;
}

sweetcone::sweetcone() {
    cout << "建立一個甜筒物件！" << endl;
}

void sweetcone::display() {
    cout << "甜筒外形: " << shape << endl;
    cout << "口味: " << flavor << endl;
}
