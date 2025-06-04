#include "air.h"

int main() {
    cout << "=== 輸入大型客機資料 ===\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n=== 輸入貨機資料 ===\n";
    cargo cargo1;
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}
