#include<stdio.h>

struct clientData {
	char name[15];
	unsigned int ID;
	int math, computer;
	double Avg;
};

int main(void)
{
	FILE* cfPtr = NULL;
	typedef struct clientData stu;
	if ((fopen_s(&cfPtr, "students.dat", "rb")) != 0) {
		puts("File could not be opend.");
	}
	else {
		printf("%-6s%-16s%-11s%-16s%10s\n", "student ID", "name", "math", "comput", "average");
	}
	while (!feof(cfPtr)) {
		stu client = { 0,"",0,0,0.0 };
		int result = fread(&client, sizeof(struct clientData), 1, cfPtr);

		if (result != 0 && client.ID != 0) {
			printf("%-6d%-16s%-11d%-16d%10.2f\n", client.ID, client.name, client.math, client.computer, client.Avg);
		}
		fclose(cfPtr);
	}
}