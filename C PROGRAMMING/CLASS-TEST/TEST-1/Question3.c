#include<stdio.h>
void main()
{
	int num,r1,r2,q1;
	printf("Enter the number:\n");
	scanf("%d",&num);
	
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	
	printf("%d%d",r2,r1);
}