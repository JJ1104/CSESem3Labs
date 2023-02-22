#include<stdio.h>

void display(int *stack,int size,int *tos){
	int i;
	if(*tos == -1){
		printf("Stack is empty!");
	}
	else{
		printf("Stack: \n");
		for(i=0;i<*tos+1;i++){
			printf("%d,",stack[i]);
		}
	}
}
