#include <iostream>
#include <vector>
#include "Pet.h"
using namespace std;

int main() {
    int count;
    cout << "Enter number of pets: ";
    cin >> count;

    vector<Pet*> pets;

    for (int i = 0; i < count; ++i) {
        string type, name;
        int bm, bd, by, am, ad, ay;

        cout << "\nEnter pet type: ";
        cin >> type;
        cout << "Enter pet name: ";
        cin >> name;

        cout << "Enter birthday (mm dd yyyy): ";
        cin >> bm >> bd >> by;
        cout << "Enter adoption date (mm dd yyyy): ";
        cin >> am >> ad >> ay;

        try {
            Date bday(bm, bd, by);
            Date adopt(am, ad, ay);
            pets.push_back(new Pet(type, name, bday, adopt));
        }
        catch (exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    for (auto p : pets)
        delete p;

    return 0;
}
