#include<stdio.h>
typedef struct Distance
{
	int feet;
	float inch;
	
}Distance;

Distance store();
void display(Distance);

void main()
{
	
	Distance d;
	d=store();
	display(d);
}

Distance store()
{
	Distance d;
	printf("Enter distance in feet and inch");
	scanf("%d",&d.feet);
	scanf("%f",&d.inch);
	return d;
	
}

void display(Distance d)
{
	printf("\n");
	printf("Feet%d\nInch=%f\n",d.feet,d.inch);
}