#include<stdio.h>
int main(){
	unsigned int x;
	printf("enter value:");
	scanf("%u",&x);
	if((x&4)&&(x&32)){
	printf("both bits are on");
	return 0;	
	}
  	if(!(x&4)&& !(x&32)){
	printf("both bits are off");
	return 0;	
	}
}