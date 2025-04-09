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

    cout << "�غc�覡�G\n\nt1�G�Ҧ��ѼƧ����w�]��\n";
    t1.printUniversal();
    t1.printStandard();

    cout << "\n\nt2�G���w�~�F���w�]\n";
    t2.printUniversal();
    t2.printStandard();

    cout << "\n\nt3�G���w�~�M��F��w�]\n";
    t3.printUniversal();
    t3.printStandard();

    cout << "\n\nt4�G���w�~�B��M��\n";
    t4.printUniversal(); 
    t4.printStandard(); 

    try
    {
        Time t5(2017, 3, 32);
    }
    catch (invalid_argument& e)
    {
        cerr << "\n\n��l�� t5 �ɥX�{���`�G" << e.what() << endl;
    }
}