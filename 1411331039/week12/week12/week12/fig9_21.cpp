#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

int main() {
    string type, name;
    int by, bm, bd;
    int ty, tm, td;

    cout << "請輸入寵物種類：";
    cin >> type;
    cout << "請輸入寵物名字：";
    cin >> name;

    cout << "請輸入寵物生日（年 月 日）：";
    cin >> by >> bm >> bd;
    Date birth(bm, bd, by);

    cout << "請輸入寵物領養日（年 月 日）：";
    cin >> ty >> tm >> td;
    Date take(tm, td, ty);

    Pet pet;
    pet.setClass(type)
        .setName(name)
        .setBirthDate(birth)
        .setTakeDate(take)
        .print(); // 也可呼叫 pet.print()

    return 0;
}
