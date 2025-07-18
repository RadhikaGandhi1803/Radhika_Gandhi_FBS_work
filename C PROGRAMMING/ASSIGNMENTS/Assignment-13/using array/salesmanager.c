#include<stdio.h>
typedef struct SalesManager
{
	int id;
	char name[20];
	double salary;
	int incentive;
	double target;
}SalesManager;

void store(SalesManager*,int);
void display(SalesManager*,int );

void main()
{
	
	SalesManager SM[50];
	int n;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&n);
	printf("**Details of student**\n");
	store(SM,n); 
	printf("**Details of student are**");
	display(SM,n);	
}

void store(SalesManager * SM,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Enter sales managers id ,name ,salary incentive and target");
	scanf("%d",&SM[i].id);
	scanf("%s",&SM[i].name);
	scanf("%lf",&SM[i].salary);
	scanf("%d",&SM[i].incentive);
	scanf("%lf",&SM[i].target);
	}
}

void display(SalesManager* SM,int n)
{	
	for(int i=0;i<n;i++)
	{
	printf("\n");
	printf(" sales manager ID-%d\n sales managerName-%s\n sales manager Salary-%lf\n sales manager incentive-%d\n sales manager taget-%lf\n",SM[i].id,SM[i].name,SM[i].salary,SM[i].incentive,SM[i].target);
}
}