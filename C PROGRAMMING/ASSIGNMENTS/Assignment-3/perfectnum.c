#include<stdio.h>
void main() {
	int num,i=1,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(i<=num/2) {
		if(num%i==0) {
			sum+=i;
		}
		i++;
	}
	if(sum==num && num!=0) {
		printf("The number is perfect");
	} else {
		printf("not");
	}
}