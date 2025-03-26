#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    // 使用建構子來初始化狗的名字和年齡
       explicit Dog(string name, int age) {
        dogName = name;
        dogAge = age; 
    }
    // 設定狗的名字
    void setdogdata(string name,int age) {
        dogName = name;
        dogAge = age;
        if (age >= 0 and age < 20) {  // 檢查年齡是否小於20
            dogAge = age;
        }
        else {
            cout << "錯誤：狗的年齡必須小於 20 歲。" << endl;
        }
        
    }
    // 取得狗的名字
    string getName() const {
        return dogName;
    }
    int getAge() const {
        return dogAge;
    }
    // 列印狗的資訊
    void display() const {
        cout << "狗的年齡:" << dogAge << endl;
        cout << "狗的姓名:" << dogName << endl;
    }
private:
    string dogName;  // 狗的名字
    int dogAge;      // 狗的年齡
};

// 主程式
int main() {
    string name;
    int age;
    Dog dog1("dogname",10);
    
    cout << "原始狗的資料:" << endl;
    dog1.display();

    // 創建 Dog 物件並設定名字與年齡
    cout << "請輸入狗的名字: ";
    getline(cin, name);  // 讀取名字（可以包含空格）

    cout << "請輸入狗的年齡: ";
    cin >> age;  // 讀取年齡

    dog1.setdogdata(name, age);
    
    cout << "\n更新後的狗的資訊：" << endl;
    dog1.display();  // 顯示更新後的資訊

    return 0;
}
