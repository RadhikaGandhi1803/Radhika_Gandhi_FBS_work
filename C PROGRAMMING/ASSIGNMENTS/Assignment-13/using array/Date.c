#include<stdio.h>
typedef struct Date
{
	int day;
	int month;
	int year;
}Date;

void store(Date*,int);
void display(Date*,int);
void main()
{
	Date D1[100];
	int size;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&size);
	printf("**Details of student**\n");
	store(D1,size);
	printf("**Details of student are**");
	display(D1,size);
}

void store(Date* D1,int size)
{
	for(int i=0;i<size;i++)
	{
	
	printf("Enter day,month and year");
	scanf("%d",&D1[i].day);
	scanf("%d",&D1[i].month);
	scanf("%d",&D1[i].year);
	}
}

void display(Date* D1,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("\n");
	printf("Day =%d\nMonth=%d\nYear=%d\n",D1[i].day,D1[i].month,D1[i].year);
	}
}