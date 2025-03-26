#include <iostream>
#include <string> // 引入 C++ 標準字串類別
using namespace std;

// Dog 類別定義
class Dog
{
public:
    // 設定名稱與年齡的建構子
    Dog(string name, int age)
    {
        setName(name); // 設定狗的名字
        setAge(age);   // 設定狗的年齡
    }

    // 設定狗的名字
    void setName(string name)
    {
        if (!name.empty()) // 如果名字不是空字串
            dogName = name;
        else
            cout << "名字不能是空字串!" << endl;
    }

    // 取得狗的名字
    string getName() const
    {
        return dogName;
    }

    // 設定狗的年齡，並檢查年齡是否合理
    void setAge(int age)
    {
        if (age > 0 && age <= 20) // 假設年齡在 1 到 20 歲之間合理
            dogAge = age;
        else
            cout << "年齡不合理，請輸入介於 1 到 20 歲之間的年齡!" << endl;
    }

    // 取得狗的年齡
    int getAge() const
    {
        return dogAge;
    }

    // 列印狗的資訊
    void printDogInfo() const
    {
        cout << "狗的名字: " << dogName << endl;
        cout << "狗的年齡: " << dogAge << " 歲" << endl;
    }

private:
    string dogName; // 狗的名字
    int dogAge;     // 狗的年齡
}; // 結束 Dog 類別

// 主程式
int main()
{
    string dogName;
    int dogAge;

    // 創建一個 Dog 物件
    Dog myDog("Bobby", 5); // 預設狗的名字是 Bobby，年齡是 5

    // 顯示初始的狗的資訊
    cout << "初始的狗資訊:" << endl;
    myDog.printDogInfo();

    // 讓使用者輸入狗的名字
    cout << "\n請輸入狗的名字:" << endl;
    getline(cin, dogName); // 讀取名字，允許空格

    // 讓使用者輸入狗的年齡
    cout << "請輸入狗的年齡:" << endl;
    cin >> dogAge;

    // 設定狗的名字與年齡
    myDog.setName(dogName);
    myDog.setAge(dogAge);

    // 顯示更新後的狗的資訊
    cout << endl;
    cout << "更新後的狗資訊:" << endl;
    myDog.printDogInfo();

    return 0;
}