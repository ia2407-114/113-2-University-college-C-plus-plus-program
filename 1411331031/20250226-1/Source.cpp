#include <stdio.h>

//建立結構     
struct student {

    char    name[20];// 學生名字 
    int     ID;// 學生學號
    int     math, comput;//數學、電腦成績
    float   AVG;//平均成績
}stu;

int main(void)
{
    FILE* cfPtr = NULL; // 建立資料指標
    int err;//存放錯誤碼

    //開啟檔案，若檔案開啟失敗則停止
    if ((err = fopen_s(&cfPtr, "accounts.dat", "rb+")) != NULL) {
        puts("檔案開啟失敗");
    }
    else {
        //建立初始資料     
        struct student blank = { "", 0, 0, 0,0.0 };
        
        printf("%s", "輸入學號 (1 到 100, 0:結束): ");
        scanf_s("%d", &blank.ID);

        while (blank.ID != 0) {
            // 輸入姓名
            printf("%s", "請輸入學生姓名:");
            scanf_s("%10s", blank.name,10);

            printf("%s", "請輸入數學成績:");
            scanf_s("%d", &blank.math);

            printf("%s", "請輸入計概成績:");
            scanf_s("%d", &blank.comput);

            blank.AVG = (blank.math + blank.comput) / 2.0;

            // 移動檔案指標
            fseek(cfPtr, (blank.ID - 1) *sizeof(struct student), SEEK_SET);

            // 寫入檔案        
            fwrite(&blank, sizeof(struct student), 1, cfPtr);

            // 輸入其他學生學號
            puts("");
            printf("%s", "輸入學號:");
            scanf_s("%d", &blank.ID);
        }
        fclose(cfPtr); //關閉檔案
    }
}