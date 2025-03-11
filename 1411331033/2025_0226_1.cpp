#include <stdio.h>

// clientData structure definition               
typedef struct data {
    char name[20];
    int ID;
    int math, comput;
    float AVG;
}stu;

int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"accounts.dat", "wb+")) != 0) 
    {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        stu BlankData = { "", 0, 0, 0, 0.0 };

        // require user to specify account number
        printf("%s", "Enter account number"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &BlankData.ID);

        // user enters information, which is copied into file
        while (BlankData.ID != 0) 
        {
            // user enters last name, first name and balance
            printf("%s", "Enter name, comput, math: ");

            // set record lastName, firstName and balance value
            scanf_s("%19s%9d%9d", BlankData.name,19, &BlankData.comput, &BlankData.math);
            BlankData.AVG = (BlankData.comput + BlankData.math) / 2;
            // seek position in file to user-specified record   
            fseek(cfPtr, (BlankData.ID - 1) * sizeof(struct data), SEEK_SET);

            // write user-specified information in file              
            fwrite(&BlankData, sizeof(struct data), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter account number: ");
            scanf_s("%d", &BlankData.ID);
        }

        fclose(cfPtr); // fclose closes the file
    }
}