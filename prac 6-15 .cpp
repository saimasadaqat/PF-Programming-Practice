#include<stdio.h>
int main(){
	char ch;
	printf("letter:");
	scanf("%c",&ch);
	printf("ascii:%d\n",ch);
	if(ch&32){
		printf("bit 32 is oN");
		return 0;
	}
	printf("bit 32 is oFF");
}