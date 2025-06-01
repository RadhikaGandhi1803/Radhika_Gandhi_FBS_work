#include<stdio.h>
void main()
{
	int minutes=127;
	int hours,rem_minutes;
	
	hours=minutes/60;
	rem_minutes=minutes%60;
	
	printf("The total hours and remaining minutes are:\n %dhrs and %dmin",hours,rem_minutes);
}