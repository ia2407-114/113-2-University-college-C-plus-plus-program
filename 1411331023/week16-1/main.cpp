#include <iostream>
#include <string>
#include "air.h"
using namespace std;

int main()
{
    airliner air1;
    cout << "\n--- 大型客機資料 ---\n";
    air1.display();
    air1.display_airliner();

    cargo car;
    cout << "\n--- 貨機資料 ---\n";
    car.display();
    car.display_cargo();

    return 0;
}
