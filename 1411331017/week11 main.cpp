#include <iostream>
#include <vector>
#include "week11 Pet.h"
using namespace std;

int main()
{
    int num;
    cout << "Enter number of pets: ";
    cin >> num;

    vector<Pet*> pets;

    for (int i = 0; i < num; ++i) {
        string type, name;
        int bm, bd, by, am, ad, ay;

        cout << "\nEnter type of pet: ";
        cin >> type;

        cout << "Enter name of pet: ";
        cin >> name;

        cout << "Enter birthday (MM DD YYYY): ";
        cin >> bm >> bd >> by;

        cout << "Enter adoption date (MM DD YYYY): ";
        cin >> am >> ad >> ay;

        try {
            Date birth(bm, bd, by);
            Date adopt(am, ad, ay);
            Pet* pet = new Pet(type, name, birth, adopt);

            if (pet->isValid()) {
                pets.push_back(pet);
            }
            else {
                delete pet;
            }
        }
        catch (invalid_argument& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    for (auto p : pets) {
        delete p;
    }

    return 0;
}