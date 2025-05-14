// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h"  // 引入 Pet 類別的頭文件
#include "Date.h" // 引入 Date 類別的頭文件
using namespace std;

int main()
{
    string petClass, petName;
    int year, month, day;

    // 輸入寵物種類
    cout << "請輸入寵物種類: ";
    cin >> petClass;

    // 輸入寵物名字
    cout << "請輸入寵物名字: ";
    cin >> petName;

    // 輸入寵物生日
    cout << "請輸入寵物生日 (年 月 日): ";
    cin >> year >> month >> day;
    Date birth(month, day, year); // 根據用戶輸入的日期建立 Date 物件

    // 輸入寵物領養日
    cout << "請輸入寵物領養日 (年 月 日): ";
    cin >> year >> month >> day;
    Date take(month, day, year); // 根據用戶輸入的日期建立 Date 物件

    // 建立 Pet 物件，並顯示寵物資料
    Pet pet(petClass, petName, birth, take);
    pet.print(); // 打印寵物的資料

    return 0;
}