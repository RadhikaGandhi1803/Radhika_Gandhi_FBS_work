#include<stdio.h>
typedef struct Distance
{
	int feet;
	float inch;
	
}Distance;

void store(Distance*,int);
void display(Distance*,int);
void main()
{
	
	Distance D1[100];
	int size;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&size);
	printf("**Details of student**\n");
	store(D1,size); 
	printf("**Details of student are**");
	display(D1,size);
}

void store(Distance* d,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("Enter distance in feet and inch");
	scanf("%d",&d[i].feet);
	scanf("%f",&d[i].inch);
	}
}

void display(Distance* d,int size)
{
	for(int i=0;i<size;i++)
	{

	printf("\n");
	printf("Feet=%d\nInch=%f\n",d[i].feet,d[i].inch);
	}
}