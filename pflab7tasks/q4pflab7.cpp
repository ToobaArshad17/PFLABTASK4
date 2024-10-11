#include <stdio.h>
int main(){
	int i , sum=0;
	int n = 15;	
	int array1[n];
	
	printf("Enter %d array elements:",n);
	for (i=0;i<n;i++){
				scanf("%d",&array1[i]);
	}
	for (i=0;i<n;i++){
		sum += array1[i];
	}
	
	printf("Sum of elements:%d",sum);
	return 0;
		
}