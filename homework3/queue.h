#define MAXSIZE 6

typedef int Elem_Type; 

typedef struct
{
	Elem_Type data[MAXSIZE];
	int head;
	int tail;
}queue;

void init_queue(queue *q);

bool is_empty(queue *q);

int get_len(queue *q);

bool is_full(queue *q);

int get_head(queue *q);

void en_queue(queue *q,int value);

void de_queue(queue *q);