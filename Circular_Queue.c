#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }

    return 0;
}

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }

    return 0;
}

void enqueue(struct circularQueue *q, int value)
{
    if (isFull(q))
        printf("Queue is Full");
    else
    {
        // q -> arr = q -> r+1;
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = value;
        printf("Enqued Element is %d \n", value);
    }
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
        printf("Queue is Empty");
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // if(isEmpty(&q))
    // {
    //     printf("Queue is empty");
    // }

    // ENQUEUE FEW ELEMENTS:

    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 16);
    // enqueue(&q, 18);

    printf("Dequeueing elements %d \n", dequeue(&q));
    printf("Dequeueing elements %d \n", dequeue(&q));
    printf("Dequeueing elements %d \n", dequeue(&q));
    // printf("Dequeueing elements %d \n", dequeue(&q));

    enqueue(&q, 10);

    if (isEmpty(&q))
    {
        printf("Queue is empty \n");
    }

    if (isFull(&q))
    {
        printf("Queue is Full \n");
    }

    return 0;
}