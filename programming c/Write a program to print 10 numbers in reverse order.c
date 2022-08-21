#include <stdio.h>
 
int main()
{
	int i=10;
	while(i>=0)
	{
		if(i==0)
		{
			i--;
			continue;
			}
			
	printf("%d\n",i);
	i--;
	}
	return 0;
}
