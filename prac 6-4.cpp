#include<stdio.h>
int main(){
	unsigned int x;
	printf("enter a number(0-255):");
	scanf("%u",&x);
    printf("Last four bits:%u",x&15);
    return 0;
}