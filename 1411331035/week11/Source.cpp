// main.cpp
#include <iostream>
#include <vector>
#include "Pet.h"
using namespace std;

int main() {
    cout << "�п�J�n�n�����d���ƶq: ";
    int n; cin >> n;
    vector<Pet*> pets;
    pets.reserve(n);

    for (int i = 0; i < n; ++i) {
        cout << "\n--- �� " << i + 1 << " ���d�� ---" << endl;
        string sp, nm;
        int by, bm, bd, ay, am, ad;
        cout << "����: "; cin >> sp;
        cout << "�W�r: "; cin >> nm;
        cout << "�ͤ� (�� �� �~): "; cin >> bm >> bd >> by;
        cout << "��i�� (�� �� �~): "; cin >> am >> ad >> ay;
        pets.push_back(new Pet(sp, nm, Date(bm, bd, by), Date(am, ad, ay)));
    }

    cout << "\n�Ҧ��d����ƿ�X��..." << endl;
    for (Pet* p : pets) delete p;
    pets.clear();
    return 0;
}