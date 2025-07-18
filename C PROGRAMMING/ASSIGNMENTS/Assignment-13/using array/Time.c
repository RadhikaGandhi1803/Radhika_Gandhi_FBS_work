#include<stdio.h>
typedef struct Time
{
	int hours;
	int minute;
	int second;
}Time;

void store(Time*,int);
void display(Time*,int);

void main()
{
	
	Time T1[50];
	int n;
	printf("Enter thr no. of elements you want to enter");
	scanf("%d",n);
	printf("**Details of student**\n");
	store(T1,n); 
	printf("**Details of student are**");
	display(T1,n);
}

void store(Time* T1,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Enter hour, min, sec");
	scanf("%d",&T1[i].hours);
	scanf("%d",&T1[i].minute);
	scanf("%d",&T1[i].second);
	
}
	
void display(Time* T1,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\n");
	printf("Hours =%d\nMinutes=%d\nSeconds=%d\n",T1[i].hours,T1[i].minute,T1[i].second);
	}
}