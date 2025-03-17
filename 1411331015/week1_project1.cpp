#include <stdio.h>
    
struct studentData {

    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;

int main(void)
{
    FILE* cfPtr = NULL;

    if ((fopen_s(&cfPtr, "accounts.dat", "wb")) != 0) {
        puts("File could not be opened.");
    }
    else {      
        struct studentData blankstudent = { 0, "", 0 , 0.0 };
                            
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankstudent, sizeof(struct studentData), 1, cfPtr);
        }

        fclose(cfPtr);
    }
}