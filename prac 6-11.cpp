#include<stdio.h>
int main(){
	unsigned int x;
	printf("enter value:");
	scanf("%u",&x);
	if((x&8)&&(x&16)){
	printf("both bits are on");
	return 0;	
	}
  	if(!(x&8)&& !(x&16)){
	printf("both bits are off");
	return 0;	
	}
	
	printf("one is on other is off");
	return 0;	
	

}