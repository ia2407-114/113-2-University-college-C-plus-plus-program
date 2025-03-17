#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    struct Student* nextPtr;
};

typedef struct Student Student;
typedef Student* StudentPtr;

void insert(StudentPtr* sPtr, int id, char name[]);
void printList(StudentPtr currentPtr);
int isEmpty(StudentPtr sPtr);

int main(void)
{
    StudentPtr startPtr = NULL;
    int id;
    char name[50];

    for (int i = 0; i < 4; i++) {
        printf("��J�� %d ���ǥ͸�ơG\n", i + 1);
        printf("��J�ǥ;Ǹ�: ");
        scanf_s("%d", &id);
        printf("��J�ǥͩm�W: ");
        scanf_s("%s", name, sizeof(name));
        insert(&startPtr, id, name);
    }


    printList(startPtr);

    puts("�{�������C");
}

void insert(StudentPtr* sPtr, int id, char name[])
{
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student));
    if (newPtr != NULL) { 
        newPtr->id = id;
        strcpy_s(newPtr->name, sizeof(newPtr->name), name);
        newPtr->nextPtr = NULL;

        StudentPtr previousPtr = NULL;
        StudentPtr currentPtr = *sPtr;

        while (currentPtr != NULL && id > currentPtr->id) {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }

        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else { 
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("�ǥ͸�ƥ����J�A�L�k���t�O����C\n");
    }
}

void printList(StudentPtr currentPtr)
{
    if (isEmpty(currentPtr)) {
        puts("��C���šC\n");
    }
    else {
        puts("�ǥ͸�Ʀp�U:");
        while (currentPtr != NULL) {
            printf("�Ǹ�: %d, �m�W: %s --> ", currentPtr->id, currentPtr->name);
            currentPtr = currentPtr->nextPtr;
        }
        puts("NULL\n");
    }
}

int isEmpty(StudentPtr sPtr)
{
    return sPtr == NULL;
}
