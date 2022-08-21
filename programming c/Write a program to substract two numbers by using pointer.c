#include <stdio.h>
int main()
{
   int i, j, *p, *q, substract;
   
   printf("\n\n Pointer : substract two numbers :\n"); 
   printf("--------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%d", &i);
   printf(" Input the second  number : ");
   scanf("%d", &j);   
 
   p = &i;
   q = &j;
 
   substract = *p - *q;
 
   printf(" The substract of the entered numbers is : %d\n\n",substract);
 
   return 0;
}
