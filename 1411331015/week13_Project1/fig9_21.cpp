// main.cpp
#include <iostream>
#include <vector>
#include "Pet.h"    // Pet ���O�w�q
#include "Date.h"   // Date ���O�w�q
using namespace std;

int main() {
    int n;
    cout << "�п�J�n�n�����d���ƶq�G";
    cin >> n;
    cin.ignore();

    vector<Pet*> pets;
    pets.reserve(n);

    for (int i = 0; i < n; ++i) {
        cout << "\n--- ��J�� " << (i + 1) << " ���d�� ---\n";

        string type, name;
        cout << "�d�������G";
        getline(cin, type);
        cout << "�d���W�r�G";
        getline(cin, name);

        int by, bm, bd;
        cout << "�ͤ� (�~ �� ��)�G";
        cin >> by >> bm >> bd;

        int ay, am, ad;
        cout << "��i�� (�~ �� ��)�G";
        cin >> ay >> am >> ad;
        cin.ignore();

        // �غc Pet ����é�J vector
        pets.push_back(new Pet(type, name, Date(bm, bd, by), Date(am, ad, ay)));
    }

    cout << "\n�w�n���H�U�d����� (�N��{�������ɥѸѺc�l�۰ʦC�L)�G\n";
    // �i���D�ʩI�s print()�A�Υ���Ѻc�l�L�X
    for (Pet* p : pets) {
        p->print();
        cout << endl;
    }

    // ����ʺA�O����A�NĲ�o�C�� Pet ���Ѻc�l
    for (Pet* p : pets) {
        delete p;
    }
    pets.clear();

    return 0;
}