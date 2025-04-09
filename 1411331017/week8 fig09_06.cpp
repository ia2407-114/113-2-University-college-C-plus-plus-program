
#include <iostream>
#include <memory>
#include "week8 Date.h"
using namespace std;

int main() {
    int year, month, day;

    cout << "請輸入西元年、月、日 (例如 2024 4 9): ";
    cin >> year >> month >> day;

    try {
        unique_ptr<Date> date = make_unique<DateImpl>(year, month, day);
        date->printGregorian();
        date->printROC();
    }
    catch (const invalid_argument& e) {
        cerr << "輸入錯誤: " << e.what() << endl;
    }

    return 0;
}