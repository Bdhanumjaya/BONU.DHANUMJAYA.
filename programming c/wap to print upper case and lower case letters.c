#include<stdio.h>
int main(){
	char c;
	printf("enter x to display uppercase letters.\n");
	printf(" enter y to display lowercase letters.\n");
	scanf("%c",&c);
	if(c=='X'|| c=='x')
	for(c='A' ;c<='Z' ;c++)
	printf("%c" ,c);
	else if (c=='y' || c=='y')
	for(c='a';c<='z';c++)
	printf("%c" ,&c); 
	else
		printf("invalid");
} 
