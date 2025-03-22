#include<stdio.h>

typedef struct student {
    char name[20];
    int ID, math, comput;
    float Avg;
}stu;

int main(void)
{
    FILE* cfPtr = NULL;

    //開啟檔案寫入模式
    if ((fopen_s(&cfPtr, "students.dat", "wb")) != 0) {
        puts("File could not be opened.");
    }
    else {
        //建立100筆空白學生資料
        stu blankClient = { "", 0, 0, 0, 0.0 };

        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(stu), 1, cfPtr);
        }
        fclose(cfPtr);
    }

    //允許使用者輸入學生資料
    if ((fopen_s(&cfPtr, "students.dat", "wb")) != 0) {
        puts("File could not be opened for updating.");
    }
    else {
        int id;
        stu studentData;

        printf_s("Enter student ID (1-100, 0 to stop):");
        scanf_s("%d", &id);

        while (id > 0 && id <= 100) {

            //設定檔案指標至對應學生資料的位置
            fseek(cfPtr, (id - 1) * sizeof(stu), SEEK_SET);

            //輸入學生資料
            printf_s("Enter name:");
            scanf_s("%s", studentData.name);
            printf_s("Enter math score:");
            scanf_s("%d", studentData.math);
            printf_s("Enter comput score:");
            scanf_s("%d", studentData.comput);
            studentData.Avg = (studentData.math + studentData.comput) / 2.0;

            //寫入檔案
            fwrite(&studentData, sizeof(stu), 1, cfPtr);

            //提示輸入下一個
            printf_s("Enter student ID (1-100 , 0 to stop):");
            scanf_s("%d", &id);

        }
        fclose(cfPtr);
    }

    return 0;
}

