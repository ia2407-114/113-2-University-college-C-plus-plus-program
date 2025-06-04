#include <iostream>
#include "air.h"
using namespace std;

int main() {
    airliner air1;
    air1.display();
    air1.display_airliner();

    cargo carg;
    carg.display();
    carg.display_cargo();

    return 0;
}
