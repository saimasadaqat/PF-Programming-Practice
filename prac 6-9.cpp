#include<stdio.h>
int main(){
	unsigned int x;
	printf("enter value;");
	scanf("%u",&x);
	x=x&3;
	printf("decimal value:%u\n",x);
	if(x==0){
		printf("last two bits 00");
		return 0;
	}
		if(x==1){
		printf("last two bits 01");
		return 0;
	}
		if(x==2){
		printf("last two bits 10");
		return 0;
	}
		if(x==3){
		printf("last two bits 11");
		return 0;
	}
}