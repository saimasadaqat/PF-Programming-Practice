#include<stdio.h>
int main(){
	char ch;
	printf("Letter:");
	scanf("%c",&ch);
		printf("UPPERCASE:%c\n",ch);
	printf("LOWERCASE:%c\n",ch+32);
	return 0;
}