#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct myData
{
	int data;
};

struct circular_queue
{
	struct myData example[MAX_SIZE];
	int FRONT;
	int REAR;
	int count;
};

void init(struct circular_queue *q)
{
	q->FRONT = 0;
	q->REAR = -1;
	q->count = 0;
}

int isFull(struct circular_queue *q)
{
	return q->count == MAX_SIZE;
}

int isEmpty(struct circular_queue *q)
{
	return q->count == 0;
}

void enqueue(struct circular_queue *q, int value)
{
	if(isFull(q))
	{
		isFull(q);
		return;
	}

	q->REAR = (q->REAR + 1) % MAX_SIZE;
	q->example[q->REAR].data = value;
	q->count++;
	printf("Enqueued: %d\n", value);
}

void dequeue(struct circular_queue *q)
{
	if(isEmpty(q))
	{
		isEmpty(q);
		return;
	}
	printf("Dequeued %d\n", q->example[q->FRONT].data);
	q->FRONT = (q->FRONT + 1) %MAX_SIZE;
	q->count--;
}

void display(struct circular_queue *q)
{
	if(isEmpty(q))
	{
		isEmpty(q);
		return;
	}
	printf("Queue [FRONT->REAR]: ");
	
	for(int i = 0; i < q->count; i++)
	{
		printf("%d ", q->example[(q->FRONT + i) % MAX_SIZE].data);
		printf("\n");
	}
}

int main()
{
	struct circular_queue q;
	init(&q);
	//^^struct circular_queue *q = &q;
	
	enqueue(&q, 10);
	display(&q);

	printf("\n");
	dequeue(&q);

	return 0;
}
