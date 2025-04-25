#pragma once
#include <iostream>
#include <string> 
using namespace std;

class PetDog {
public:
    // 設定狗的名字和年齡的建構函數
    explicit PetDog(string name, int age);
    // 設定狗的名字
    void setDogName(string name);
    // 取得狗的名字
    string getDogName() const;
    // 設定狗的年齡，並檢查年齡是否合法
    void setAge(int age);
    // 取得狗的年齡
    int getAge() const;
    // 顯示狗的資料
    void displayMessage() const;

private:
    string dogName; // 狗的名字
    int dogAge;     // 狗的年齡
}; // 結束 PetDog 類別
