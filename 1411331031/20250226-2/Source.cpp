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
    FILE* cfPtr; //�إ��ɮ׫���
    //�}���ɮ�
    if ((fopen_s(&cfPtr,"accounts.dat", "rb")) != NULL) {
        puts("�ɮ׶}�ҥ���");
    }
    else {
        printf("%3s,%5s,%7s,%4s,%10s","id","math","comput","avg", "name");

        // read all records from file (until eof)
        while (!feof(cfPtr)) {
            // create clientData with default information
            struct student blank = { "", 0, 0, 0,0.0 };

            int result = fread(&blank, sizeof(struct student), 1, cfPtr);

            // display record
            if (result != 0 && blank.ID != 0) {
                printf("\n%3d%5d%7d %4.2f%10s\n",blank.ID,blank.math,blank.comput,blank.AVG,blank.name);
            }
        }

        fclose(cfPtr); //�����ɮ�
    }
}