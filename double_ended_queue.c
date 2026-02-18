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
void insertrear();
void insertfront();
int deleterear();
int deletefront();
int peekfront();
void display();
//isfull() function
int isfull(){
	return (front==0 && rear==MAX-1 || front==rear+1);
}
// isempty() function
int isempty(){
	return (front==-1);
}
// insertrear() function
void insertrear(int value){
	if(isfull()){
		printf("Double ended queue is overflow\n");
	}else {
		if(front==-1){
			front=rear=0;
		}else if(rear==MAX-1){
			rear=0;
		}else{
			rear++;
		}
	}
	a[rear]=value;
}
// insertfront() function
void insertfront(int value){
	if(isfull()){
		printf("Double ended queue is overflow\n");
	} else{
		if(front==-1){
			front=rear=0;
		}else if(front==0){
			front=MAX-1;
		}else{
			front--;
		}
	}
	a[front]=value;
}
//deleterear() function
int deleterear(){
	int value;
	if(isempty()){
		printf("Double ended queue is underflow");
		return -1;
	}
	value=a[rear];
	if(rear==0){
		rear=MAX-1;
	}else if(front==rear){
		front=rear=-1;
	}else{
		rear=rear-1;;
	} return value;
}
//deletefront() function
int deletefront(){
	int value;
	if(isempty()){
		printf("Double ended queue is underflow");
		return -1;
	}
	value=a[front];
	if(front==MAX-1){
		front=0;
	}else if(front==rear){
		front=rear=-1;
	}else{
		front=front+1;
	} return value;
}
// peekfront() function
int peekfront(){
	if(isempty()){
		printf("No elemts\n");
		return -1;
	}
	return a[front];
}
//display() function
void display(){
	if(isempty()){
		printf("No elements");
	}
	int i=front;
	while(1){
		printf("elements:%d\n",a[i]);
		if(rear==i) break;
		i=(i+1)%MAX;
    } 
}
	
// main method
int main(){
	int p,pe,value,choice;
	while(1){
		printf("Double ended Queue with array by menu based:--\n");
		printf("1.insertrear()\n");
		printf("2.insertfront()\n");
		printf("3.deleterear()\n");
		printf("4.deletefront()\n");
		printf("5.peekfront()\n");
		printf("6.display()\n");
		printf("7.exit()\n");
		printf("enter the choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the value to insert into array:\n");
				scanf("%d",&value);
				insertrear(value);
				break;
			case 2:
				printf("enter the value to insert into array:\n");
				scanf("%d",&value);
				insertfront(value);
				break;
			case 3:
			    value=deleterear();
				printf("deleterear element:%d\n",value);
				break;
			case 4:
			    value=deletefront();
				printf("deletefront element:%d\n",value);
				break;		
			case 5:
			    value=peekfront();
				printf("peek element:%d\n",value);
				break;
			case 6:
			    display();
				break;
			case 7:
			    printf("existing!...");
				exit(0);
			default:
			     printf("enter the choice correctly!");				
			    	
		}
	}
	return 0;
}

