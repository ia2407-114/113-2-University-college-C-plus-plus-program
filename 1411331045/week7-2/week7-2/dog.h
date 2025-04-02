#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    // 使用建構子來初始化狗的名字和年齡
    explicit Dog(string name, int age);
    // 設定狗的名字
    void setdogdata(string name, int age);
  
    // 取得狗的名字
    string getName() const;
    int getAge() const;
    // 列印狗的資訊
    void display() const;
private:
    string dogName;  // 狗的名字
    int dogAge;      // 狗的年齡
};