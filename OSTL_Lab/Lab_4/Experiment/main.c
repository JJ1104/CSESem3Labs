#include<stdio.h>
#include<stdlib.h>
#include "HeaderFiles/stack_operations.h"

int main(){
	int *stack;
	int tos=-1,ele,size,choice=0;
	printf("Enter the size of stack: ");
	scanf("%d",&size);
	stack = (int *) malloc(size*sizeof(int));
	while(choice != 4){
		printf("\n1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		if(choice == 1){
			printf("Enter the element you want to push: ");
			scanf("%d",&ele);
			push(stack,size,ele,&tos);
		}
		else if(choice == 2){
			printf("Popping the element\n");
			ele = pop(stack,size,&tos);
			if(ele == 0){}
			else
				printf("Popped element: %d",ele);
		}
		else if(choice == 3){
			display(stack,size,&tos);
		}
		else if(choice == 4){
			printf("Exiting!!");	
		}
		else{
			printf("Invalid Choice!");
		}
	}
	return 0;
}
