#include<stdio.h>
int main(){
	unsigned int x,bit16,bit1,bit4,bit64,sum;
	printf("enter value x:");
	scanf("%u",&x);
	if(x&1)
	sum++;
	if(x&4)
	sum++;
	if(x&16)
	sum++;
	if(x&64)
	sum++;
	if(sum==4){
		printf("pattern matched");
		return 0;
	}
	printf("pattern not matched");
	return 0;}