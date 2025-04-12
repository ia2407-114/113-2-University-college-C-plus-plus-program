#include <iostream>
#include <string>
#include"dog.h"
using namespace std;

// 主程式
int main() {
    string name;
    int age;
    Dog dog1("p", 10);

    cout << "原始狗的資料:" << endl;
    dog1.display();

    // 創建 Dog 物件並設定名字與年齡
    cout << "請輸入狗的名字: ";
    getline(cin, name);  // 讀取名字（可以包含空格）

    cout << "請輸入狗的年齡: ";
    cin >> age;  // 讀取年齡

    dog1.setdogdata(name, age);
    dog1.setCourseName(name);
    cout << "\n更新後的狗的資訊：" << endl;
    dog1.display();  // 顯示更新後的資訊

    return 0;
}