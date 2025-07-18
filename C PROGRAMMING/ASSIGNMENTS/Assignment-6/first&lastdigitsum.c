
//TYPE-3
#include<stdio.h>
void sum(int*);
void main()
{
	int n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	sum(&n);
}
void sum(int* n)
{
	int num,fdigit,ldigit,sum=0;
	num=*n;
	ldigit=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	fdigit=num;
	sum=fdigit+ldigit;
	printf("Sum of first and last digit of %d is %d ",*n,sum);
}
