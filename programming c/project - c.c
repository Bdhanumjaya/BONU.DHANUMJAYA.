#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int operator();
int number();
int main(){
    int final=1,i,num[5],oper,valid[4];
    int sum,ans[4];
    srand(time(0));
    for(i=0;i<5;i++)
    {
        num[i]=number();
    }
    oper=operator();
    if(oper==1)
    {
        sum=num[0]+num[1]/num[2]*num[3]-num[4];
        valid[0]=43,valid[1]=47,valid[2]=42,valid[3]=45;
    }
    else if (oper==2)
    {
        sum=num[0]/num[1]*num[2]+num[3]-num[4];
        valid[0]=47,valid[1]=42,valid[2]=43,valid[3]=45;
    }
        else if (oper==3)
    {
        sum=num[0]-num[1]+num[2]*num[3]/num[4];
        valid[0]=45,valid[1]=43,valid[2]=42,valid[3]=47;
    }
        else if (oper==4)
    {
        sum=num[0]*num[1]-num[2]+num[3]/num[4];
        valid[0]=42,valid[1]=45,valid[2]=43,valid[3]=47;
    }
    printf("Guess the Operator!\nOperators Used is + - * /\nEnter the operator\n'/'= 47 '*'= 42 '+'= 43 '-'= 45 for the numbers\n");
    for(i=0;i<4;i++)
    {
        printf("%d___",num[i]);
    }
    printf("%d= %d\n",num[4],sum);
    for(i=0;i<4;i++)
    {
        printf("Enter Operator for %d Blank in number: ",i+1);
        scanf("%d",&ans[i]);
    }
    for(i=0;i<4;i++)
    {
        if(ans[i]!=valid[i]){
            final=0;
        }
    }
    if(final==1)
    {
        printf("You Won");
    }
    else
    {
        printf("You Failed, Try again");
        main();
    }
    return 0;
}
int operator()
{
    int bi=rand()%5;
    if(bi==0)
    {
        operator();
    }
    else
    {
        return bi;
    }
}
int number()
{
    int vi=rand()%1000;
    if(vi==0)
    {
        operator();
    }
    else
    {
        return vi;
    }
}
