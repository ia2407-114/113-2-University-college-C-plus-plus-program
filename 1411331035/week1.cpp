// Fig. 11.14: fig11_14.c
// Reading a random-access file sequentially
#include <stdio.h>

// clientData structure definition               
struct clientData {
    char    name[20];
    int     ID, math, comput;
    float   AVG;
};

int main(void)
{
    FILE* cfPtr=NULL; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"accounts.dat", "rb+")) !=0) {
        puts("File could not be opened.");
    }
    else {
        printf("%6s%16s%11s%10s%10s\n", "name", "ID",
            "math", "comput","AVG");

        // read all records from file (until eof)
        while (!feof(cfPtr)) {
            // create clientData with default information
            struct clientData client = {"", 0, 0,0,0.0 };

            int result = fread(&client, sizeof(struct clientData), 1, cfPtr);

            // display record
            if (result != 0 && client.ID != 0) {
                printf("%6s %16d  %11d %10d %10f\n",
                    client.name, client.ID,
                    client.math, client.comput,client.AVG);
            }
        }

        fclose(cfPtr); // fclose closes the file
    }
}