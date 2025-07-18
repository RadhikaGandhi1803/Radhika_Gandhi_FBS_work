#include<stdio.h>
typedef struct Time
{
	int hours;
	int minute;
	int second;
}Time;


void main()
{
	
	Time T1;
	printf("Enter hour, min, sec");
	scanf("%d",&T1.hours);
	scanf("%d",&T1.minute);
	scanf("%d",&T1.second);
	
	printf("\n");
	printf("Hours =%d\nMinutes=%d\nSeconds=%d\n",T1.hours,T1.minute,T1.second);
}