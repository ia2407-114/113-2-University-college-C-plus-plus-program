#include <stdio.h>
#include <stdlib.h>

// 建立結構
struct student {
    char    name[20];  // 學生名字
    int     ID;        // 學生學號
    int     math, comput; // 數學、電腦成績
    float   AVG;       // 平均成績
} stu;

// 自我參照結構
struct listNode {
    char data;  // 每個 listNode 包含一個字符
    char    name[20];  // 學生名字
    int     math, comput; // 數學、電腦成績
    float   AVG;       // 平均成績
    struct listNode* nextPtr;  // 指向下一個節點的指標
};

typedef struct listNode ListNode;  // listNode 的同義詞
typedef ListNode *ListNodePtr;     // ListNode 的同義詞

// 函式原型
void insert(ListNodePtr* sPtr, char value);
char del(ListNodePtr* sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void) {
    ListNodePtr startPtr = NULL;  // 初始時沒有節點
    char item;  // 使用者輸入的字符

    instructions();  // 顯示選單
    printf("%s", "? ");
    unsigned int choice;  // 使用者的選擇
    scanf_s("%u", &choice);

    // 當使用者選擇不是 3 時，持續執行
    while (choice != 3) {
        switch (choice) {
        case 1:
            printf("%s", "輸入一個字符: ");
            scanf_s("%c", &item,1);  // 在格式字符串中加入空格來跳過換行符
            insert(&startPtr, item);  // 在列表中插入項目
            printList(startPtr);
            break;
        case 2:  // 刪除一個元素s
            // 如果列表不為空
            if (!isEmpty(startPtr)) {
                printf("%s", "輸入要刪除的字符: ");
                scanf_s("%c", &item,1);  // 在格式字符串中加入空格來跳過換行符

                // 如果找到字符，刪除它
                if (del(&startPtr, item)) {  // 刪除項目
                    printf("%c 已刪除。\n", item);
                    printList(startPtr);
                }
                else {
                    printf("%c 沒有找到。\n\n", item);
                }
            }
            else {
                puts("列表為空。\n");
            }
            break;
        default:
            puts("無效選擇。\n");
            instructions();
            break;
        }  // 結束 switch

        printf("%s", "? ");
        scanf_s("%u", &choice);
    }

    puts("程式結束。");
}

// 顯示程式說明給使用者
void instructions(void) {
    puts("輸入您的選擇:\n"
        "   1 插入一個元素進入列表。\n"
        "   2 刪除列表中的一個元素。\n"
        "   3 結束程式。");
}

// 將新值插入到列表中的正確位置
void insert(ListNodePtr* sPtr, char value) {
    ListNodePtr newPtr = (ListNodePtr)malloc(sizeof(ListNode));  // 創建新節點

    if (newPtr != NULL) {  // 如果有足夠空間
        newPtr->data = value;  // 把值放入節點
        newPtr->nextPtr = NULL;  // 節點不連接到其他節點

        ListNodePtr previousPtr = NULL;
        ListNodePtr currentPtr = *sPtr;

        // 遍歷列表找到正確插入的位置
        while (currentPtr != NULL && value > currentPtr->data) {
            previousPtr = currentPtr;  // 移動到下一個節點
            currentPtr = currentPtr->nextPtr;  // 繼續移動
        }

        // 在列表開頭插入新節點
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else {  // 在 previousPtr 和 currentPtr 之間插入新節點
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("%c 無法插入。沒有足夠的記憶體。\n", value);
    }
}

// 刪除列表中的一個元素
char del(ListNodePtr* sPtr, char value) {
    // 如果第一個節點有匹配的值，刪除它
    if (value == (*sPtr)->data) {
        ListNodePtr tempPtr = *sPtr;  // 保留被刪除的節點
        *sPtr = (*sPtr)->nextPtr;  // 斷開節點鏈接
        free(tempPtr);  // 釋放被斷開的節點
        return value;
    }
    else {
        ListNodePtr previousPtr = *sPtr;
        ListNodePtr currentPtr = (*sPtr)->nextPtr;

        // 遍歷列表找到正確位置
        while (currentPtr != NULL && currentPtr->data != value) {
            previousPtr = currentPtr;  // 移動到下一個節點
            currentPtr = currentPtr->nextPtr;  // 繼續移動
        }

        // 刪除 currentPtr 的節點
        if (currentPtr != NULL) {
            ListNodePtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }

    return '\0';
}

// 如果列表為空，返回 1；否則返回 0
int isEmpty(ListNodePtr sPtr) {
    return sPtr == NULL;
}

// 印出列表內容
void printList(ListNodePtr currentPtr) {
    // 如果列表為空
    if (isEmpty(currentPtr)) {
        puts("列表為空。\n");
    }
    else {
        puts("列表內容為:");

        // 當不是列表的最後一個節點
        while (currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        puts("NULL\n");
    }
}