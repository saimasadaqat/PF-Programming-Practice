#include<stdio.h>
int main(){
		unsigned int x;
	printf("enter a number(0-255):");
	scanf("%u",&x);
	if(x&64){
		printf("bit 7 is on");
		return 0;
	}
		printf("bit 7 is off");
		return 0;
}