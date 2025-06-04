#include <iostream>
#include <string>
#include "air.h"
using namespace std;

int main()
{
    airliner air1;
    cargo cargo;
    air1.display();
    air1.display_airliner();
    cargo.display();
    cargo.display_cargo();
    
    return 0;
}