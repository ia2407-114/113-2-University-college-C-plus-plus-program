#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    // �ϥΫغc�l�Ӫ�l�ƪ����W�r�M�~��
    explicit Dog(string name, int age);
    // �]�w�����W�r
    void setdogdata(string name, int age);
  
    // ���o�����W�r
    string getName() const;
    int getAge() const;
    // �C�L������T
    void display() const;
private:
    string dogName;  // �����W�r
    int dogAge;      // �����~��
};