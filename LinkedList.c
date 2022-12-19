#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    // CREATION OF LINKED_LIST
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // ALLOCATE MEMORY FOR NODE IN THE LINKED LIST IN HEAP
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // LINK FIRST AND SECOND NODE
    head->data = 11;
    head->next = second;

    // LINK SECOND AND THIRD NODE
    second->data = 14;
    second->next = third;

    // LINK THIRD AND FOURTH NODE
    third->data = 34;
    third->next = fourth;

    // TERMINATE THE LIST AT THE FOURTH NODE
    fourth->data = 42;
    fourth->next = NULL;

    printf("Traversing the Linked List: ");
    linkedListTraversal(head);

    return 0;
}