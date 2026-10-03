#include<stdio.h>
int main(){
	unsigned int x;
	printf("enter value:");
	scanf("%u",&x);
	x=x&12;
	printf("selected bits value:%c\n",x);
}