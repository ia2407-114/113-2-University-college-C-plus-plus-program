#include <iostream>
#include <string>
#include"dog.h"
using namespace std;

// �D�{��
int main() {
    string name;
    int age;
    Dog dog1("p", 10);

    cout << "��l�������:" << endl;
    dog1.display();

    // �Ы� Dog ����ó]�w�W�r�P�~��
    cout << "�п�J�����W�r: ";
    getline(cin, name);  // Ū���W�r�]�i�H�]�t�Ů�^

    cout << "�п�J�����~��: ";
    cin >> age;  // Ū���~��

    dog1.setdogdata(name, age);
    dog1.setCourseName(name);
    cout << "\n��s�᪺������T�G" << endl;
    dog1.display();  // ��ܧ�s�᪺��T

    return 0;
}