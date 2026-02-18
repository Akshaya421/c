#include<stdio.h>
#include<stdlib.h>
#define MAX 5
//array
int a[MAX];
//initializing front and rear to -1
int front=-1;
int rear=-1;
//prototype
int isfull();
int isempty();
void enqueue(int value);
int dequeue();
int peek();
void display();
//isfull() function
int isfull(){
 return (rear==MAX-1);
}
// isempty() function
int isempty(){
	if(front==-1 || front>rear){
		return -1;
	} return 0;
}
// enqueue() function
void enqueue(int value){
	if(isfull()){
		printf("Queue is overflow\n");
	}else{
		if(front==-1){
		front=0;
	}
		rear++;
		a[rear]=value;
	}
}
// dequeue() function 
int dequeue(){
	int res;
	if(isempty()){
		printf("queue is underflow\n");
		return -1;
	}
	res=a[front];
	 if(front==rear)
	{
     front=rear=-1;
	}else{
		front++;
	}
	return res;
}
//peek ()function
int peek(){
	if(isempty()){
		printf("No elements\n");
		return 0;
	}else{
	return a[rear];
	}
}
// display() function
void display(){
	if(isempty()){
		printf("No elements\n");
	}else {
		int i;
		printf("queue elements:\n");
		for( i=front; i<=rear; i++){
			printf("%d\n",a[i]);
		}
	}	
}
// main method
int main(){
	int p,pe,value,val,choice;
	while(1){
		printf("Queue with array by menu based:--\n");
		printf("1.enqueue()\n");
		printf("2.dequeue()\n");
		printf("3.peek()\n");
		printf("4.display()\n");
		printf("5.exit()\n");
		printf("enter the choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the value to insert into array:\n");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
				val=dequeue();
				printf("dequeue element:%d\n",val);
				break;
			case 3:
			    val=peek();
				printf("peek element:%d\n",val);
				break;
			case 4:
			    display();
				break;
			case 5:
			    printf("existing!...");
				exit(0);
			default:
			     printf("enter the choice correctly!");				
			    	
		}
	}
	return 0;
}


