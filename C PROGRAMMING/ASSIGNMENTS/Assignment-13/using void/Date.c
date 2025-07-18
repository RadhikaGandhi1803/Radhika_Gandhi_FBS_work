#include<stdio.h>
typedef struct Date
{
	int day;
	int month;
	int year;
}Date;


void main()
{
	
	Date D1;
	printf("Enter day,month and year");
	scanf("%d",&D1.day);
	scanf("%d",&D1.month);
	scanf("%d",&D1.year);
	
	
	
	printf("\n");
	printf("Day =%d\nMonth=%d\nYear=%d\n",D1.day,D1.month,D1.year);
}