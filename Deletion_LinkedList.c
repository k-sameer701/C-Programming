#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// CASE 1: DELETING FIRST ELEMENT FROM LINKEDLIST:
struct Node *deleteFirst(struct Node *head)
{

    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// CASE 2: DELETING THE ELEMENT AT A GIVEN INDEX FROM LINKEDLIST:
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

// CASE 3: DELETING THE LAST ELEMENT
struct Node *deleteAtLast(struct Node *head)
{

    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    // CREATION OF LINKEDLIST
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    // LINK FIRST AND SECOND NODE
    head->data = 11;
    head->next = second;

    // LINK SECOND AND THIRD NODE
    second->data = 12;
    second->next = third;

    // LINK THIRD WITH FOURTH
    third->data = 13;
    third->next = fourth;

    // LINK FOURTH WITH NULL
    fourth->data = 14;
    fourth->next = NULL;

    /*
    printf("\n Displaying content of Linked List before deletion : \n ");
    linkedListTraversal(head);

    head = deleteFirst(head);
    printf("\n Displaying content of Linked List after deletion : \n ");
    linkedListTraversal(head);  */

    /*
    printf("\n Displaying content of Linked List before deletion \n : ");
    linkedListTraversal(head);

    head = deleteAtIndex(head, 1);
    printf("\n Displaying content of Linked List after deletion : \n ");
    linkedListTraversal(head);      */

    printf("\n Displaying content of Linked List before deletion : \n");
    linkedListTraversal(head);

    head = deleteAtLast(head);
    printf("\n Displaying content of Linked List after deletion : \n");
    linkedListTraversal(head);
}