// Fig. 11.14: fig11_14.c
// Reading a random-access file sequentially
#include <stdio.h>

// clientData structure definition               
struct clientData {
    unsigned int ID; // account number     
    char Name[15]; // account last name     
    char math, computer; // account first name   
    double average; // account balance            
};

int main(void)
{
    FILE* cfPtr = NULL; // accounts.dat file pointer
    typedef struct clientData stu;
    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "accounts.dat", "rb")) != 0) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-16s%-11s%-16s%10s\n", "student ID", "Name",
            "MATH", "COMPUTER", "average");

        // read all records from file (until eof)
        while (!feof(cfPtr)) {
            // create clientData with default information
            stu client = { 0, "",0,0, 0.0 };

            int result = fread(&client, sizeof(struct clientData), 1, cfPtr);

            // display record
            if (result != 0 && client.ID != 0) {
                printf("%-6d%-16s%-11d%-16d%10.2f\n",
                    client.ID, client.Name,
                    client.math, client.computer, client.average);
            }
        }

        fclose(cfPtr); // fclose closes the file
    }
}