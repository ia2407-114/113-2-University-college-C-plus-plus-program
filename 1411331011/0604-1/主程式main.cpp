#include <iostream>
#include "air.h"

int main() {
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n=== 建立貨機 ===" << endl;
    cargo carg1;
    carg1.display();
    carg1.display_cargo();

    return 0;
}
