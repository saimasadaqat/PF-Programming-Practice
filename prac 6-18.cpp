#include<stdio.h>
int main(){
	unsigned int x,bit16,bit32,bit64,bit128,sum;
	printf("enter value x:");
	scanf("%u",&x);
	bit16=x&16;
	bit32=x&32;
	bit64=x&64;
	bit128=x&128;
	sum=bit16+bit32+bit64+bit128;
	printf("total decimal value:%u\n",sum);
	return 0;
	
}