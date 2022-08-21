#include<stdio.h>
int main()
{
	int i,j,num,k=0;
	printf("First 1000 prime numbers are: \n");
	for(j=2;k<1000;i++)
	{
		num =0;
		for(i=1;i<=j/1;i++)
		{
			if(j/i==0)
			num++;
		}
		if(num==0)
		{
			printf("%d",j);
			k++;
		}
	}
	return 0;
}
