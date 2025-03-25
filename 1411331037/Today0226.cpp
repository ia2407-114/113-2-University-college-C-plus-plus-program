#include <stdio.h>

// clientData structure definition               
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
    if ((fopen_s(&cfPtr, "students.dat", "wb")) != 0) 
    {
        puts("#1 File could not be opened.");
    }
    else {
        struct  student blankdata = { 0, "", 0,0, 0.0 };

        //建立100項學生資料                             
        for (unsigned int i = 1; i <= 100; ++i)
        {
            fwrite(&blankdata, sizeof(struct student), 1, cfPtr);
        }

        fclose(cfPtr);
    }
    if ((fopen_s(&cfPtr,"students.dat", "rb+")) !=0 ) {
        puts("#2 File could not be opened.");
    }
    else {
        // create clientData with default information
        struct student client = { 0, "", 0,0, 0.0 };

        // require user to specify account number
        printf("%s", "Enter ID"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.ID);

        // user enters information, which is copied into file
        while (client.ID != 0) {
            // user enters last name, first name and balance
            printf("%s", "Enter Name, math_score, comput_score,avg_score: ");

            // set record lastName, firstName and balance value
            scanf_s("%14s%3d%3d%5f",client.Name,15,&client.math,&client.comput,&client.avg_score);

            // seek position in file to user-specified record   
            fseek(cfPtr, (client.ID - 1) *
                sizeof(struct student), SEEK_SET);

            // write user-specified information in file              
            fwrite(&client, sizeof(struct student), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter ID: ");
            scanf_s("%d", &client.ID);
        }

        fclose(cfPtr); // fclose closes the file
    }
}