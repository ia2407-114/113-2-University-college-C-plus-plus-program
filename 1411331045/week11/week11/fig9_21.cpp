// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include <vector>
#include "Pet.h"
#include "Date.h"// 假設你將 Pet 和 Date 類別的程式碼分開並包含在此

using namespace std;

int main() {
    vector<Pet> pets;
    string type, name;
    int birthYear, birthMonth, birthDay;
    int adoptionYear, adoptionMonth, adoptionDay;

    // 輸入寵物數量
    int numPets;
    cout << "請輸入寵物數量: ";
    cin >> numPets;

    for (int i = 0; i < numPets; i++) {
        cout << "請輸入第 " << i + 1 << " 隻寵物的資料:" << endl;
        cout << "寵物類型: ";
        cin >> type;
        cout << "寵物名字: ";
        cin >> name;

        cout << "請輸入生日 (年 月 日): ";
        cin >> birthYear >> birthMonth >> birthDay;
        Date birthDate(birthYear, birthMonth, birthDay);

        cout << "請輸入領養日 (年 月 日): ";
        cin >> adoptionYear >> adoptionMonth >> adoptionDay;
        Date adoptionDate(adoptionYear, adoptionMonth, adoptionDay);

        Pet newPet(type, name, birthDate, adoptionDate);

        if (newPet.checkPetDetails()) {
            pets.push_back(newPet);  // 只有當資料有效時才將寵物加入列表
        }
    }

    // 輸出所有寵物資料
    cout << "\n所有寵物資料:" << endl;
    for (const Pet& pet : pets) {
        pet.printPetDetails();
    }

    return 0;
}