#include<stdio.h>
int main(){
		unsigned int x;
	printf("enter a number(0-255):");
	scanf("%u",&x);
    printf("Last three bits:%d",x&7);
    return 0;
}