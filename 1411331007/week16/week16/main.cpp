#include <iostream>
#include "air.h"
using namespace std;

int main()
{
    // �إߤ@�[�j���Ⱦ�����
    airliner air1;
    // �إߤ@�[�f������
    cargo airl;

    // ��ܭ��檫���
    air1.display();

    // ��ܤj���Ⱦ������
    air1.display_airliner();
    
    // ��ܳf�����
    airl.display_cargo();

    return 0;
}
