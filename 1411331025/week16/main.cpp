#include <iostream>
#include <string>
#include "air.h"
using namespace std;

int main()
{
    airliner air1;
    air1.display();
    air1.display_airliner();
    
    cargo cargo;
    cargo.display();
    cargo.display_cargo();

    return 0;
}