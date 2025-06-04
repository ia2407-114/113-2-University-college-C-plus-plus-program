#include <iostream>
#include <string>
#include"cargo.h"
using namespace std;

int main()
{
    flight_object flight1;
    flight1.display();

    airliner air1;
    air1.display_airliner();

    cargo cargo1;
    cargo1.display_cargo();

    return 0;
}