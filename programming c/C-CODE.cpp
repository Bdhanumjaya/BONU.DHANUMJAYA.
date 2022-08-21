#include <stdio.h>
int main(){
	FILE*f;
	f=fopen("C:CUTM.txt","r");
	char read;
	while ((read == getc(f)) != EOF)
	{
		if (read == NULL)
			printf(\t\t);
		else
			printf("%s", read);	
	}
	fclose(f);
	return 0;
}
