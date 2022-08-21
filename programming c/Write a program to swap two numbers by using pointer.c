#include <stdio.h>
void swap(int*a,int*b);
void main()
{
int x,y,z;
printf("enter two no\n");
scanf("%d %d",&x,&y);
printf("before swap x=%d,y=%d",x,y);
swap(&x,&y);
printf("\n after swap x=%d,y= %d",x,y);
}
void swap(int*a,int*b)
{
int temp;
temp =*a;
*a = *b;
*b =temp;
}
