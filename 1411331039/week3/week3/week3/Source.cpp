#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// self-referential structure (鏈結串列節點)
struct Student {
    int id;                // 學生 ID
    char name[50];         // 學生姓名
    float score;           // 學生成績
    struct Student* next;  // 指向下一個節點
};

typedef struct Student Student;
typedef Student* StudentPtr;

// 函式宣告
void insert(StudentPtr* head, int id, char name[], float score);
void deletestudent(StudentPtr* head, int id);
void printList(StudentPtr head);
void freeList(StudentPtr* head);
int isEmpty(StudentPtr head);

int main(void) {
    StudentPtr startPtr = NULL; // 初始時鏈結串列為空

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. 新增學生\n");
        printf("2. 刪除學生\n");
        printf("3. 顯示學生清單\n");
        printf("4. 退出\n");
        printf("請選擇操作: ");
        scanf_s("%d", &choice);

        if (choice == 1) {
            int id;
            char name[50];
            float score;

            printf("請輸入學生 ID、姓名 和 成績: ");
            if (scanf_s("%d %49s %f", &id, name, (unsigned int)sizeof(name), &score) != 3) {
                printf("輸入錯誤，請重新輸入。\n");
                while (getchar() != '\n'); // 清除緩衝區
                continue;
            }

            insert(&startPtr, id, name, score);
        }
        else if (choice == 2) {
            int id;
            printf("請輸入要刪除的學生 ID: ");
            scanf_s("%d", &id);
            deletestudent(&startPtr, id);  // 改為呼叫 deleteStudent
        }
        else if (choice == 3) {
            printList(startPtr);
        }
        else if (choice == 4) {
            freeList(&startPtr);
            printf("程式結束，記憶體已釋放。\n");
        }
        else {
            printf("無效選項，請重新輸入。\n");
        }

    } while (choice != 4);

    return 0;
}

// ?? 按 ID 遞增排序插入學生
void insert(StudentPtr* head, int id, char name[], float score) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student)); // 分配記憶體
    if (newPtr == NULL) {
        printf("記憶體分配失敗，無法新增學生。\n");
        return;
    }

    newPtr->id = id;
    strcpy_s(newPtr->name, sizeof(newPtr->name), name); // 使用安全的 strcpy_s
    newPtr->score = score;
    newPtr->next = NULL;

    StudentPtr prevPtr = NULL;
    StudentPtr currPtr = *head;

    // 找到插入位置 (按 ID 排序)
    while (currPtr != NULL && id > currPtr->id) {
        prevPtr = currPtr;
        currPtr = currPtr->next;
    }

    if (prevPtr == NULL) {  // 插入到開頭
        newPtr->next = *head;
        *head = newPtr;
    }
    else {  // 插入到中間或尾部
        prevPtr->next = newPtr;
        newPtr->next = currPtr;
    }

    printf("學生 %s (ID: %d, 成績: %.2f) 已新增。\n", name, id, score);
}

void deleteStudent(StudentPtr* head, int id) {
    if (*head == NULL) {
        printf("鏈結串列為空，無法刪除。\n");
        return;
    }

    StudentPtr prevPtr = NULL;
    StudentPtr currPtr = *head;

    while (currPtr != NULL && currPtr->id != id) {
        prevPtr = currPtr;
        currPtr = currPtr->next;
    }

    if (currPtr == NULL) {
        printf("找不到 ID 為 %d 的學生。\n", id);
        return;
    }

    if (prevPtr == NULL) { // 刪除第一個節點
        *head = currPtr->next;
    }
    else { // 刪除中間或最後一個節點
        prevPtr->next = currPtr->next;
    }

    printf("學生 %s (ID: %d) 已刪除。\n", currPtr->name, id);
    free(currPtr); // 釋放記憶體
}

// ?? 判斷鏈結串列是否為空
int isEmpty(StudentPtr head) {
    return head == NULL;
}

// ?? 列印所有學生資訊
void printList(StudentPtr head) {
    if (isEmpty(head)) {
        printf("鏈結串列為空。\n");
        return;
    }

    printf("\n學生清單:\n");
    StudentPtr currPtr = head;
    while (currPtr != NULL) {
        printf("ID: %d, 姓名: %s, 成績: %.2f\n", currPtr->id, currPtr->name, currPtr->score);
        currPtr = currPtr->next;
    }
}

// ?? 釋放鏈結串列記憶體
void freeList(StudentPtr* head) {
    StudentPtr tempPtr;
    while (*head != NULL) {
        tempPtr = *head;
        *head = (*head)->next;
        free(tempPtr);
    }
}