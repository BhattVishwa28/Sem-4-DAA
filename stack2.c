#include<stdio.h>
int stack[8];

void main(){
	
	int choice;
	
	printf("1)push \n 2)pop \n 3)peep");
	printf("Enter ur choice");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peep();
			break;
	}
}
int isempty(){
	int top=-1;
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isfull(){
	int maxsize = 6;
	int top=-1;
	if(top==maxsize){
		return 1;
	}
	else{
		return 0;
	}
}
	
int push(int data,int top){
	int stack[8];
	if(!isfull()){
		top=top+1;
		stack[top] = data;
	}
	else{
		printf("Stack overflow");
	}
}
	
int pop(int data,int top){
	if(!isempty()){
		data = stack[top];
		top = top-1;
		return data;
	}
	else{
		print("stack underflow");
	}
}
int peep(int i){
	return i;
}
