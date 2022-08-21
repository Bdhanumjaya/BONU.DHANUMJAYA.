#include <stdio.h>
int main(){
	int i,j,arr[5][5];
	printf("Enter matrix element as matrix form : \n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nZigzag sequence is : ");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==0||i+j==4||i==4
		)
				printf("%d ",arr[i][j]);
		}	
	}
	
	
	
}
	
	
	
	
	
	
	
	
