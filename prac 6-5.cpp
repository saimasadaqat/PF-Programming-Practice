#include<stdio.h>
int main(){
	char ch;
	printf("Letter:");
	scanf("%c",&ch);
	printf("Upper case:%c,%d\n",ch,ch);
	printf("lowercase ASCII:%d\n",ch+32);
	return 0;
}