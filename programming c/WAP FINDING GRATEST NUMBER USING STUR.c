#include <stdio.h>
struct student {
	int roll;
	char name [20];
	int marks;
}info[3];
int main(){
	int i;
	for (i=0;i<3;i++){
		printf("ENTER THE %d STUDENT ROLL NO: ",i+1);
		scanf("%d",&info[i].roll);
		printf("ENTER THE %d STUDENT NAME: ",i+1);
		scanf("%s",&info[i].name);
		printf("ENTER THE %d STUDENT MARKS: ",i+1);
		scanf("%d",&info[i].marks);
		
	}
	int a;
	for (a=0;a<3;a++){
		printf("\n NAME = %s, ROLL NO = %d, MARKS = %d ",info[a].name,info[a].roll,info[a].marks);
	}
	int max,m;
	max= info[i].marks;
	for (m=0;m<3;m++){
		if (info[m].marks>max)
			max = info[m].marks;
	}
	printf("\n\n HIGHEST MARKS: %d",max);
}
