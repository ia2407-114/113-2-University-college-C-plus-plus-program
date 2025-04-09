// main.cpp
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

int main() {
    int year, month, day;

    cout << "Enter year, month, and day (ex 2025 4 9): ";
    cin >> year >> month >> day;

    try {
        Date myDate(year, month, day);
        myDate.printGregorian();
        myDate.printMinguo();
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
