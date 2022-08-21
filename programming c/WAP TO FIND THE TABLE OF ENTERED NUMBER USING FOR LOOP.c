#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a number to find the table of the number:  ");
	scanf("%d" ,&a,&b);
	for(b=1;b<11;b++)
	{
		printf("\n%d*%d=%d",a,b,a*b);
	}
	return 0;
}
