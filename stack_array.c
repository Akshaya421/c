#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX];
int top=-1;
int isfull();
int isempty();
void push(int value);
int pop();
int isfull(){
	return (top==MAX-1);
}
void push(int value){
	if(isfull()){
		printf("stack is overflow");
	} else {
		top++;
		a[top]=value;
		printf("pushed successfully!");
	}
}
int pop(){
	if(isempty()){
		printf("stack is underflow");
		return -1;
	}
	else{
		int res=a[top];
		top--;
		return res;
	}
}
int isempty(){
	return (top==-1);
}
int peek(){
	if(isempty()){
		printf("No elements");
		return -1;
	}else{
	return	a[top];
	}
}
void display(){
	if(isempty()){
		printf("No elemnts");
	}else{
		printf("stack elements:\n");
		int i;
		for(i=top;i>=0; i--){
			printf("%d\n",a[i]);
		}
	}
}
int main(){
   int p;
   int pe;
   while(1){
   	printf("Stack with menu based:-\n");
   printf("1.push\n");
   printf("2.pop\n");
   printf("3.peek\n");
   printf("4.display()\n");
   printf("5.exit\n");
   	 printf("enter choice:\n");
   	int choice;
   scanf("%d",&choice);
   switch(choice){
   	 
   	case 1:
   		printf("enter value to push into array:\n");
   		int value;
   		scanf("%d",&value);
   		push(value);
   		break;
   	case 2:
	   p=pop();
	   if(p!=-1)
	   printf("pop element:%d",p);
	   break;
	case 3:
	     pe=peek();
	     if(pe!=-1)
		printf("peek element:%d",pe);
		break;
	case 4:
	     display();	
	     break;
	case 5:
		printf("existing!....");
		exit(0);
	default:
		printf("enter choice correctly!");	
   }
  
}
   
	return 0;
}
