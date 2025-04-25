#include <iostream>
#include <string> // 使用 C++ 標準字符串類
#include "petdog.h"
using namespace std;

// 主函數開始程式執行
int main() {
    string dogName;
    int dogAge;

    // 提示用戶輸入狗的名字和年齡
    cout << "Enter the dog's name: ";
    getline(cin, dogName); // 讀取狗的名字，可以包含空格

    cout << "Enter the dog's age: ";
    cin >> dogAge; // 讀取狗的年齡

    // 創建 PetDog 物件，並初始化狗的名字和年齡
    PetDog myPetDog(dogName, dogAge);

    // 顯示狗的資訊
    cout << endl;
    myPetDog.displayMessage();

    // 若年齡無效，可以再次設定年齡
    if (myPetDog.getAge() == -1) {
        cout << "Please enter a valid age for the dog: ";
        cin >> dogAge;
        myPetDog.setAge(dogAge); // 更新年齡
        myPetDog.displayMessage(); // 顯示更新後的資訊
    }

    return 0;
} // 結束 main 函數