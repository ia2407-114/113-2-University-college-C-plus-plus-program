// Fig. 11.11: fig11_11.c
// Writing data randomly to a random-access file
#include <stdio.h>

// clientData structure definition               
struct studentData {
    
    char Name[10]; // account last name    
    int id;
    int math, comput;
    float avg;
};

int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"accounts.dat", "rb+")) != NULL) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        struct studentData client = { "",0, 0, 0, 0.0};

        // require user to specify account number
        printf("%s", "Enter account number"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.id);

        // user enters information, which is copied into file
        while (client.id != 0) {
            // user enters last name, first name and balance
            printf("%s", "Enter name, math,comput: ");

            // set record lastName, firstName and balance value
            scanf_s( "%14s%d%d", client.Name,9,&client.math, &client.comput);
            client.avg = (client.math + client.comput) / 2;

            // seek position in file to user-specified record   
            fseek(cfPtr, (client.id - 1) *
                sizeof(struct studentData), SEEK_SET);

            // write user-specified information in file              
            fwrite(&client, sizeof(struct studentData), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter account number: ");
            scanf_s("%d", &client.id);
        }

        fclose(cfPtr); // fclose closes the file
    }
}