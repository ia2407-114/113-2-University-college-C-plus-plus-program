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
        printf("輸入第 %d 筆學生資料：\n", i + 1);
        printf("輸入學生學號: ");
        scanf_s("%d", &id);
        printf("輸入學生姓名: ");
        scanf_s("%s", name, sizeof(name));
        insert(&startPtr, id, name);
    }


    printList(startPtr);

    puts("程式結束。");
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
        printf("學生資料未插入，無法分配記憶體。\n");
    }
}

void printList(StudentPtr currentPtr)
{
    if (isEmpty(currentPtr)) {
        puts("串列為空。\n");
    }
    else {
        puts("學生資料如下:");
        while (currentPtr != NULL) {
            printf("學號: %d, 姓名: %s --> ", currentPtr->id, currentPtr->name);
            currentPtr = currentPtr->nextPtr;
        }
        puts("NULL\n");
    }
}

int isEmpty(StudentPtr sPtr)
{
    return sPtr == NULL;
}
