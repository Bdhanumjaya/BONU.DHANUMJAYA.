#include<stdio.h>
int main(){
	int marks;
	printf("Enter your marks: ");
	scanf("%d" ,&marks);
	if(marks <0||marks>100)
	{
		print(" wrong entry");
	}
	else if (marks < 40)          
	{
		printf("Grade F");
	}
	else if (marks >= 40 && marks <50){
		printf("Grade D");
	}
	else if (marks >=50 && marks <60){
		printf ("Grade C");
	}
	else if (marks >60 && marks <70){
		printf("Grade B");
	}
    else if (marks >70 && marks <80){
		printf("Grade A");
	}
	else if  (marks >80 && marks <90){
		printf("Grade E");
	}
	else {
		printf ("Grade O");
	}
	return 0;
}
