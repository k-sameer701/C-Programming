#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q)
{
    if(q -> r == q -> size-1)
    {
        return 1;
    }

    return 0;
}

int isEmpty(struct queue *q)
{
    if(q -> f == q -> r)
    {
        return 1;
    }

    return 0;
}

void enqueue(struct queue *q, int value)
{
    if(isFull(q))
        printf("Queue is Full");
    else
    {
        //q -> arr = q -> r+1;
        q -> r++;
        q -> arr[q->r] = value;
        printf("Enqued Element is %d \n", value);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if(isEmpty(q))
        printf("Queue is Empty");
    else
    {
        q -> f++;
        a = q -> arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));

    // if(isEmpty(&q))
    // {
    //     printf("Queue is empty");
    // }

    // ENQUEUE FEW ELEMENTS:
 
    enqueue(&q, 12);
    enqueue(&q, 15); 

    printf("Dequeueing elements %d \n", dequeue(&q));
    printf("Dequeueing elements %d \n", dequeue(&q));

    if(isEmpty(&q))
    {
        printf("Queue is empty \n");
    }

    if(isFull(&q))
    {
        printf("Queue is Full \n");
    }

    return 0;
}