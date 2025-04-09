
#include <iostream>
#include <memory>
#include "week8 Date.h"
using namespace std;

int main() {
    int year, month, day;

    cout << "�п�J�褸�~�B��B�� (�Ҧp 2024 4 9): ";
    cin >> year >> month >> day;

    try {
        unique_ptr<Date> date = make_unique<DateImpl>(year, month, day);
        date->printGregorian();
        date->printROC();
    }
    catch (const invalid_argument& e) {
        cerr << "��J���~: " << e.what() << endl;
    }

    return 0;
}