#include <iostream>
#include <string>
#include "flight.h"
using namespace std;


int main()
{
    airbus airbus1;
    airbus1.flight_object::display();
    airbus1.airliner::display();
    airbus1.display();

    return 0;
}