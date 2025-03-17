#include <stdio.h>
       
struct studentData {
    int     ID;
    char    name[20]; 
    int     math, comput;
    float   AVG;
};

int main(void)
{
    FILE* cfPtr = NULL;

    if ((fopen_s(&cfPtr, "accounts.dat", "rb+"))!=0) {
        puts("�ɮ׵L�k�}�ҡC");
        return 1;
    }
    else {
        struct studentData blankstudent = { 0, "", 0 , 0.0 };

        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankstudent, sizeof(struct studentData), 1, cfPtr);
        }

        struct studentData stu;
        printf("%s", "�п�J�Ǹ� (1 �� 100, 0 ������J): ");
        scanf_s("%d", &stu.ID);

        while (stu.ID != 0) {
            if (stu.ID < 1 || stu.ID > 100) {
                printf("�Ǹ��L�ġA�п�J 1 �� 100 �������Ǹ��C\n");
                printf("%s", "�п�J�Ǹ� (1 �� 100, 0 ������J): ");
                scanf_s("%d", &stu.ID);
                continue;
            }

            printf("�п�J�ǥͩm�W (�̦h 19 �Ӧr��): ");
            scanf_s("%s", stu.name, sizeof(stu.name));

            printf("�п�J�ƾǦ��Z: ");
            scanf_s("%d", &stu.math);

            printf("�п�J�p������Z: ");
            scanf_s("%d", &stu.comput);

            stu.AVG = (float)(stu.math + stu.comput) / 2.0f;

            printf("�ǥͩm�W: %s\n", stu.name);
            printf("�ƾǦ��Z: %d, �p������Z: %d\n", stu.math, stu.comput);
            printf("�p�⪺��������: %.2f\n", stu.AVG);

            fseek(cfPtr, (stu.ID - 1) * sizeof(struct studentData), SEEK_SET);

            fwrite(&stu, sizeof(struct studentData), 1, cfPtr);

            printf("%s", "�п�J�Ǹ� (1 �� 100, 0 ������J): ");
            scanf_s("%d", &stu.ID);
        }

        fclose(cfPtr);
    }

    return 0;
}
