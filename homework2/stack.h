#define MAXSIZE 10
typedef int ELEM_TYPE;
typedef struct
{
	ELEM_TYPE data[MAXSIZE];
	int top;
}stack;

void init_stack(stack *s);
bool is_empty(stack *s);
bool push(stack *s,ELEM_TYPE value);
int pop(stack *s);
void change_system(int num,int sys);
bool is_match(char *str);
int convert_last(char *mid);
int eval_last(char *last);