#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	printf("Enter third number:\n");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is greater",a);
		}
		else
		{
			printf("%d is greater",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is greater",b);
		}
		else
		{
			printf("%d is greater",c);
		}
	}
}