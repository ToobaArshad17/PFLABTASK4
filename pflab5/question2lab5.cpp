#include <stdio.h>
int main(){
	int angle1,angle2,angle3,sum;
	printf("Enter first angle:");
	scanf("%d",&angle1);
	printf("Enter second angle:");
	scanf("%d",&angle2);
	printf("Enter third angle:");
	scanf("%d",&angle3);
	
	if (angle1>=0 && angle2>=0 && angle3>=0) {
		sum = angle1 + angle2 + angle3;
		if (sum == 180) {
			printf("TRIANGLE IS VALID");
		} else {
			printf("INVALID TRIANGLE");
		}
	}
	else{
		printf("ANGLE CANNOT BE NEGATIVE. RE-ENTER ANGLE");
	}
	return 0;
}
