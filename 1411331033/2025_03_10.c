#include <stdio.h>
#include <stdlib.h>

typedef struct r
{
    char name[20];
    int ID;
    int math, comput;
    float AVG;
}R;

typedef struct node
{
    R data;
    struct node* next;
}Node;

typedef Node* NodePtr;

void insert(NodePtr* sPtr);
void delete(NodePtr* sPtr, unsigned int ID);
void printList(NodePtr currentPtr);

int main(void)
{
    NodePtr startPtr = NULL;
    unsigned int a,b;
    printf_s("1.�s�W�ǥ͸��\n2.�R���ǥ͸��\n3.����\n�п�J1~3:");
    scanf_s("%u", &a);

    while (a != 3)
    {
        if (a == 1)
        {
            insert(&startPtr);
        }

        else
        {
            if (startPtr == NULL)
            {
                printf_s("�ثe�S�����\n");
            }
            else
            {
                printf_s("��J�n�R�����ǥ�ID:\n");
                scanf_s("%u", &b);
                delete(&startPtr, b);
                printf_s("�R������\n");
            }
        }
        printList(startPtr);
        printf_s("1.�s�W�ǥ͸��\n2.�R���ǥ͸��\n3.����\n�п�J1~3:");
        scanf_s("%u", &a);
    }

    printf_s("�����{��\n");
    return;
    
}


void insert(NodePtr* sPtr)
{
    NodePtr newPtr = malloc(sizeof(Node));
    
    if (newPtr != NULL)
    {
        printf_s("�п�J�ǥͩm�W:\n");
        scanf_s("%s", newPtr->data.name,19);
        printf_s("�п�J�ǥ;Ǹ�ID:\n");
        scanf_s("%d", &newPtr->data.ID);
        printf_s("�п�J�ǥͼƾǦ��Z:\n");
        scanf_s("%d", &newPtr->data.math);
        printf_s("�п�J�ǥ͵{�����Z:\n");
        scanf_s("%d", &newPtr->data.comput);
        newPtr->data.AVG = (newPtr->data.math + newPtr->data.comput) / 2.0;
        newPtr->next = NULL;

        NodePtr previousPtr = NULL;
        NodePtr currentPtr = *sPtr;

        while (currentPtr != NULL && newPtr->data.ID > currentPtr->data.ID)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->next;
        }
        if (previousPtr == NULL)
        {
            newPtr->next = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->next = newPtr;
            newPtr->next = currentPtr;
        }
    }

    else
    {
        printf_s("�L�k�s�W�ǥ͸��\n");
        return;
    }
}

void delete(NodePtr* sPtr, unsigned int ID)
{
    if (*sPtr == NULL) 
    {
        printf_s("���~�A�S����ƥi�H�R��\n");
        return;
    }

    NodePtr previousPtr = NULL;
    NodePtr currentPtr = *sPtr;

    while (currentPtr != NULL && currentPtr->data.ID != ID) 
    {
        previousPtr = currentPtr;
        currentPtr = currentPtr->next;
    }

    if (currentPtr == NULL) 
    {
        printf("�Ǹ� %d �����C\n", ID);
        return;
    }

    if (previousPtr == NULL)
    {
        *sPtr = currentPtr->next;
    }
    else 
    {
        previousPtr->next = currentPtr->next;
    }

    free(currentPtr);
}

void printList(NodePtr currentPtr)
{
    printf_s("�m�W     �Ǹ�ID      �ƾǦ��Z    �{�����Z    ����\n");
    if (currentPtr == NULL)
    {
        printf_s("���~�A�S�����\n");
        return;
    }
    else
    {
        while(currentPtr != NULL)
        { 
            printf_s("%-3s      %-6d      %-6d      %-6d      %-6.2f\n",currentPtr->data.name,currentPtr->data.ID,currentPtr->data.math,currentPtr->data.comput,currentPtr->data.AVG);
            currentPtr = currentPtr->next;
        }
    }   
}