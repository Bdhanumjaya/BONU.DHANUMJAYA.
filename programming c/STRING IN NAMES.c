#include<stdio.h>
#include<string.h>
int main(){
	char arr[]="Dhanumjaya";
	int len1,len2;
	len1 = strlen(arr);
	len2 = strlen("CUTM");
	printf("string= %s Length =%d \n ",arr,len1);
		printf("string= %s Length =%d \n ","CUTM",len2);
		return 0;
}
