#include<stdio.h>
int main(){
	unsigned int x;
	printf("enter a number(0-255):");
	scanf("%u",&x);
	if(x&16){
		printf("bit 5 is on");
		return 0;
	}
		printf("bit 5 is off");
		return 0;
}