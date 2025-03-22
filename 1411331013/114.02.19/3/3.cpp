#include<stdio.h>

typedef struct student {
    char name[20];
    int ID, math, comput;
    float Avg;
}stu;

int main(void)
{
    FILE* cfPtr = NULL;

    //�}���ɮ׼g�J�Ҧ�
    if ((fopen_s(&cfPtr, "students.dat", "wb")) != 0) {
        puts("File could not be opened.");
    }
    else {
        //�إ�100���ťվǥ͸��
        stu blankClient = { "", 0, 0, 0, 0.0 };

        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(stu), 1, cfPtr);
        }
        fclose(cfPtr);
    }

    //���\�ϥΪ̿�J�ǥ͸��
    if ((fopen_s(&cfPtr, "students.dat", "wb")) != 0) {
        puts("File could not be opened for updating.");
    }
    else {
        int id;
        stu studentData;

        printf_s("Enter student ID (1-100, 0 to stop):");
        scanf_s("%d", &id);

        while (id > 0 && id <= 100) {

            //�]�w�ɮ׫��Цܹ����ǥ͸�ƪ���m
            fseek(cfPtr, (id - 1) * sizeof(stu), SEEK_SET);

            //��J�ǥ͸��
            printf_s("Enter name:");
            scanf_s("%s", studentData.name);
            printf_s("Enter math score:");
            scanf_s("%d", studentData.math);
            printf_s("Enter comput score:");
            scanf_s("%d", studentData.comput);
            studentData.Avg = (studentData.math + studentData.comput) / 2.0;

            //�g�J�ɮ�
            fwrite(&studentData, sizeof(stu), 1, cfPtr);

            //���ܿ�J�U�@��
            printf_s("Enter student ID (1-100 , 0 to stop):");
            scanf_s("%d", &id);

        }
        fclose(cfPtr);
    }

    return 0;
}

