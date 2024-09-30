#include <stdio.h>
int main(){
	float purchaseamount;
	int membershipstatus;
	
	printf("Enter the total purchase amount:");
	scanf("%f",&purchaseamount);
	printf("Enter membership status (0 or 1):");
	scanf("%d",&membershipstatus);
	
	(purchaseamount>100 &&  membershipstatus==1)? printf("You are eligible for a discount"): printf("You are not eligible for a discount");
	
	return 0;
}