#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data); // Jab tak pointer Null pe na aa jaye ptr ka data print kar do
        ptr = ptr->next;         // or ptr ko age badaha do
    }
}
int main()
{

    // CREATION OF LINKEDLIST
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // ALLOCATING MEMORY FOR LINKEDLIST DYNAMICALLY
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // LINKING FIRST AND SECOND NODES
    head->data = 11;
    head->next = second;

    // LINKING SECOND AND THIRD NODES
    second->data = 12;
    second->next = third;

    // LINKING THIRD WITH NULL NODE
    third->data = 13;
    third->next = NULL;
}