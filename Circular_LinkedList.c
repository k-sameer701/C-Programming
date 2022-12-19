#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverseCircularLinkedList(struct Node *head)
{

    /*
    // First Method
    struct Node *ptr = head;
    printf("Elementd is %d\n",ptr -> data);
    ptr = ptr -> next;

    while(ptr != head){
        printf("Element is %d\n", ptr ->data);
        ptr = ptr -> next;
    }       */

    // Second Method
    struct Node *ptr = head;
    printf("Element is %d\n", ptr->data);
    ptr = ptr->next;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    traverseCircularLinkedList(head);
}