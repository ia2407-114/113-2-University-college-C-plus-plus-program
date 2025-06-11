#include <iostream>
#include <string>
#include "air.h"
using namespace std;

int main() {
    cout << "\n--- 建立圓周長物件 ---" << endl;
    Circ_1D myCric;
  
 
    cout << "\n--- 建立甜筒物件 ---" << endl;
    Cron_3D myCone;
    myCone.display_radius();
    myCone.display_cron();

    cout << "\n--- 建立圓餅物件 ---" << endl;
    Pie_2D myPie;
    myPie.display_radius();
    myPie.display_pie();

    return 0;
}
