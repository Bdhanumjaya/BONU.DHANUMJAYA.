#include <stdio.h>
 
int main()
{
	char S[]=("Ramu is a good boy");
int i;
for(i=0;S[i]!='\0';++i);
printf("Length of the string : %d",i);
return 0;
}
