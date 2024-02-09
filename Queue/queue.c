#include <stdio.h>

#define MAX 10

void enqueue(int *arr, int item, int *pfront, int *prear)
{
    if (*prear == MAX-1)
    {
        printf("Queue is full\n");
        return;
    }
    else
    {
        printf("Enqueuing: %d\n", item);
        (*prear)++;
        arr[*prear] = item;

        if(*pfront == -1)
            *pfront = 0;
    }

}

int empty(int *pfront)
{
    if(*pfront == -1)
    {
        printf("Queue is empty\n");
        return 1;
    }
    else
        return 0;
}

int dequeue(int *arr, int *pfront, int *prear)
{
    int data = arr[*pfront];
    printf("Dequeuing: %d\n", data);

    arr[*pfront] = 0;
    if (*pfront == *prear)
        *pfront = *prear = -1;
    else
        (*pfront)++;

    return data;
}

int main()
{
    int arr[MAX];
    int front = -1, rear = -1;

    enqueue(arr, 23, &front, &rear);
    enqueue(arr, 2, &front, &rear);
    enqueue(arr, 83, &front, &rear);
    enqueue(arr, 32, &front, &rear);
    enqueue(arr, 21, &front, &rear);
    enqueue(arr, 2, &front, &rear);
    enqueue(arr, -8, &front, &rear);
    enqueue(arr, 2, &front, &rear);
    enqueue(arr, 23, &front, &rear);
    enqueue(arr, 23, &front, &rear);

    int i;
    for(int idx=0; idx<MAX+1; idx++)
    {
        if(!empty(&front))
        {
            i = dequeue(arr, &front, &rear);
            printf("Recieved Dequeued item: %d\n", i);
        }
    }

    return 0;
}