#include<stdio.h>

struct student {
	char Name[20];
	int ID;
	int math, computer;
	float Avg;
}stu;

int main(void)
{
	FILE* cfPtr;
	if ((fopen_s(&cfPtr, "accounts.dat", "rb")) != NULL) {
		puts("File could not be open.");
	}
	else {
		printf("%3s,%5s,%7s,%4s,%10s", "ID", "math", "computer", "Average", "Name");

		while (!feof(cfPtr)) {
			struct student blank = { "",0,0,0,0.0 };
			int result = fread(&blank, sizeof(struct student), 1, cfPtr);

			if (result != 0 && blank.ID != 0) {
				printf("\n%3d%5d%7d%4.2f%10s\n", blank.ID, blank.math, blank.computer, blank.Avg, blank.Name);
			}
		}
		fclose(cfPtr);
	}
}