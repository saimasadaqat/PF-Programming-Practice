#include<stdio.h>
int main(){
	unsigned int x;
	printf("enter value:");
	scanf("%u",&x);
	x=x&7;
	if(x==0)
	printf("000");
		if(x==1)
	printf("001");
		if(x==2)
	printf("010");
		if(x==3)
	printf("011");
		if(x==4)
	printf("100");
		if(x==5)
	printf("101");
		if(x==6)
	printf("110");
		if(x==7)
	printf("111");
	return 0;}