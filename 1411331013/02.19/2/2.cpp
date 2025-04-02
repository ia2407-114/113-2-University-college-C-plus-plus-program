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
}

