#include <iostream>
#include "flight_object.h"

using namespace std;

int main() {
    airliner air1;         // �إߤj���Ⱦ����� air1
    air1.display();        // ��ܭ��檫�����
    air1.display_airliner(); // ��ܤj���Ⱦ������
    cargo air2;
    air2.display();        // ��ܭ��檫�����
    air2.display_cargo(); // ��ܤj���Ⱦ������
    return 0;
}
