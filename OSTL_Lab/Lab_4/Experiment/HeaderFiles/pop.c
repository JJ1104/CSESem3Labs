#include<stdio.h>

int pop(int *stack,int size,int *tos){
	if(*tos == -1){
		printf("Underflow!! Cannot Pop");
		return 0;
	}
	else{
		return stack[(*tos)--];
	}
}
