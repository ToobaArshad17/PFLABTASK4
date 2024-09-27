#include <stdio.h>
int main(){
	int percentage;
		
	printf("enter your percentage:");
	scanf("%d",&percentage);
	
	char grade = (percentage>=90 && percentage<=100)?'A':
			(percentage>=80 && percentage<=89)?'B':
			(percentage>=70 && percentage<=79)?'C':
			(percentage>=60 && percentage<=69)?'D':	
			(percentage<60 && percentage>0)?'F':
	
	printf("Students grade; %c\n",grade);
	return 0;
}