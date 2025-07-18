#include<stdio.h>
typedef struct Admin
{
	int aid;
	char name[20];
	double salary;
	double allowance;
}Admin;


void storeAdmin(Admin*);
void displayAdmin(Admin);
void main()
{
	Admin A1;
	printf("**Details of student**\n");
	storeAdmin(&A1);
	printf("**Details of student are**\n");
	displayAdmin(A1);
	
}


void storeAdmin(Admin* A1)
{
	printf("Enter Admin id ,name ,salary and allowance");
	scanf("%d",&A1->aid);
	scanf("%s",&A1->name);
	scanf("%lf",&A1->salary);
	scanf("%lf",&A1->allowance);
}

void displayAdmin(Admin A1)
{	
	printf("\n");
	printf("Admin ID-%d\nAdmin Name-%s\nAdmin Salary-%lf\nAdmin Allowance-%lf",A1.aid,A1.name,A1.salary,A1.allowance);

}