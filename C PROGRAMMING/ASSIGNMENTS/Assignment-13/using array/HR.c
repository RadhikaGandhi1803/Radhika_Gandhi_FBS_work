#include<stdio.h>
typedef struct HR
{
	int id;
	char name[20];
	double salary;
	double commission;
}HR;

void store(HR*,int);
void display(HR*,int);

void main()
{
	
	HR H1[50];
	int n;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&n);
	printf("**Details of student**\n");
	store(H1,n); 
	printf("**Details of student are**");
	display(H1,n);
}
void store(HR* H1,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Enter HR id ,name ,salary and commission");
	scanf("%d",&H1[i].id);
	scanf("%s",&H1[i].commission);
	scanf("%lf",&H1[i].salary);
	scanf("%lf",&H1[i].commission);
	}
}
	
	
void display(HR* H1,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\n");
	printf("HR ID-%d\nAdmin Name-%s\nHR Salary-%lf\nHR commission-%lf",H1[i].id,H1[i].name,H1[i].salary,H1[i].commission);
	}
}