#include<stdio.h>
int main(){
	int i,j,rows,k=1;
	printf("enter rows: ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for (j=1;j<=i;j++)
		print("%d",k++);
		printf("\n");
	}
	return 0;
}
