#include <iostream>
#include <vector>
#include "Pet.h" // 寵物類別定義
#include "Date.h" // 日期類別定義
using namespace std;

int main() {
    vector<Pet> pets;  // 儲存多隻寵物
    char continueInput = 'y';  // 讓使用者決定是否繼續輸入更多的寵物

    while (continueInput == 'y' || continueInput == 'Y') {
        string firstName, lastName;
        int birthMonth, birthDay, birthYear;
        int adoptMonth, adoptDay, adoptYear;

        // 輸入寵物的名字
        cout << "請輸入寵物的名字: ";
        cin >> firstName;
        cout << "請輸入寵物的種類: ";
        cin >> lastName;

        // 輸入生日
        cout << "請輸入生日（格式：月 日 年）: ";
        cin >> birthMonth >> birthDay >> birthYear;
        Date birth(birthMonth, birthDay, birthYear);  // 使用 Date 類別處理生日

        // 輸入領養日
        cout << "請輸入領養日（格式：月 日 年）: ";
        cin >> adoptMonth >> adoptDay >> adoptYear;
        Date adopt(adoptMonth, adoptDay, adoptYear);  // 使用 Date 類別處理領養日

        // 使用瀑布式函數呼叫來設置資料
        Pet newPet(firstName, lastName, birth, adopt);
        newPet.setName(firstName, lastName)
            .setBirthDate(birthMonth, birthDay, birthYear)
            .setAdoptDate(adoptMonth, adoptDay, adoptYear);

        pets.push_back(newPet);

        // 詢問是否繼續輸入
        cout << "是否繼續輸入另一隻寵物？ (y/n): ";
        cin >> continueInput;
    }

    // 顯示所有寵物的資料
    cout << "\n所有寵物的資訊:\n";
    for (const Pet& pet : pets) {
        pet.print();
        cout << endl;
    }

    return 0;
}
