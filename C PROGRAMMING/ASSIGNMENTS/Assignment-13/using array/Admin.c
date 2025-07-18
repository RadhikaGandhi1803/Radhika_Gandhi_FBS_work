#include<stdio.h>
typedef struct Admin
{
	int aid;
	char name[20];
	double salary;
	double allowance;
}Admin;

void storeAdmin(Admin*,int);
void displayAdmin(Admin*,int);
void main()
{
	Admin A1[100];
	int size;
	printf("Enter the no. of elements you want to enter");
	scanf("%d",&size);
	printf("**Details of student**\n");
	storeAdmin(A1,size);
	printf("**Details of student are**\n");
	displayAdmin(A1,size);
	
}

void storeAdmin(Admin* A1,int size)
{
	for(int i=0;i<size;i++)
	{
	
		printf("Enter Admin id ,name ,salary and allowance");
		scanf("%d",&A1[i].aid);
		scanf("%s",A1[i].name);
		scanf("%lf",&A1[i].salary);
		scanf("%lf",&A1[i].allowance);
	}
}

void displayAdmin(Admin* A1,int size)
{	
	for(int i=0;i<size;i++)
	{
		printf("\n");
		printf("Admin ID-%d\nAdmin Name-%s\nAdmin Salary-%lf\nAdmin Allowance-%lf\n",A1[i].aid,A1[i].name,A1[i].salary,A1[i].allowance);
	
	}
}