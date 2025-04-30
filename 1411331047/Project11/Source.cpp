// main.cpp
#include <iostream>
#include <vector>
#include <limits>
#include "Pet.h"
#include "Date.h"
using namespace std;

int main() {
    int n;
    cout << "�п�J�n�n�����d���ƶq�G";
    while (!(cin >> n) || n <= 0) {
        cout << "�п�J�j�� 0 ����ơG";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<Pet> pets;
    for (int i = 0; i < n; ++i) {
        cout << "\n=== �d�� #" << (i + 1) << " ===\n";
        string species, name;
        cout << "�����G"; cin >> species;
        cout << "�W�r�G"; cin >> name;

        int bm, bd, by, am, ad, ay;
        cout << "�ͤ� (�� �� �~)�G";
        cin >> bm >> bd >> by;
        cout << "��i�� (�� �� �~)�G";
        cin >> am >> ad >> ay;

        try {
            Date birth(bm, bd, by);
            Date adopt(am, ad, ay);
            pets.emplace_back(species, name, birth, adopt);
        }
        catch (invalid_argument& e) {
            cout << "��J���~�G" << e.what()
                << "�A�Э��s��J�o���d���C\n";
            --i; // �����o��
        }
    }

    cout << "\n�A��J���Ҧ��d����ơG\n";
    for (const auto& p : pets) {
        p.print();
    }

    // �� main �����Avector ���Ҧ� Pet �Ѻc�l�N�Q�I�s
    return 0;
}
