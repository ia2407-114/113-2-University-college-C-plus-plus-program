#include <stdio.h>
#include <stdlib.h>

// �إߵ��c
struct student {
    char    name[20];  // �ǥͦW�r
    int     ID;        // �ǥ;Ǹ�
    int     math, comput; // �ƾǡB�q�����Z
    float   AVG;       // �������Z
} stu;

// �ۧڰѷӵ��c
struct listNode {
    char data;  // �C�� listNode �]�t�@�Ӧr��
    char    name[20];  // �ǥͦW�r
    int     math, comput; // �ƾǡB�q�����Z
    float   AVG;       // �������Z
    struct listNode* nextPtr;  // ���V�U�@�Ӹ`�I������
};

typedef struct listNode ListNode;  // listNode ���P�q��
typedef ListNode *ListNodePtr;     // ListNode ���P�q��

// �禡�쫬
void insert(ListNodePtr* sPtr, char value);
char del(ListNodePtr* sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void) {
    ListNodePtr startPtr = NULL;  // ��l�ɨS���`�I
    char item;  // �ϥΪ̿�J���r��

    instructions();  // ��ܿ��
    printf("%s", "? ");
    unsigned int choice;  // �ϥΪ̪����
    scanf_s("%u", &choice);

    // ��ϥΪ̿�ܤ��O 3 �ɡA�������
    while (choice != 3) {
        switch (choice) {
        case 1:
            printf("%s", "��J�@�Ӧr��: ");
            scanf_s("%c", &item,1);  // �b�榡�r�Ŧꤤ�[�J�Ů�Ӹ��L�����
            insert(&startPtr, item);  // �b�C�����J����
            printList(startPtr);
            break;
        case 2:  // �R���@�Ӥ���s
            // �p�G�C������
            if (!isEmpty(startPtr)) {
                printf("%s", "��J�n�R�����r��: ");
                scanf_s("%c", &item,1);  // �b�榡�r�Ŧꤤ�[�J�Ů�Ӹ��L�����

                // �p�G���r�šA�R����
                if (del(&startPtr, item)) {  // �R������
                    printf("%c �w�R���C\n", item);
                    printList(startPtr);
                }
                else {
                    printf("%c �S�����C\n\n", item);
                }
            }
            else {
                puts("�C���šC\n");
            }
            break;
        default:
            puts("�L�Ŀ�ܡC\n");
            instructions();
            break;
        }  // ���� switch

        printf("%s", "? ");
        scanf_s("%u", &choice);
    }

    puts("�{�������C");
}

// ��ܵ{���������ϥΪ�
void instructions(void) {
    puts("��J�z�����:\n"
        "   1 ���J�@�Ӥ����i�J�C��C\n"
        "   2 �R���C�����@�Ӥ����C\n"
        "   3 �����{���C");
}

// �N�s�ȴ��J��C�������T��m
void insert(ListNodePtr* sPtr, char value) {
    ListNodePtr newPtr = (ListNodePtr)malloc(sizeof(ListNode));  // �Ыطs�`�I

    if (newPtr != NULL) {  // �p�G�������Ŷ�
        newPtr->data = value;  // ��ȩ�J�`�I
        newPtr->nextPtr = NULL;  // �`�I���s�����L�`�I

        ListNodePtr previousPtr = NULL;
        ListNodePtr currentPtr = *sPtr;

        // �M���C���쥿�T���J����m
        while (currentPtr != NULL && value > currentPtr->data) {
            previousPtr = currentPtr;  // ���ʨ�U�@�Ӹ`�I
            currentPtr = currentPtr->nextPtr;  // �~�򲾰�
        }

        // �b�C��}�Y���J�s�`�I
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else {  // �b previousPtr �M currentPtr �������J�s�`�I
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else {
        printf("%c �L�k���J�C�S���������O����C\n", value);
    }
}

// �R���C�����@�Ӥ���
char del(ListNodePtr* sPtr, char value) {
    // �p�G�Ĥ@�Ӹ`�I���ǰt���ȡA�R����
    if (value == (*sPtr)->data) {
        ListNodePtr tempPtr = *sPtr;  // �O�d�Q�R�����`�I
        *sPtr = (*sPtr)->nextPtr;  // �_�}�`�I�챵
        free(tempPtr);  // ����Q�_�}���`�I
        return value;
    }
    else {
        ListNodePtr previousPtr = *sPtr;
        ListNodePtr currentPtr = (*sPtr)->nextPtr;

        // �M���C���쥿�T��m
        while (currentPtr != NULL && currentPtr->data != value) {
            previousPtr = currentPtr;  // ���ʨ�U�@�Ӹ`�I
            currentPtr = currentPtr->nextPtr;  // �~�򲾰�
        }

        // �R�� currentPtr ���`�I
        if (currentPtr != NULL) {
            ListNodePtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }

    return '\0';
}

// �p�G�C���šA��^ 1�F�_�h��^ 0
int isEmpty(ListNodePtr sPtr) {
    return sPtr == NULL;
}

// �L�X�C���e
void printList(ListNodePtr currentPtr) {
    // �p�G�C����
    if (isEmpty(currentPtr)) {
        puts("�C���šC\n");
    }
    else {
        puts("�C���e��:");

        // ���O�C���̫�@�Ӹ`�I
        while (currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        puts("NULL\n");
    }
}