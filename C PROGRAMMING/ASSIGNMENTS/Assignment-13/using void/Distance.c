#include<stdio.h>
typedef struct Distance
{
	int feet;
	float inch;
	
}Distance;


void main()
{
	
	Distance d;
	printf("Enter ditance in feet and inch");
	scanf("%d",&d.feet);
	scanf("%f",&d.inch);
	
	printf("\n");
	printf("feet=%d\ninch=%f\n",d.feet,d.inch);
}