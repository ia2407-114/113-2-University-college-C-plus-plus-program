#pragma once
#include <iostream>
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // �غc�l
    Dog(string n, int a) {
        name = n;
        age = a;
    }

    // �]�w��������ơ]�W�r�P�~�֡^
    void setdogdata(string n, int a) {
        name = n;
        age = a;
    }

    // �B�~�]�w�W�٪��禡�]�p�G�A�n�O�d setCourseName�^
    void setCourseName(string n) {
        name = n;
    }

    // ��ܪ��������
    void display() const {
        cout << "�����W�r: " << name << endl;
        cout << "�����~��: " << age << " ��" << endl;
    }
};