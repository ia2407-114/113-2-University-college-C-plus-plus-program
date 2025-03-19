﻿#include <stdio.h>

//建立結構     
struct student {
    char    name[20];// 學生名字 
    int     ID;// 學生學號
    int     math, comput;//數學、電腦成績
    float   AVG;//平均成績
}stu;

int main(void)
{
    FILE* cfPtr; //建立檔案指標
    //開啟檔案
    if ((fopen_s(&cfPtr, "accounts.dat", "rb")) != NULL) {
        puts("檔案開啟失敗");
    }
    else {
        printf("%3s,%5s,%7s,%4s,%10s", "id", "math", "comput", "avg", "name");

        // read all records from file (until eof)
        while (!feof(cfPtr)) {
            // create clientData with default information
            struct student blank = { "", 0, 0, 0,0.0 };

            int result = fread(&blank, sizeof(struct student), 1, cfPtr);

            // display record
            if (result != 0 && blank.ID != 0) {
                printf("\n%3d%5d%7d %4.2f%10s\n", blank.ID, blank.math, blank.comput, blank.AVG, blank.name);
            }
        }

        fclose(cfPtr); // fclose closes the file
    }
}
