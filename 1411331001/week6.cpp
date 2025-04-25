#include <iostream>
#include <string>

using namespace std;

class Dog {
public:
    explicit Dog(string name = "", int age = 0) {
        setName(name);
        setAge(age);
    }

    void setName(string name) {
        if (!name.empty())
            dogName = name;
        else
            cout << "名字不能空白!" << endl;
    }

    string getName() const {
        return dogName;
    }

    void setAge(int age) {
        if (age >= 0 && age < 20)
            dogAge = age;
        else {
            cout << "你的狗太老了! 須小於20歲!" << endl;
            dogAge = 0;
        }
    }

    int getAge() const {
        return dogAge;
    }

    void print() const {
        cout << "狗狗的名字: " << getName() << "\n年齡: " << getAge() << " 歲" << endl;
    }

private:
    string dogName;
    int dogAge;
};

int main() {
    string name;
    int age;

    cout << "請輸入狗狗的名字: ";
    getline(cin, name);
    cout << "請輸入狗狗的年齡: ";
    cin >> age;

    Dog myDog(name, age);

    cout << "\n狗狗的資訊如下: " << endl;
    myDog.print();

    return 0;
}