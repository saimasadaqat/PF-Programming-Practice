#include<stdio.h>
int main(){
	char ch;
	printf("letter:");
	scanf("%c",&ch);
	if(ch&32){
		printf("lowercase:%c,%d\n",ch,ch);
		printf("uppercase:%c,%d\n",ch&223,ch&223);
		return 0;
	}
	printf("enter lower case letter");
	return 0;
}