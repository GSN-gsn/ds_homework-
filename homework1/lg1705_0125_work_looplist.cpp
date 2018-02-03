#include<stdio.h>
#include"list.h"

void main()
{
	int sum,cir;
	printf("Please enter the total number£º");
	scanf_s("%d",&sum);
	printf("Please enter the circle number£º");
	scanf_s("%d",&cir);
	kill_game(sum,cir);
}