#include<stdio.h>
int main(){
	char ch;
	printf("Letter:");
	scanf("%c",&ch);
	printf("LOWERCASE:%c,%d\n",ch,ch);
	printf("UPPERCASE ASCII:%d\n",ch-32);
	return 0;
}