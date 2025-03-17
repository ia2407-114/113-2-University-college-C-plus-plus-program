#include <stdio.h>
      
struct studentData {
    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
};

int main(void)
{
    FILE* cfPtr = NULL;  // 指向 accounts.dat 檔案的檔案指標

    // 嘗試開啟檔案，如果無法開啟則顯示錯誤訊息並退出程式
    if (fopen_s(&cfPtr, "accounts.dat", "rb+")) { // 檢查 fopen_s 返回的錯誤碼
        puts("檔案無法開啟。");
        return 1; // 退出程式
    }
    else {
        // 顯示資料標題
        printf("%-6s%-20s%-10s%-12s%-10s\n", "ID", "Name", "Math", "Comput", "AVG");

        // 讀取並顯示檔案中的所有學生資料
        struct studentData stu;
        while (fread(&stu, sizeof(struct studentData), 1, cfPtr) == 1) {
            // 跳過學號為 0 的記錄
            if (stu.ID != 0) {
                printf("%-6d%-20s%-10d%-12d%-10.2f\n",
                    stu.ID, stu.name, stu.math, stu.comput, stu.AVG);
            }
        }

        fclose(cfPtr); // 關閉檔案
    }

    return 0;
}
