#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include"stack.h"

void init_stack(stack *s)
{
	for (int i=0;i<MAXSIZE;i++)
	{
		s->data[i] = 0;
	}
	s->top = 0;
}

bool is_empty(stack *s)
{
	if (s->top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool push(stack *s,ELEM_TYPE value)
{
	if (s->top == MAXSIZE)
	{
		return false;
	}
	s->data[s->top] = value;
	s->top ++;
	return true;
}

int pop(stack *s)
{
	if (is_empty(s))
	{
		printf("栈空!\n");
	}
	int temp = s->data[s->top-1];
	s->top --;
	return temp;
}

void change_system(int num,int sys)
{
	stack s;
	init_stack(&s);
	while (num != 0)
	{
		int mod = num % sys; 
		push(&s,mod);
		num /= sys;
	}

	while (!is_empty(&s))
	{
		printf("%d",pop(&s));
	}
	printf("\n");
}

bool is_match(char *str)
{
	stack s;
	init_stack(&s);
	char *p = str;

	while (*p != '\0')
	{
		switch (*p)
		{
		case '(':
		case '[':
		case '{':
			push(&s,*p);
			break;
		case ')':
		case ']':
		case '}':
			char q = pop(&s);
			if (  (*p == ')' && q != '(')
			    ||(*p == ']' && q != '[')
				||(*p == '}' && q != '{'))
			{
				return false;
			}		
		}
		p++;
	}
	if (is_empty(&s))
	{
		return true;
	}
	else
	{
		return false;
	}

}

int convert_last(char *mid)
{

}

int eval_last(char *last)
{
	stack s;
	init_stack(&s);
	char *p = last;

	while (*p)
	{
		if (isdigit(*p))//判断是否为十进制的数值
		{
			push(&s,*p - '0');
		}
		else if (*p == ' ')
		{
			p++;
			continue;
		}
		else
		{
			int s1 = pop(&s);
			int s2 = pop(&s);
			switch (*p)
			{
			case '+':
				push(&s,s2 + s1);
				break;
			case '-':
				push(&s,s2 - s1);
				break;
			case '*':
				push(&s,s2 * s1);
				break;
			case '/':
				push(&s,s2 / s1);
				break;
			}
		}
		p++;
	}

	int res = pop(&s);
	return res;
}