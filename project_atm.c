#inclide<stdio.h>
#include<stdlib.h>
struct transaction{
	int t_id;
	int t_amount;
	char t_type;
	double t_bal;
	struct transction *next;
};
// initializing front and rear =null
struct transaction *front=NULL;
struct transaction *rear=NULL;
// prototype
void enqueue();
int dequeue();
void display();
// 





