#include <iostream>
#include <string>
#include"Header.h"
using namespace std;
// 飛行物體類別 

int main()
{
    airliner air1;
    air1.display();
    air1.display_airliner();

    cargo air2;
    air2.display();
    air2.display_cargo();
    return 0;
}