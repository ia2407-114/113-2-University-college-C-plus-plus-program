#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// self-referential structure (�쵲��C�`�I)
struct Student {
    int id;                // �ǥ� ID
    char name[50];         // �ǥͩm�W
    float score;           // �ǥͦ��Z
    struct Student* next;  // ���V�U�@�Ӹ`�I
};

typedef struct Student Student;
typedef Student* StudentPtr;

// �禡�ŧi
void insert(StudentPtr* head, int id, char name[], float score);
void deletestudent(StudentPtr* head, int id);
void printList(StudentPtr head);
void freeList(StudentPtr* head);
int isEmpty(StudentPtr head);

int main(void) {
    StudentPtr startPtr = NULL; // ��l���쵲��C����

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. �s�W�ǥ�\n");
        printf("2. �R���ǥ�\n");
        printf("3. ��ܾǥͲM��\n");
        printf("4. �h�X\n");
        printf("�п�ܾާ@: ");
        scanf_s("%d", &choice);

        if (choice == 1) {
            int id;
            char name[50];
            float score;

            printf("�п�J�ǥ� ID�B�m�W �M ���Z: ");
            if (scanf_s("%d %49s %f", &id, name, (unsigned int)sizeof(name), &score) != 3) {
                printf("��J���~�A�Э��s��J�C\n");
                while (getchar() != '\n'); // �M���w�İ�
                continue;
            }

            insert(&startPtr, id, name, score);
        }
        else if (choice == 2) {
            int id;
            printf("�п�J�n�R�����ǥ� ID: ");
            scanf_s("%d", &id);
            deletestudent(&startPtr, id);  // �אּ�I�s deleteStudent
        }
        else if (choice == 3) {
            printList(startPtr);
        }
        else if (choice == 4) {
            freeList(&startPtr);
            printf("�{�������A�O����w����C\n");
        }
        else {
            printf("�L�Ŀﶵ�A�Э��s��J�C\n");
        }

    } while (choice != 4);

    return 0;
}

// ?? �� ID ���W�ƧǴ��J�ǥ�
void insert(StudentPtr* head, int id, char name[], float score) {
    StudentPtr newPtr = (StudentPtr)malloc(sizeof(Student)); // ���t�O����
    if (newPtr == NULL) {
        printf("�O������t���ѡA�L�k�s�W�ǥ͡C\n");
        return;
    }

    newPtr->id = id;
    strcpy_s(newPtr->name, sizeof(newPtr->name), name); // �ϥΦw���� strcpy_s
    newPtr->score = score;
    newPtr->next = NULL;

    StudentPtr prevPtr = NULL;
    StudentPtr currPtr = *head;

    // ��촡�J��m (�� ID �Ƨ�)
    while (currPtr != NULL && id > currPtr->id) {
        prevPtr = currPtr;
        currPtr = currPtr->next;
    }

    if (prevPtr == NULL) {  // ���J��}�Y
        newPtr->next = *head;
        *head = newPtr;
    }
    else {  // ���J�줤���Χ���
        prevPtr->next = newPtr;
        newPtr->next = currPtr;
    }

    printf("�ǥ� %s (ID: %d, ���Z: %.2f) �w�s�W�C\n", name, id, score);
}

void deleteStudent(StudentPtr* head, int id) {
    if (*head == NULL) {
        printf("�쵲��C���šA�L�k�R���C\n");
        return;
    }

    StudentPtr prevPtr = NULL;
    StudentPtr currPtr = *head;

    while (currPtr != NULL && currPtr->id != id) {
        prevPtr = currPtr;
        currPtr = currPtr->next;
    }

    if (currPtr == NULL) {
        printf("�䤣�� ID �� %d ���ǥ͡C\n", id);
        return;
    }

    if (prevPtr == NULL) { // �R���Ĥ@�Ӹ`�I
        *head = currPtr->next;
    }
    else { // �R�������γ̫�@�Ӹ`�I
        prevPtr->next = currPtr->next;
    }

    printf("�ǥ� %s (ID: %d) �w�R���C\n", currPtr->name, id);
    free(currPtr); // ����O����
}

// ?? �P�_�쵲��C�O�_����
int isEmpty(StudentPtr head) {
    return head == NULL;
}

// ?? �C�L�Ҧ��ǥ͸�T
void printList(StudentPtr head) {
    if (isEmpty(head)) {
        printf("�쵲��C���šC\n");
        return;
    }

    printf("\n�ǥͲM��:\n");
    StudentPtr currPtr = head;
    while (currPtr != NULL) {
        printf("ID: %d, �m�W: %s, ���Z: %.2f\n", currPtr->id, currPtr->name, currPtr->score);
        currPtr = currPtr->next;
    }
}

// ?? �����쵲��C�O����
void freeList(StudentPtr* head) {
    StudentPtr tempPtr;
    while (*head != NULL) {
        tempPtr = *head;
        *head = (*head)->next;
        free(tempPtr);
    }
}