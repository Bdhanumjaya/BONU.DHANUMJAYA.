#include<stdio.h>
int main () {
	int a,b;
	printf("ENTER A VALUE: ");
	scanf("%d", &a);
	printf("ENTER A VALUE: ");
	scanf("%d", &b);
	if (a>b)
	printf("%d is Greater " ,a);
	else if (b>a)
	printf("%d is Greater ",b);
	else
	 printf("Both are equal");
}
