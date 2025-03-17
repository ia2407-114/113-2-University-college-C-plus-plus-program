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
        puts("檔案無法開啟。");
        return 1;
    }
    else {
        struct studentData blankstudent = { 0, "", 0 , 0.0 };

        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankstudent, sizeof(struct studentData), 1, cfPtr);
        }

        struct studentData stu;
        printf("%s", "請輸入學號 (1 到 100, 0 結束輸入): ");
        scanf_s("%d", &stu.ID);

        while (stu.ID != 0) {
            if (stu.ID < 1 || stu.ID > 100) {
                printf("學號無效，請輸入 1 到 100 之間的學號。\n");
                printf("%s", "請輸入學號 (1 到 100, 0 結束輸入): ");
                scanf_s("%d", &stu.ID);
                continue;
            }

            printf("請輸入學生姓名 (最多 19 個字元): ");
            scanf_s("%s", stu.name, sizeof(stu.name));

            printf("請輸入數學成績: ");
            scanf_s("%d", &stu.math);

            printf("請輸入計算機成績: ");
            scanf_s("%d", &stu.comput);

            stu.AVG = (float)(stu.math + stu.comput) / 2.0f;

            printf("學生姓名: %s\n", stu.name);
            printf("數學成績: %d, 計算機成績: %d\n", stu.math, stu.comput);
            printf("計算的平均分數: %.2f\n", stu.AVG);

            fseek(cfPtr, (stu.ID - 1) * sizeof(struct studentData), SEEK_SET);

            fwrite(&stu, sizeof(struct studentData), 1, cfPtr);

            printf("%s", "請輸入學號 (1 到 100, 0 結束輸入): ");
            scanf_s("%d", &stu.ID);
        }

        fclose(cfPtr);
    }

    return 0;
}
