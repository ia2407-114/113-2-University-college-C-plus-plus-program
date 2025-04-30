// main.cpp
#include <iostream>
#include <vector>
#include <limits>
#include "Pet.h"
#include "Date.h"
using namespace std;

int main() {
    int n;
    cout << "請輸入要登錄的寵物數量：";
    while (!(cin >> n) || n <= 0) {
        cout << "請輸入大於 0 的整數：";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<Pet> pets;
    for (int i = 0; i < n; ++i) {
        cout << "\n=== 寵物 #" << (i + 1) << " ===\n";
        string species, name;
        cout << "種類："; cin >> species;
        cout << "名字："; cin >> name;

        int bm, bd, by, am, ad, ay;
        cout << "生日 (月 日 年)：";
        cin >> bm >> bd >> by;
        cout << "領養日 (月 日 年)：";
        cin >> am >> ad >> ay;

        try {
            Date birth(bm, bd, by);
            Date adopt(am, ad, ay);
            pets.emplace_back(species, name, birth, adopt);
        }
        catch (invalid_argument& e) {
            cout << "輸入錯誤：" << e.what()
                << "，請重新輸入這隻寵物。\n";
            --i; // 重做這筆
        }
    }

    cout << "\n你輸入的所有寵物資料：\n";
    for (const auto& p : pets) {
        p.print();
    }

    // 當 main 結束，vector 內所有 Pet 解構子將被呼叫
    return 0;
}
