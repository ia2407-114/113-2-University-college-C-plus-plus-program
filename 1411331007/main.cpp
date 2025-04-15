// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Date.h" // include definition of class Time from Time.h
using namespace std;

int main()
{
    int year, month, day;
    cout << "��J�褸���(�~ �� ��):";
    cin >> year >> month >> day;
    // attempt to initialize t6 with invalid values
    try
    {
        Date inputDate(year, month, day);
        cout << "\n�z��J���褸������G\n  ";
        inputDate.printAD();
        cout << "\n��������:\n  ";
        inputDate.printROC_Year();

    } // end try
    catch (invalid_argument& e)
    {
        cerr << "\n\n��J�L��" << e.what() << endl;
    } // end catch
} // end main