#include <stdio.h>
 struct student
{
	int roll;
	char name[20];
	int mark;
	}s;
	int main()
	{
		struct student *p;
		p=&s;
	printf("Enter roll no:");
	scanf("%d",&p->roll);
	printf("Enter mark:");
	scanf("%s",p->name);
	printf("Enter mark:");
	scanf("%d",p->mark);
	printf("%d",p->roll);
	printf("%s",p->name);
	printf("%d",p->mark);
	return 0;
}
