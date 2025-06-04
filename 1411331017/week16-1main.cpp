#include <iostream>
#include "week16-1air.h"
using namespace std;

int main() {
    cout << "=== 輸入大型客機資料 ===" << endl;
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n=== 輸入貨機資料 ===" << endl;
    cargo c1;
    c1.display();
    c1.display_cargo();

    return 0;
}
