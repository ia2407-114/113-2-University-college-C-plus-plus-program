#include <stdio.h>

// clientData structure definition            
struct clientData {
    char    name[20];
    int     ID,math, comput;
    float   AVG;
};

int main(void)
{
    FILE* cfPtr; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr,"accounts.dat", "wb")) != 0) {
        puts("File could not be opened.");
    }
    else {
        // create clientData with default information       
        struct clientData blankClient = { "", 0, 0.0 };

        // output 100 blank records to file                              
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
        }

        fclose(cfPtr); // fclose closes the file
    }
}
