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

    Date* date = nullptr;

    try {
        date = new Date(year, month, day);

        cout << "�褸���:";
        date->printUniversal();
        cout << endl;

        cout << "������:";
        date->printStandard();
        cout << endl;
    }
    catch (invalid_argument& e)
    {
        cout << "\n\nException: " << e.what() << endl;
    }

    delete date; // <-- �o�ˤ~�|�I�s�Ѻc�l�I
    system("pause");
    return 0;
}