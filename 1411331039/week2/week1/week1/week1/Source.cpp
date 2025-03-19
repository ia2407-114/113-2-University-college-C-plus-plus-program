// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

// clientData structure definition            
struct studentData {
    char Name[100]; // account last name    
    int id;
    int math, comput;
    float avg;
}stu;

int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer
    int err;
    // fopen opens the file; exits if file cannot be opened
    if ((err = fopen_s(&cfPtr, "accounts.dat", "wb")) != 0)
    {
        puts("檔案建立失敗");
    }

    else {
        // create clientData with default information       
        struct studentData blank = { "", 0, 0,0, 0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blank, sizeof(struct studentData), 1, cfPtr);
        }

        fclose(cfPtr); // fclose closes the file
    }
}