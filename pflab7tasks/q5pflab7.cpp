#include <stdio.h>
int main(){
	int i, n=20;
	int array[n];
	
	printf("Enter %d array elements:",n);
	for (i=0;i<n;i++){
				scanf("%d",&array[i]);
	}
	printf("Elements in reverse order:");
	for(i=n-1;i>=0;i--){
		printf("%d",array[i]);
    
	}
	printf("\n");
	return 0;
	}
	
	