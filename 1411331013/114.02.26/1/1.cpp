#include <stdio.h>

struct clientData {
    unsigned int ID;
    char name[15];
    int math, comput;
    double Avg;
};

int main(void)
{
    FILE* cfPtr = NULL;
    typedef struct clientData stu;

    if ((fopen_s(&cfPtr, "students.dat", "rb+")) != 0) {
        puts("File could not be opened.");
    }
    else {
        stu client = { 0, "", 0,0, 0.0 };

        printf("%s", "Enter account number (1 to 100, 0 to end input): ");
        scanf_s("%d", &client.ID);

        while (client.ID != 0) {

            printf("%s", "Enter name, math, comput: ");

            scanf_s("%14s%9s%lf", client.name, 14, &client.math, &client.comput);
            client.Avg = (client.math + client.comput) / 2;

            fseek(cfPtr, (client.ID - 1) *
                sizeof(struct clientData), SEEK_SET);

            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            printf("%s", "Enter account number: ");
            scanf_s("%d", &client.ID);
        }

        fclose(cfPtr);
    }
}