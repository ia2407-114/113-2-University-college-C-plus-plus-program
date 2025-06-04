// main.cpp
#include <iostream>
#include <vector>
#include "Pet.h"    // Pet 類別定義
#include "Date.h"   // Date 類別定義
using namespace std;

int main() {
    int n;
    cout << "請輸入要登錄的寵物數量：";
    cin >> n;
    cin.ignore();

    vector<Pet*> pets;
    pets.reserve(n);

    for (int i = 0; i < n; ++i) {
        cout << "\n--- 輸入第 " << (i + 1) << " 隻寵物 ---\n";

        string type, name;
        cout << "寵物種類：";
        getline(cin, type);
        cout << "寵物名字：";
        getline(cin, name);

        int by, bm, bd;
        cout << "生日 (年 月 日)：";
        cin >> by >> bm >> bd;

        int ay, am, ad;
        cout << "領養日 (年 月 日)：";
        cin >> ay >> am >> ad;
        cin.ignore();

        // 建構 Pet 物件並放入 vector
        pets.push_back(new Pet(type, name, Date(bm, bd, by), Date(am, ad, ay)));
    }

    cout << "\n已登錄以下寵物資料 (將於程式結束時由解構子自動列印)：\n";
    // 可先主動呼叫 print()，或仰賴解構子印出
    for (Pet* p : pets) {
        p->print();
        cout << endl;
    }

    // 釋放動態記憶體，將觸發每隻 Pet 的解構子
    for (Pet* p : pets) {
        delete p;
    }
    pets.clear();

    return 0;
}