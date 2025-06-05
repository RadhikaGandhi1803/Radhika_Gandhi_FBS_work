#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year you wnat to check:\n");
	scanf("%d",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
}