// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Time.h" 
using namespace std;

int main()
{
    Time t1;
    Time t2(1847);
    Time t3(1214, 2);
    Time t4(2014, 3, 10);

    cout << "建構方式：\n\nt1：所有參數均為預設值\n";
    t1.printUniversal();
    t1.printStandard();

    cout << "\n\nt2：指定年；月日預設\n";
    t2.printUniversal();
    t2.printStandard();

    cout << "\n\nt3：指定年和月；日預設\n";
    t3.printUniversal();
    t3.printStandard();

    cout << "\n\nt4：指定年、月和日\n";
    t4.printUniversal(); 
    t4.printStandard(); 

    try
    {
        Time t5(2017, 3, 32);
    }
    catch (invalid_argument& e)
    {
        cerr << "\n\n初始化 t5 時出現異常：" << e.what() << endl;
    }
}