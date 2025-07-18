#include<stdio.h>
typedef struct Employee
{
	int eid;
	char name[20];
	double salary;
}Employee;

void store(Employee*,int);
void display(Employee* ,int);

void main()
{
	
	Employee E1[50];
	int size;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&size);
	printf("**Details of student**\n");
	store(E1,size); 
	printf("**Details of student are**");
	display(E1,size);
}

void store(Employee* E1,int n)
{
	for(int i=0;i<n;i++)
	{
	printf("Enter employee id ,name and salary");
	scanf("%d",&E1[i].eid);
	scanf("%s",&E1[i].name);
	scanf("%lf",&E1[i].salary);
	}
}

void display(Employee* E1,int n)
{
	for(int i=0;i<n;i++)
	{	
	printf("\n");
	printf("Employee ID-%d\nEmployee Name-%s\nEmployee Salary-%lf",E1[i].eid,E1[i].name,E1[i].salary);
	}
}