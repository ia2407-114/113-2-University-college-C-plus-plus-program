#include <stdio.h>

//�إߵ��c     
struct student {

    char    name[20];// �ǥͦW�r 
    int     ID;// �ǥ;Ǹ�
    int     math, comput;//�ƾǡB�q�����Z
    float   AVG;//�������Z
}stu;

int main(void)
{
    FILE* cfPtr=NULL; // �إ߸�ƫ���
    int err;//�s����~�X

    //�}���ɮסA�Y�ɮ׶}�ҥ��ѫh����
    if ((err = fopen_s(&cfPtr,"accounts.dat", "wb")) != NULL) {
        puts("�ɮ׫إߥ���");
    }
    else {
        //�إߪ�l���     
        struct student blank = {"", 0, 0, 0,0.0};

        //�g�J100�Ӫ�l��ƨ��ɮ�                          
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blank, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr); //�����ɮ�
    }
}