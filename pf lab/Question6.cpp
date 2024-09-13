#include <stdio.h>
int main() {
	int firstnum,secondnum;
	 printf("enter first and second num:");
	 scanf("%d%d",&firstnum,&secondnum);
	 
	 if (firstnum>secondnum) {
	 	if (firstnum>100) {
	 		printf("First number is significantly larger");
	 } else {
	 	printf("First number is larger");
	 } 
	 }else if (firstnum<secondnum){
	 	if (firstnum<0){
	 		printf("First number is negative and smaller");	 
	 } else {
	 	printf("First number is smaller");
	 }
     }
     else{
     	printf("Both numbers are equal");
	 }
	 return 0;
	 }

	 
