#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	int salary;
}info[100];
int main()
{
	int a;
	printf("ENTER THE TOTAL NO OF EMPLOYEES: ");
	scanf("%d", &a);
	printf("-----------------------------------\n");
	int i;
	for (i=0; i<a; i++)
	{
		// FOR GIVING THE EMPLOYEES DETAILS...
		
		printf("ENTER THE %d EMPLOYEE ID: ",i+1);
		scanf("%d", &info[i].id);
		printf("ENTER THE %d EMPLOYEE NAME: ",i+1);
		scanf("%s", info[i].name);
		printf("ENTER THE %d EMPLOYEE SALARY: ",i+1);
		scanf("%d",& info[i].salary);
	}
	int j;
	for (j=0; j<a;  j++ )
	{
		 printf("EMPLOYEE NAME : %s , EMPLOYEE ID : %d , EMPLOYEE SALARY : %d,RS/-,info[j].name, info[j].id, info[j].salary);
	}
	int k, highest;
	highest = info[i].salary;
	for ( k=0; k<a; k++)
	{
		if ( info[k].salary > highest)
			highest = info[k].salary;
	}
	printf("HIGHEST SALARY = %d RS/-",highest);
}

