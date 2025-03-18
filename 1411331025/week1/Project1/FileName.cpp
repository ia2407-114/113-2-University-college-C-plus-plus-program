// Creating a random-access file sequentially
#include <stdio.h>

// clientData structure definition       


struct studentData {   //©w¸qµ²ºc

    int     ID;
    char    name[20];
    int     math, comput;
    float   AVG;
}stu;
;
int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer
    typedef struct suudentData stu;
    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "accounts.dat", "rb+")) != 0) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        struct studentData blankstudent = { 0, "", 0 ,0, 0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankstudent, sizeof(struct studentData), 1, cfPtr);
        }

        // require user to specify account number
        printf("%s", "Enter account ID"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &blankstudent.ID);

        // user enters information, which is copied into file
        while (blankstudent.ID != 0) {
            // user enters last name, first name and balance
            printf("%s", "name,math,comput: ");

            // set record lastName, firstName and balance value
            scanf_s("%14s%9d%d", blankstudent.name, 14, &blankstudent.math,
                &blankstudent.comput);
            blankstudent.AVG = (blankstudent.math + blankstudent.comput) / 2;


            // seek position in file to user-specified record   
            fseek(cfPtr, (blankstudent.ID - 1) *
                sizeof(struct studentData), SEEK_SET);

            // write user-specified information in file              
            fwrite(&blankstudent, sizeof(struct studentData), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter account number: ");
            scanf_s("%d", &blankstudent.ID);
        }

        fclose(cfPtr); // fclose closes the file
    }
}