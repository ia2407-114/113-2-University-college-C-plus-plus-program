// Fig. 11.11: fig11_11.c
// Writing data randomly to a random-access file
#include <stdio.h>

// clientData structure definition               
struct clientData {
    char    name[20];
    int     ID, math, comput;
    float   AVG;
};

int main(void)
{
    FILE* cfPtr; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"accounts.dat", "rb+")) !=0) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information
        struct clientData client = { "", 0, 0.0 };

        // require user to specify account number
        printf("%s", "Enter account number"
            " (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.ID);
        
        // user enters information, which is copied into file
        while (client.ID != 0) {
            // user enters last name, first name and balance
            printf("%s", "Enter name, math, comput: ");
            
            // set record lastName, firstName and balance value
            scanf_s( "%19s%14d%9d",&client.name,19, &client.math, &client.comput);

            // seek position in file to user-specified record   
            fseek(cfPtr, (client.ID - 1) *
                sizeof(struct clientData), SEEK_SET);
            client.AVG = (client.math + client.comput) / 2.0;
            // write user-specified information in file              
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            // enable user to input another account number
            printf("%s", "Enter ID: ");
            scanf_s("%d", &client.ID);
            
        }

        fclose(cfPtr); // fclose closes the file
    }
}