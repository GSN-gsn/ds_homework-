#include"list.h"
#include<stdlib.h>
#include<stdio.h>

void init_list(node *phead)
{
	phead->data = 0;
	phead->next = phead;
}

void insert_tail(node *phead,int sum)
{
	node *p = phead;
	for(int i=1;i<=sum;i++)
	{
		node *newnode = (node *)malloc(sizeof(node)*1);
		newnode->data = i;
		p->next = newnode;
		p = newnode;
		p->next = phead->next;
	}
}

void kill_game(int sum,int cir)
{
	node phead;
	init_list(&phead);
	insert_tail(&phead,sum);
	delete_list(&phead,cir);
}

void delete_list(node *phead,int cir)
{
	node *p = phead;
	while(p->next != p)
	{
		for(int i=1;i<cir;i++)
		{
			p = p->next;
		}
		node *q = p->next;
		p->next = p->next->next;
		free(q);
	}
	printf("The last people is %d!\n",p->data);
}