#include <iostream>
#include <string>
#include "flight2.h"

int main()
{
    airliner air1;  // 兼具空中及水上功能   
    air1.flight_object::display();
    air1.display();

    return 0;
}