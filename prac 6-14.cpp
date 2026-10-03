#include<stdio.h>
int main(){
	unsigned int x,y;
	printf("enter value:");
	scanf("%u",&x);
	y=x&15;
	if(x>7){
		printf("bit 4 on");
		return 0;
	}
	printf("bit 4 off");
	return 0;
}