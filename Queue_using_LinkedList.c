#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of the linkedlist. \n");
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));

    if (n == NULL)
        printf("Queue is Full \n");
    else
    {
        n->data = value;
        n->next = NULL;
        if (f == NULL)
            f = r = n;
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int value = -1;
    struct Node *ptr = f;

    if (f == NULL)
        printf("Queue is empty \n");
    else
    {
        f = f->next;
        value = ptr->data;
        free(ptr);
    }
    return value;
}

int main()
{
    linkedListTraversal(f);

    printf("Dequeueing Elements %d \n", dequeue());

    enqueue(34);
    enqueue(4);
    enqueue(24);
    enqueue(14);

    printf("Dequeueing Elements %d \n", dequeue());
    printf("Dequeueing Elements %d \n", dequeue());

    linkedListTraversal(f);

    return 0;
}
