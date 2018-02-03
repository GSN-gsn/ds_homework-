#include<stdio.h>
#include"queue.h"

void main()
{
	queue q;
	init_queue(&q);
	de_queue(&q);
	en_queue(&q,1);
	en_queue(&q,2);
	en_queue(&q,3);
	en_queue(&q,4);
	en_queue(&q,5);
	en_queue(&q,6);
	de_queue(&q);
	en_queue(&q,6);
	de_queue(&q);
	de_queue(&q);
	de_queue(&q);
}