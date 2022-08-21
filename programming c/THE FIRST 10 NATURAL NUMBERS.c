#include<stdio.h>
int main(){
	int j,sum=0;
	printf("The first natural nnumbers is \n");
	for(j=1;j<=10;j++)
	{
		sum=sum+j;
		printf("%d",j);
	}
		printf("\n The Sum is:  %d\n " , sum);
	return 0;
}
