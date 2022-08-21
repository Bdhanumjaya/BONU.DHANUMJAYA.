#include<stdio.h>
int main(){
	int i,j,rowes;
	printf("enter no.of rowes: ");
	scanf("%d", & rowes);
	for(i=rowes ; i>=1;--i)
	{
		for (j=1;j<=i;++j)
		{
		printf ("#");
		}
		printf("\n");
	}
		return 0;
}

