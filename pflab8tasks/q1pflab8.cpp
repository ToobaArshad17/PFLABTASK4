#include <stdio.h>
int main(){
	int array1[3][3];
	int rowsum,colsum;
	int i,j;
	
	printf("Enter the elements of the 3x3 matrix:\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&array1[i][j]);						
		}		
	}
	
	printf("\n Sum of each row:");
	for(i=0;i<3;i++){
		rowsum=0;
		 for(j=0;j<3;j++){
		 	rowsum+=array1[i][j];
		 }
		 printf("Row %d sum :%d\n",i+1,rowsum);
	}
	
	printf("\n Sum of each column:");
	for(j=0;j<3;j++){
		colsum=0;
		 for(i=0;i<3;i++){
		 	colsum+=array1[i][j];
		 }
		 printf("Row %d sum :%d\n",j+1,colsum);
	}
	
	return 0;
}