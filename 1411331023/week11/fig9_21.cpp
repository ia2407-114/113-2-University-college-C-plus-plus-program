#include <iostream>
#include <string>
#include "Pet.h"
#include "Date.h"
using namespace std;

int main() {
    string firstName, lastName;
    int bYear, bMonth, bDay;
    int aYear, aMonth, aDay;

    cout << "請輸入寵物的名字：";
    cin >> firstName;
    cout << "請輸入寵物的種類：";
    cin >> lastName;

    cout << "請輸入生日 (yyyy mm dd)：";
    cin >> bYear >> bMonth >> bDay;

    cout << "請輸入領養日 (yyyy mm dd)：";
    cin >> aYear >> aMonth >> aDay;

    try {
        Date birth(bMonth, bDay, bYear);
        Date adopt(aMonth, aDay, aYear);

        Pet myPet(firstName, lastName, birth, adopt);

        cout << "\n寵物資料：\n";
        myPet.print();
    }
    catch (invalid_argument& e) {
        cerr << "錯誤：輸入的日期無效 - " << e.what() << endl;
    }

    return 0;
}
