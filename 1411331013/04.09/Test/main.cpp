// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Date.h" // include definition of class Time from Time.h
using namespace std;

int main()
{
    int year, month, day;
    cout << "請輸入西元日期(1990-2050):";
    cin >> year >> month >> day;
    // attempt to initialize t6 with invalid values
    try
    {
        Date inputDate(year, month, day);
        cout << "\n您輸入的西元日期為：\n  ";
        inputDate.printAD();
        cout << "\n民國日期為:\n  ";
        inputDate.printROC_Year();

    } // end try
    catch (invalid_argument& e)
    {
        cerr << "\n\n例外錯誤：輸入無效！ " << e.what() << endl;
    } // end catch
} // end main
