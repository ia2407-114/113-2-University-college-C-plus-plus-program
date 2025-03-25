#include <stdio.h>

struct student {
    unsigned int ID;
    char Name[15];
    int math;
    int comput;
    float avg_score;
};

int main(){
    FILE* cfPtr = NULL; // accounts.dat file pointer

    // fopen opens the file; exits if file cannot be opened
    if ((fopen_s(&cfPtr, "students.dat", "rb")) != 0)
    {
        puts("#1 File could not be opened.");
    }
    else {  
        printf("%-3s%-14s%-5s%-7s%-11s","ID","Name","math","comput","avg_score: \n");
        while (!feof(cfPtr)) {
            struct student client = { 0, "", 0,0, 0.0 };
            int result = fread(&client, sizeof(struct student), 1, cfPtr);
            if (result != 0 && client.ID != 0)
            {
                printf("%-3d%-14s%-5d%-7d%-11f", client.ID, client.Name, client.math, client.comput, client.avg_score
                );
            }
        }
        }
        fclose(cfPtr);
}