#include <iostream>
#include "Pet.h"
#include "Date.h"
using namespace std;

// 建構子，初始化寵物資料
Pet::Pet(const string& first, const string& last, const Date& dateOfBirth, const Date& dateOfTake)
    : classes(first), Name(last), birthDate(dateOfBirth), takeDate(dateOfTake)
{
    // 輸出寵物的名稱和種類
    cout << "寵物種類: " << classes << " 寵物名字: " << Name << endl;
}

// 瀑布式函數，列出寵物詳細資料
void Pet::print() const
{
    // 輸出寵物的名字、種類、領養日和生日
    cout << "寵物名字: " << this->Name << " 種類: " << this->classes << "  領養日: ";
    this->takeDate.print();  // 使用 this 指標調用 takeDate 的 print() 函數
    cout << "  生日: ";
    this->birthDate.print();  // 使用 this 指標調用 birthDate 的 print() 函數
    cout << endl;
}

// 解構子，顯示銷毀訊息
Pet::~Pet()
{
    cout << "Pet object destructor >> "
        << "名字: " << this->Name << " 種類: " << this->classes << endl;
}