#include<stdio.h>
int main(){
	unsigned int x,y,sum,bit;
	printf("enter value x:");
	scanf("%u",&x);
	printf("enter value y:");
	scanf("%u",&y);
	sum=x&y;
	printf("AND:%u\n",sum);
	if(sum&1)
	printf("1st bit is on\n");
	if(sum&2)
	printf("2nd bit is on\n");
	if(sum&4)
	printf("3rd bit is on\n");
	if(sum&8)
	printf("4th bit is on\n");
	return 0;
}