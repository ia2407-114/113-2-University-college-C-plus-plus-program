#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    string firstName, lastName;
    int bm, bd, by, hm, hd, hy;

    // �ϥΪ̿�J
    cout << "�п�J�d���m�G"; getline(cin, lastName);
    cout << "�п�J�d���W�G"; getline(cin, firstName);

    cout << "�п�J�ͤ� (�� �� �~�A�H�Ů���j)�G";
    cin >> bm >> bd >> by;

    cout << "�п�J��i��� (�� �� �~�A�H�Ů���j)�G";
    cin >> hm >> hd >> hy;

    // �إ� Employee ����èϥ��r������k�]�m�ݩ�
    Employee emp(firstName, lastName, Date(bm, bd, by), Date(hm, hd, hy));
    emp.print();

    return 0;
}
