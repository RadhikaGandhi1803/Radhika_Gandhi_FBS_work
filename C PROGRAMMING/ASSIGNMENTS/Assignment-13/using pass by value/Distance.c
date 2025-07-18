#include<stdio.h>
typedef struct Distance
{
	int feet;
	float inch;
	
}Distance;

void store(Distance*);
void display(Distance);
void main()
{
	
	Distance D1;
	printf("**Details of student**\n");
	store(&D1); 
	printf("**Details of student are**");
	display(D1);
}

void store(Distance* d)
{
	printf("Enter distance in feet and inch");
	scanf("%d",&d->feet);
	scanf("%f",&d->inch);
	
}

void display(Distance d)
{
	printf("\n");
	printf("Feet=%d\nInch=%f\n",d.feet,d.inch);
}