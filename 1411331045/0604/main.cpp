#include <iostream>
#include "flight_object.h"

using namespace std;

int main() {
    airliner air1;         // 建立大型客機物件 air1
    air1.display();        // 顯示飛行物的資料
    air1.display_airliner(); // 顯示大型客機的資料
    cargo air2;
    air2.display();        // 顯示飛行物的資料
    air2.display_cargo(); // 顯示大型客機的資料
    return 0;
}
