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
    FILE* cfPtr = NULL; // �إ߸�ƫ���
    int err;//�s����~�X

    //�}���ɮסA�Y�ɮ׶}�ҥ��ѫh����
    if ((err = fopen_s(&cfPtr, "accounts.dat", "rb+")) != NULL) {
        puts("�ɮ׶}�ҥ���");
    }
    else {
        //�إߪ�l���     
        struct student blank = { "", 0, 0, 0,0.0 };
        
        printf("%s", "��J�Ǹ� (1 �� 100, 0:����): ");
        scanf_s("%d", &blank.ID);

        while (blank.ID != 0) {
            // ��J�m�W
            printf("%s", "�п�J�ǥͩm�W:");
            scanf_s("%10s", blank.name,10);

            printf("%s", "�п�J�ƾǦ��Z:");
            scanf_s("%d", &blank.math);

            printf("%s", "�п�J�p�����Z:");
            scanf_s("%d", &blank.comput);

            blank.AVG = (blank.math + blank.comput) / 2.0;

            // �����ɮ׫���
            fseek(cfPtr, (blank.ID - 1) *sizeof(struct student), SEEK_SET);

            // �g�J�ɮ�        
            fwrite(&blank, sizeof(struct student), 1, cfPtr);

            // ��J��L�ǥ;Ǹ�
            puts("");
            printf("%s", "��J�Ǹ�:");
            scanf_s("%d", &blank.ID);
        }
        fclose(cfPtr); //�����ɮ�
    }
}