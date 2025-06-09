#include<stdio.h>
void main()
{
	int n,num,fdigit,ldigit,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
	
	ldigit=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	fdigit=num;
	sum=fdigit+ldigit;
	printf("Sum of first and last digit of %d is %d ",n,sum);
}