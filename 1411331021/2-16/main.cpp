#include <iostream>
#include <string>
using namespace std;
#include "air.h"

int main()
{
    airliner air1;
    //air1.display();
    //air1.display_airliner();
    cargo cargo1;
    cargo1.display();         // ��ܭ��檫���
    air1.display_airliner();
    cargo1.display_cargo();   // ��ܳf�����
    return 0;
}