#include "air.h"

int main() {
    cout << "=== ��J�j���Ⱦ���� ===\n";
    airliner air1;
    air1.display();
    air1.display_airliner();

    cout << "\n=== ��J�f����� ===\n";
    cargo cargo1;
    cargo1.display();
    cargo1.display_cargo();

    return 0;
}
