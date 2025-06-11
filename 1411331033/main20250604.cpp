#include <iostream>
#include <string>
#include "flight_object20250604.h"
using namespace std;

int main()
{
    airliner air1;
    cargo car1;
    air1.display();
    air1.display_airliner();
    car1.display();
    car1.display_cargo();

    return 0;
}