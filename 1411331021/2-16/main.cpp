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
    cargo1.display();         // 顯示飛行物資料
    air1.display_airliner();
    cargo1.display_cargo();   // 顯示貨機資料
    return 0;
}