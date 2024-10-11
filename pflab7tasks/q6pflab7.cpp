#include <stdio.h>
int main(){
	int i, n=30,min,max;
	int array[n];
	
	printf("Enter %d array elements:",n);
	for (i=0;i<n;i++){
				scanf("%d",&array[i]);
	}
	
	min=max=array[0];
	
	for (i=1 ; i<n ; i++){
		if (array[i]<min){
			min=array[i];
		}else if(array[i]>max){
			max=array[i];
		}
	}
	printf("Minimum number:%d",min);
	printf("Maximum number:%d",max);
	
	return 0;
}