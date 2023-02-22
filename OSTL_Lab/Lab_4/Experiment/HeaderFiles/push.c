#include<stdio.h>

void push(int *stack,int size,int n,int *tos){
	if(*tos == size-1){
		printf("Overflow!! Cannot Push");
	}
	else{
		stack[++(*tos)] = n;
	}
}
