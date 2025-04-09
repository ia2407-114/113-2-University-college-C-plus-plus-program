#include <iostream>
#include <stdexcept>
#include <string>
#include "GregorianDate.h"

using namespace std;

int main()
{
    int year, month, day;

    // Ask the user to input the Gregorian date
    cout << "Please enter the year (e.g., 2025): ";
    cin >> year;
    cout << "Please enter the month (1-12): ";
    cin >> month;
    cout << "Please enter the day (1-31): ";
    cin >> day;

    try
    {
        // Create a GregorianDate object and set the date
        GregorianDate date(year, month, day);

        // Display both the Gregorian and ROC dates
        date.printGregorian();
        date.printRepublic();
    }
    catch (invalid_argument& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
