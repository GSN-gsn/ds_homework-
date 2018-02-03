#include<stdio.h>
#include"queue.h"

void init_queue(queue *q)
{
	for(int i = 0;i < MAXSIZE;++i)
	{
		q->data[i] = 0;
	}
	q->head = 0;
	q->tail = 0;
}

bool is_empty(queue *q)
{
	return q->head == q->tail;
}

int get_len(queue *q)
{
	return (q->tail - q->head + MAXSIZE)%MAXSIZE;
}

bool is_full(queue *q)
{
	return get_len(q) == (MAXSIZE-1);
}

int get_head(queue *q)
{
	if(is_empty(q))
	{
		printf("the queue is empty!\n");
		return 0;
	}
	return q->data[q->head];
}

void en_queue(queue *q,int value)
{
	if(!is_full(q))
	{
		q->data[q->tail%MAXSIZE] = value;
		q->tail = (q->tail + 1)%MAXSIZE;
		for(int i = 0;i < MAXSIZE;++i)
		{
			printf("%d ",q->data[i]);
		}
		printf("\n");
	}
	else
		printf("the queue is full!\n");
}

void de_queue(queue *q)
{
	if(is_empty(q))
	{
		printf("the queue is empty!\n");
	}
	else
	{
		int temp = q->data[q->head%MAXSIZE];
		printf("the data of head is:%d\n",temp);
		q->data[q->head%MAXSIZE] = 0;
		q->head = (q->head+1)%MAXSIZE;
		for(int i = 0;i < MAXSIZE;++i)
		{
			printf("%d ",q->data[i]);
		}
		printf("\n");
	}
}