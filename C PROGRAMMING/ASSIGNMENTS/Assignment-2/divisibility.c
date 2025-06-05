#include<stdio.h>
void main() {
	int num;
	printf("Enter the number:");
	scanf("%d",&num);

	if(num%3==0 && num%5!=0) 
			printf("The num is divisible by 3 but not 5");
	else if(num%5==0 && num%3!=0) 
			printf("The num is divisible by 5 but not 3");
	else if(num%5==0 && num%3==0) 
			printf("The num is divisible both");
	else 
			printf("The num is not divisible by none");
		
}