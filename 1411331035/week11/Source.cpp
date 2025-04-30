// main.cpp
#include <iostream>
#include <vector>
#include "Pet.h"
using namespace std;

int main() {
    cout << "請輸入要登錄的寵物數量: ";
    int n; cin >> n;
    vector<Pet*> pets;
    pets.reserve(n);

    for (int i = 0; i < n; ++i) {
        cout << "\n--- 第 " << i + 1 << " 隻寵物 ---" << endl;
        string sp, nm;
        int by, bm, bd, ay, am, ad;
        cout << "種類: "; cin >> sp;
        cout << "名字: "; cin >> nm;
        cout << "生日 (月 日 年): "; cin >> bm >> bd >> by;
        cout << "領養日 (月 日 年): "; cin >> am >> ad >> ay;
        pets.push_back(new Pet(sp, nm, Date(bm, bd, by), Date(am, ad, ay)));
    }

    cout << "\n所有寵物資料輸出中..." << endl;
    for (Pet* p : pets) delete p;
    pets.clear();
    return 0;
}