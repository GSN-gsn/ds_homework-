#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

//void main()
//{
//	int num,sys;
//	printf("Please enter a number:");
//	scanf_s("%d",&num);
//	printf("Please enter the system you want:");
//	scanf_s("%d",&sys);
//	change_system(num,sys);
//}

//void main()//error
//{
//	char *str;
//	printf("Please enter an equation:");
//	scanf_s("%s",&str);
//	is_match(str);
//}

void main()
{
	char *mid = "6+(7-1)*3+8/2";
	char last[20];
	convert_last(mid);
	printf("%d\n",eval_last(last));
}

