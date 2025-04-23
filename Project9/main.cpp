// �{���X�Ǹ�: 22196310
#include <iostream>
#include <stdexcept>
#include "Date.h"
 // �Цb���ޤJ���n���ϥΪ̼��Y��
using namespace std;

int main()
{
    int year, month, day;

    cout << "�п�J�褸�~:";
    cin >> year;
    cout << "\n�п�J���:";
    cin >> month;
    cout << "\n�п�J���:";
    cin >> day;

    try {
        Date date(year, month, day);

        cout << "�褸���:";
        date.printUniversal();
        cout << endl;

        cout << "������:";
        date.printStandard();
        cout << endl;
    }

    catch (invalid_argument& e)
    {
        cout << "\n\nException" << e.what() << endl;

    }
} // end main//6310