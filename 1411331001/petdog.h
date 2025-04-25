#pragma once
#include <iostream>
#include <string> 
using namespace std;

class PetDog {
public:
    // �]�w�����W�r�M�~�֪��غc���
    explicit PetDog(string name, int age);
    // �]�w�����W�r
    void setDogName(string name);
    // ���o�����W�r
    string getDogName() const;
    // �]�w�����~�֡A���ˬd�~�֬O�_�X�k
    void setAge(int age);
    // ���o�����~��
    int getAge() const;
    // ��ܪ������
    void displayMessage() const;

private:
    string dogName; // �����W�r
    int dogAge;     // �����~��
}; // ���� PetDog ���O
