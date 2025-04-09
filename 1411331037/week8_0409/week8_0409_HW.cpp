#include <iostream>
#include <stdexcept>
#include "Date.h" 
using namespace std;

int main()
{
    int y1, m1, d1;
    Date t; 
    cout << "預設日期為: ";
    t.printUniversal(); 
    cout << "\n請輸入更改的年:";
    cin >> y1;
    cout << "\n請輸入更改的月:";
    cin >> m1;
    cout << "\n請輸入更改的日:";
    cin >> d1;
    try
    {
        t.setDate(y1, m1, d1); 
    } 
    catch (invalid_argument& e)
    {
        cerr << "\n\n錯誤資訊: " << e.what() << endl;
    } 
    

    cout << "\n\n更改後的日期為: ";
    t.printUniversal();


    // output t's values after specifying invalid values
    cout << "\n經過更改的日期後"
        << "\n現在的日期: ";
    t.printUniversal(); 
    cout << endl;
} // end main