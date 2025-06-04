#include <iostream>
#include "air.h"
using namespace std;

int main()
{
    // 建立一架大型客機物件
    airliner air1;
    // 建立一架貨機物件
    cargo airl;

    // 顯示飛行物資料
    air1.display();

    // 顯示大型客機的資料
    air1.display_airliner();
    
    // 顯示貨機資料
    airl.display_cargo();

    return 0;
}
