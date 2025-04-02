#include <stdio.h>

struct clientData {
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main(void)
{
    FILE* cfPtr = NULL;

    if ((fopen_s(&cfPtr, "accounts.dat", "wb")) != 0) {
        puts("File could not be opened.");
    }
    else {

        struct clientData blankClient = { 0, "", "", 0.0 };

        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
        }

        fclose(cfPtr);
    }
}