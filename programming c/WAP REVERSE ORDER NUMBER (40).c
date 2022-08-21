#include<stdio.h>
int main(){
	int num,m,sum=0,t;
	printf("enter a number:");
	scanf("%d",&num);
	for(t=num;num!=0;num=num/10)
	{
		m=num %10;
		sum=sum*10+m;
	}
	printf("The number is reverse order is: %d\n",sum);
	return 0;
}
