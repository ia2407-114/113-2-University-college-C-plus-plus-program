#include <iostream>
#include "flight_object.h"
using namespace std;

int main() {
    cout << "Input airliner info:" << endl;
    airliner air1;
    cout << "\nInput cargo info:" << endl;
    cargo carg1;

    cout << "\n--- Airliner info ---\n";
    air1.display();
    air1.display_airliner();

    cout << "\n--- Cargo info ---\n";
    carg1.display();
    carg1.display_cargo();

    return 0;
}
