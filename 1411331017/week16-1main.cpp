#include <iostream>
#include "week16-1air.h"
using namespace std;

int main() {
    cout << "=== ��J�j���Ⱦ���� ===" << endl;
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n=== ��J�f����� ===" << endl;
    cargo c1;
    c1.display();
    c1.display_cargo();

    return 0;
}
