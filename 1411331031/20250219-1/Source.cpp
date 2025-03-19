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
    FILE* cfPtr=NULL; // 建立資料指標
    int err;//存放錯誤碼

    //開啟檔案，若檔案開啟失敗則停止
    if ((err = fopen_s(&cfPtr,"accounts.dat", "wb")) != NULL) {
        puts("檔案建立失敗");
    }
    else {
        //建立初始資料     
        struct student blank = {"", 0, 0, 0,0.0};

        //寫入100個初始資料到檔案                          
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blank, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr); //關閉檔案
    }
}