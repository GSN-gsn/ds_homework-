
typedef struct loop_list
{
	int data;
	struct loop_list *next;
}node;
void kill_game(int sum,int cir);
void init_list(node *phead);
void insert_tail(node *phead,int i);
void delete_list(node *phead,int cir);
void print_list(node *phead);