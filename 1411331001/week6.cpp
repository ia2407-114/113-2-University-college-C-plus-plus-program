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
            cout << "�W�r����ť�!" << endl;
    }

    string getName() const {
        return dogName;
    }

    void setAge(int age) {
        if (age >= 0 && age < 20)
            dogAge = age;
        else {
            cout << "�A�����ӦѤF! ���p��20��!" << endl;
            dogAge = 0;
        }
    }

    int getAge() const {
        return dogAge;
    }

    void print() const {
        cout << "�������W�r: " << getName() << "\n�~��: " << getAge() << " ��" << endl;
    }

private:
    string dogName;
    int dogAge;
};

int main() {
    string name;
    int age;

    cout << "�п�J�������W�r: ";
    getline(cin, name);
    cout << "�п�J�������~��: ";
    cin >> age;

    Dog myDog(name, age);

    cout << "\n��������T�p�U: " << endl;
    myDog.print();

    return 0;
}