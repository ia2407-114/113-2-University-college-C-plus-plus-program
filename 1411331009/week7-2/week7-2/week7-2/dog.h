#pragma once
#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // 建構子
    Dog(string n, int a) {
        name = n;
        age = a;
    }

    // 設定狗狗的資料（名字與年齡）
    void setdogdata(string n, int a) {
        name = n;
        age = a;
    }

    // 額外設定名稱的函式（如果你要保留 setCourseName）
    void setCourseName(string n) {
        name = n;
    }

    // 顯示狗狗的資料
    void display() const {
        cout << "狗的名字: " << name << endl;
        cout << "狗的年齡: " << age << " 歲" << endl;
    }
};