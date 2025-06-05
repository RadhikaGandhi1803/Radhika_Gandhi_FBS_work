#include<stdio.h>
void main()
{
	int hours,minutes,seconds,total_seconds;
	printf("enter time as hours,minutes and seconds\n");
	scanf("%d\n%d\n%d",&hours,&minutes,&seconds);
	
	total_seconds=hours*3600+minutes*60+seconds;
	
	printf("Total seconds are %d ",total_seconds);	
}