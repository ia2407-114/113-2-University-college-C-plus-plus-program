#include <stdio.h>

struct student {
    unsigned int ID; 
    char Name[15];  
    int math;
    int comput;
    float avg_score;
};

int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer
    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"student.dat", "wb")) != NULL) {
        puts("File could not be opened.");
    }
    else {
        struct  student blankdata  = { 0, "",0 ,0, 0.0 };
        
        //建立100項學生資料                             
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankdata, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr);
    }
}