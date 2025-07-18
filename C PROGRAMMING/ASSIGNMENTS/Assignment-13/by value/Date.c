#include<stdio.h>
typedef struct Date
{
	int day;
	int month;
	int year;
}Date;

Date store();
void display(Date);
void main()
{
	
	Date D1;
	D1=store();
	display(D1);
}

Date store()
{
	Date D1;
	printf("Enter day,month and year");
	scanf("%d",&D1.day);
	scanf("%d",&D1.month);
	scanf("%d",&D1.year);
	
	return D1;
}

void display(Date D1)
{

	printf("\n");
	printf("Day =%d\nMonth=%d\nYear=%d\n",D1.day,D1.month,D1.year);
}