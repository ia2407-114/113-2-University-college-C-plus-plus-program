#include <iostream>
#include <string>
#include"week17-3.h"
#define PI 3.14159 
using namespace std;

circle::circle() {
    cout << "請輸入圓半徑: ";
    cin >> radius;
}

height::height() {
    cout << "請輸入高度: ";
    cin >> h;
}

cylinder2::cylinder2() {
    cout << "建立一個圓柱體物件（多重繼承）" << endl;
}

void cylinder2::display() {
    double volume = PI * radius * radius * h;
    cout << "圓柱體體積為: " << volume << endl;
}

