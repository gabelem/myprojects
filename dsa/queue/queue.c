#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main()
{
    enQueue(1);
    enQueue(2);
    enQueue(3);

    display();

    deQueue();
    deQueue();
    deQueue();

    return 0;
}

void enQueue(int value)
{
    if(rear == SIZE - 1) // verify it the queue is full
    {
        printf("\nQueue is full");
        return;
    }
    if(front == -1) // if is not initialized
    {
        front = 0;
    }
    // if queue is empty, front and rear wil be initialized in index 0 (start of the array)
    // the index 0 of the rear will get the user element value the function enqueue()

        rear++;
        items[rear] = value;
        printf("\nInserted: %d\n", value);
}
void deQueue()
{
    if(front == -1)
    {
        printf("\nQueue is empty"); //verify if the queue is empty
    }
    else
    {
        printf("\nDeleted/SKIPPED: %d ", items[front]);
        front++;
        if(front > rear) // example: if front is 4 and rear is 3 the list will be added the value -1 to be empty
        {
            front = rear = -1;
        }
    }
}

void display() 
{
    if(rear == -1)
    {
        printf("\nQueue is empty.");
    }
    else
    {
        for(int i = 0; i < items[rear]; i++)
        {
            printf("%d ", items[i]);
        }
    }
}