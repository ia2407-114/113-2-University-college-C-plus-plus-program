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
}

